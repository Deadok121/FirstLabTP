//
// Created by Roman Oborin on 2019-04-05.
//

#ifndef FIRSLAB_QUEUE_H
#define FIRSLAB_QUEUE_H


#include "Node.h"

class Queue {
private:
    Node *firstNode = nullptr;
    int lenght = 0;
public:
    Queue(){};
    ~Queue(){};
    int getLenght() {
        return lenght;
    }

    void incrementLenght() { lenght++; }

    void decrementLenght() { lenght--; }

    void addNode(float value);

    float pop();

    void display();

    Node *getFirstNode() {
        return firstNode;
    }

    void *setFirstNode(Node *node) { firstNode = node; }

    Queue getCopy();
};

Queue merge(Queue first,Queue second);

#endif //FIRSLAB_QUEUE_H
