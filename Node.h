#pragma once
#include <string>
#include <list>
#include <climits>

class Link;

class Node {
private:
	std::string name;
	int distanceToRoot;
	std::list<Link*> incomingLinks;
	std::list<Link*> outgoingLinks;

public:
	Node() : name{""}, distanceToRoot{LONG_MAX} {}
	Node(std::string name) : name{name}, distanceToRoot{LONG_MAX} {}
	Node(std::string name, int distance) : name{name}, distanceToRoot{distance} {}

	void processIncomingMessage(int distance);

	void addIncomingLink(Link* link);

	void addOutgoingLink(Link* link);

	void forwardMessages();

	std::list<Link*>& getOutgoingLinks();

	std::list<Link*>& getIncomingLinks();

	void print();
};