#pragma once
#include <string>
#include <list>


class Link;

class Node {
public:
	Node() : name{""}, distanceToRoot{1000} {}
	Node(std::string name) : name{name}, distanceToRoot{1000} {}
	Node(std::string name, int distance) : name{name}, distanceToRoot{distance} {}

	std::string name;
	int distanceToRoot;
	std::list<Link*> incomingLinks;
	std::list<Link*> outgoingLinks;

	void processIncomingMessage(int distance);

	void addIncomingLink(Link* link);

	void addOutgoingLink(Link* link);

	void forwardMessages();

	std::list<Link*>& getOutgoingLinks();

	std::list<Link*>& getIncomingLinks();

	void print();
};