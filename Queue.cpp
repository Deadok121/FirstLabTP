//
// Created by Roman Oborin on 2019-04-05.
//

#include <stdexcept>
#include <iostream>
#include "Queue.h"

using namespace std;

Queue merge(Queue first, Queue second) {
    Queue result;
    Node *copy = first.getFirstNode();
    result.addNode(copy->getValue());
    while (copy->getNextNode() != nullptr) {
        copy = copy->getNextNode();
        result.addNode(copy->getValue());
    }
    copy = second.getFirstNode();
    result.addNode(copy->getValue());
    while (copy->getNextNode() != nullptr) {
        copy = copy->getNextNode();
        result.addNode(copy->getValue());
    }
    return result;
}

void Queue::addNode(float value) {
    if (getFirstNode() == nullptr) {
        Node *firstNode = new Node(value);
        setFirstNode(firstNode);
        incrementLenght();
        return;
    }

    Node *oldNode = getFirstNode();
    Node *newNode = new Node(value);
    while (oldNode->getNextNode() != nullptr) {
        oldNode = oldNode->getNextNode();
    }
    oldNode->setNextNode(newNode);
    incrementLenght();
}

float Queue::pop() {
    if (getFirstNode() == nullptr) {
        throw invalid_argument("Queue is empty!");
    }

    Node *node = getFirstNode();
    float deletingValue;
    if (node->getNextNode() != nullptr) {
        setFirstNode(node->getNextNode());
    }
    deletingValue = node->getValue();
    cout << "Deleted : " << deletingValue << endl;
    delete node;
    decrementLenght();
    return deletingValue;
}

void Queue::display() {
    if (getFirstNode() == nullptr) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node *node = getFirstNode();
    cout << " " << node->getValue() << " ";
    while (node->getNextNode() != nullptr) {
        node = node->getNextNode();
        cout << " " << node->getValue() << " ";
    }
    cout << endl;
}

Queue Queue::getCopy() {
    if (getFirstNode() == nullptr) {
        throw invalid_argument("Queue is empty!");
    }

    Node *node = getFirstNode();
    Queue queue;
    queue.addNode(node->getValue());
    while (node->getNextNode() != nullptr) {
        node = node->getNextNode();
        queue.addNode(node->getValue());
    }
    return queue;
}
