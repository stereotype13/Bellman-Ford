#pragma once
#include <list>
#include "Node.h"
#include "Link.h"

class Network {
public:
	Node* root;
	std::list<Node*> nodes;
	std::list<Link*> links;

	void addRoot(Node* root) {
		this->root = root;
		addNode(root);
	}

	void addNode(Node* node) {
		nodes.push_back(node);
		for(const auto& link : node->getOutgoingLinks()) {
			links.push_back(link);
		}
	}

	~Network() {
		for(auto& node : nodes)
			delete node;

		for(auto& link : links)
			delete link;
	}

	void begin() {
		root->forwardMessages();
	}

	void print() {
		for(const auto& node : nodes) {
			node->print();
			std::cout << std::endl;
		}
	}


};