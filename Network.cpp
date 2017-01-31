#include <iostream>
#include "Network.h"

void Network::addRoot(Node* root) {
	this->root = root;
	addNode(root);
}

void Network::addNode(Node* node) {
	nodes.push_back(node);
	for(const auto& link : node->getOutgoingLinks()) {
		links.push_back(link);
	}
}

Network::~Network() {
	for(auto& node : nodes)
		delete node;

	for(auto& link : links)
		delete link;
}

void Network::begin() {
	root->forwardMessages();
}

void Network::print() {
	for(const auto& node : nodes) {
		node->print();
		std::cout << std::endl;
	}
}