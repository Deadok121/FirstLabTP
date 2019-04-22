//
// Created by Roman Oborin on 2019-04-05.
//

#ifndef FIRSLAB_QUEUE_H
#define FIRSLAB_QUEUE_H


#include "Node.h"

class Queue {
private:
    Node *lastNode = nullptr;
    int lenght = 0;
public:
    Queue() = default;;

    ~Queue();


    Queue(Queue &queue);

    int getLenght() {
        return lenght;
    }

    void incrementLenght() { lenght++; }

    void decrementLenght() { lenght--; }

    void setLength(int lenght) {
        this->lenght = lenght;
    }

    void addNode(float value);

    float pop();

    void display();

    Node *getLastNode() {
        return lastNode;
    }

    void *setLastNode(Node *node) { lastNode = node; }

    Queue getCopy();

    Queue mergeWith(Queue second);
};

#endif //FIRSLAB_QUEUE_H
