//
// Created by Roman Oborin on 2019-04-05.
//

#ifndef FIRSLAB_NODE_H
#define FIRSLAB_NODE_H


class Node {
private:
    Node *previous;
    float value;
public:
    Node(float value) { this->value = value; }

    ~Node() {};

    float getValue() {
        return value;
    };

    Node *getPrevious() {
        return previous;
    }

    void setPrevious(Node *node) {
        previous = node;
    }
};

#endif //FIRSLAB_NODE_H
