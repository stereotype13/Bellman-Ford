#include <iostream>
#include "Node.h"
#include "Link.h"

void Node::processIncomingMessage(int distance) {
	if(distance < distanceToRoot) {
		distanceToRoot = distance;
		print();
		std::cout << std::endl;
		forwardMessages();
	}
		
}

void Node::addIncomingLink(Link* link) {
	incomingLinks.push_back(link);
}

void Node::addOutgoingLink(Link* link) {
	outgoingLinks.push_back(link);
}

void Node::forwardMessages() {
	for(const auto& link : outgoingLinks) {
		link->processIncomingMessage(distanceToRoot);
	}
}

std::list<Link*>& Node::getOutgoingLinks() {
	return outgoingLinks;
}

std::list<Link*>& Node::getIncomingLinks() {
	return incomingLinks;
}

void Node::print() {
	std::cout << name + ": " + std::to_string(distanceToRoot);
}