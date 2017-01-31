#pragma once
#include "Node.h"

class Link {
public:
	Link() : parent{nullptr}, child{nullptr}, distance{0} {}
	Link(Node* parent, Node* child, int distance) : parent{parent}, child{child}, distance{distance} {}
	Node* parent;
	Node* child;
	int distance;

	void processIncomingMessage(int distance);
};