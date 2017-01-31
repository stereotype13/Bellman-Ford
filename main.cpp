#include <iostream>

#include "Network.h"
#include "Node.h"
#include "Link.h"

int main(int argc, char const *argv[])
{
	Network network;

	Node* node_0 = new Node("0", 0);
	Node* node_1 = new Node("1");
	Node* node_2 = new Node("2");
	Node* node_3 = new Node("3");
	Node* node_4 = new Node("4");
	Node* node_5 = new Node("5");
	Node* node_6 = new Node("6");
	Node* node_7 = new Node("7");

	node_0->addOutgoingLink(new Link(node_0, node_1, 5));
	node_0->addOutgoingLink(new Link(node_0, node_4, 9));
	node_0->addOutgoingLink(new Link(node_0, node_7, 8));
	network.addRoot(node_0);

	node_1->addOutgoingLink(new Link(node_1, node_2, 12));
	node_1->addOutgoingLink(new Link(node_1, node_3, 15));
	node_1->addOutgoingLink(new Link(node_1, node_7, 4));
	network.addNode(node_1);

	node_2->addOutgoingLink(new Link(node_2, node_3, 3));
	node_2->addOutgoingLink(new Link(node_2, node_6, 11));
	network.addNode(node_2);

	node_3->addOutgoingLink(new Link(node_3, node_6, 9));
	network.addNode(node_3);

	node_4->addOutgoingLink(new Link(node_4, node_5, 4));
	node_4->addOutgoingLink(new Link(node_4, node_6, 20));
	node_4->addOutgoingLink(new Link(node_4, node_7, 5));
	network.addNode(node_4);

	node_5->addOutgoingLink(new Link(node_5, node_2, 1));
	node_5->addOutgoingLink(new Link(node_5, node_6, 13));
	network.addNode(node_5);

	network.addNode(node_6);

	node_7->addOutgoingLink(new Link(node_7, node_2, 7));
	node_7->addOutgoingLink(new Link(node_7, node_5, 6));
	network.addNode(node_7);

	network.begin();
	std::cout << std::endl;
	network.print();

	return 0;
}