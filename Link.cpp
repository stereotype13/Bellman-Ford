#include "Link.h"

void Link::processIncomingMessage(int distance) {
	child->processIncomingMessage(distance + this->distance);
}

Node* Link::getParent() {
	return parent;
}

Node* Link::getChild() {
	return child;
}