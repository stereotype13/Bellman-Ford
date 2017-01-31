#pragma once
#include <string>
#include <list>

#define INFINITY 1000

class Link;

class Node {
private:
	std::string name;
	int distanceToRoot;
	std::list<Link*> incomingLinks;
	std::list<Link*> outgoingLinks;

public:
	Node() : name{""}, distanceToRoot{INFINITY} {}
	Node(std::string name) : name{name}, distanceToRoot{INFINITY} {}
	Node(std::string name, int distance) : name{name}, distanceToRoot{distance} {}

	void processIncomingMessage(int distance);

	void addIncomingLink(Link* link);

	void addOutgoingLink(Link* link);

	void forwardMessages();

	std::list<Link*>& getOutgoingLinks();

	std::list<Link*>& getIncomingLinks();

	void print();
};