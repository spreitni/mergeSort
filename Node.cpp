#include "Node.hpp"
#include <stdlib.h>

Node::Node(Node* payload)
{
    this->getPayload = payload;
    this->prevNode = NULL;
    this->nextNode = NULL;
}

Node *Node::getPayload()
{
    return this->getPayload;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}

Node* Node::getPrevNode()
{
    return this->prevNode;
}

void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}

void Node::setPrevNode(Node* n)
{
    this->prevNode = n;
}
void Node::display()
{

}