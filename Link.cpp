#include "Link.h"

void Link::processIncomingMessage(int distance) {
	child->processIncomingMessage(distance + this->distance);
}