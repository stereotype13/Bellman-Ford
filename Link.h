#pragma once
#include "Node.h"

class Link {
private:
	Node* parent;
	Node* child;
	int distance;

public:
	Link() : parent{nullptr}, child{nullptr}, distance{0} {}
	Link(Node* parent, Node* child, int distance) : parent{parent}, child{child}, distance{distance} {}

	Node* getParent();
	Node* getChild();

	void processIncomingMessage(int distance);
};