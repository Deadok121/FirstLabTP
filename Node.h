//
// Created by Roman Oborin on 2019-04-05.
//

#ifndef FIRSLAB_NODE_H
#define FIRSLAB_NODE_H


class Node {
private:
    Node *next;
    float value;
public:
    float getValue() {
        return value;
    };

    void setValue(float value) {
        this->value = value;
    }

    Node* getNextNode() {
        return next;
    }

    void setNextNode(Node *node) {
        next = node;
    }
};
#endif //FIRSLAB_NODE_H
