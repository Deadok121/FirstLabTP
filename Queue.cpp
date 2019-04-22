//
// Created by Roman Oborin on 2019-04-05.
//

#include <stdexcept>
#include <iostream>
#include "Queue.h"

using namespace std;

Queue Queue::mergeWith(Queue second) {
    Queue result = getCopy();
    Node *last = second.getLastNode();
    int i = getLenght();
    while (i > 0) {
        for (int j = i; j > 1; j--) {
            last = last->getPrevious();
        }
        result.addNode(last->getValue());
        last = second.getLastNode();
        i--;
    }
    return result;
}

void Queue::addNode(float value) {
    if (getLastNode() == nullptr) {
        Node *firstNode = new Node(value);
        setLastNode(firstNode);
        incrementLenght();
        return;
    }

    Node *oldNode = getLastNode();
    Node *newNode = new Node(value);
    newNode->setPrevious(oldNode);
    setLastNode(newNode);
    incrementLenght();
}

float Queue::pop() {
    if (getLastNode() == nullptr) {
        cout << "Queue is empty!" << endl;
        return 0;
    }
    if (getLenght() == 1) {
        float deletingValue = getLastNode()->getValue();
        getLastNode()->setPrevious(nullptr);
        delete getLastNode();
        decrementLenght();
        setLastNode(nullptr);
        return deletingValue;
    }

    Node *last = getLastNode();
    int i = getLenght();
    while (i > 2) {
        last = last->getPrevious();
        i--;
    }
    Node *deleting = last->getPrevious();
    last->setPrevious(nullptr);
    delete deleting;
    float deletingValue = deleting->getValue();
    decrementLenght();
    return deletingValue;
}

void Queue::display() {
    if (!getLastNode() || getLenght() == 0) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node *node = getLastNode();
    cout << " " << node->getValue() << " ";
    for (int i = 0; i < getLenght() - 1; i++) {
        node = node->getPrevious();
        cout << " " << node->getValue() << " ";
    }
    cout << endl;
}

Queue Queue::getCopy() {
    if (getLastNode() == nullptr) {
        Queue queue;
        return queue;
    }

    Node *last = getLastNode();
    Queue queue;
    int i = getLenght();
    while (i > 0) {
        for (int j = i; j > 1; j--) {
            last = last->getPrevious();
        }
        queue.addNode(last->getValue());
        last = getLastNode();
        i--;
    }
    return queue;
}

Queue::~Queue() {
    int j = getLenght() - 1;
    for (int i = 0; i < j; i++) {
        pop();
    }
    setLastNode(nullptr);
    setLength(0);
}

Queue::Queue(Queue &queue) {
    int i = queue.lenght;
    Node *last = queue.getLastNode();
    while (i > 0) {
        for (int j = i; j > 1; j--) {
            last = last->getPrevious();
        }
        addNode(last->getValue());
        last = queue.getLastNode();
        i--;
    }
};