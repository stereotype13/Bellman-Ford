#pragma once
#include <list>
#include "Node.h"
#include "Link.h"

class Network {
private:
	Node* root;
	std::list<Node*> nodes;
	std::list<Link*> links;

public:

	void addRoot(Node* root);

	void addNode(Node* node);

	~Network();

	void begin();

	void print();


};