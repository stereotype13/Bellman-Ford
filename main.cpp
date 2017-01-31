#include <iostream>

#include "Network.h"
#include "Node.h"
#include "Link.h"

int main(int argc, char const *argv[])
{
	Network network;

	Node* A = new Node("A", 0);
	Node* B = new Node("B");
	Node* C = new Node("C");
	Node* D = new Node("D");
	Node* E = new Node("E");
	Node* F = new Node("F");

	A->addOutgoingLink(new Link(A, B, 2));
	A->addOutgoingLink(new Link(A, C, 1));
	network.addRoot(A);

	B->addOutgoingLink(new Link(B, E, 2));
	network.addNode(B);

	C->addOutgoingLink(new Link(C, D, 2));
	network.addNode(C);

	D->addOutgoingLink(new Link(D, B, -3));
	network.addNode(D);

	E->addOutgoingLink(new Link(E, D, 1));
	E->addOutgoingLink(new Link(E, F, 1));
	network.addNode(E);

	F->addOutgoingLink(new Link(F, B, 3));
	network.addNode(F);

	network.begin();
	std::cout << std::endl;
	network.print();

	return 0;
}