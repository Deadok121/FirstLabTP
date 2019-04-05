//
// Created by Roman Oborin on 2019-04-05.
//

#include "Node.h"
#include "HarmonicQueue.h"

float HarmonicQueue::findHarmonicMean() {
    int count = getLenght();
    if (count == 0) {
        return 0;
    }

    float invertedSum = 0;
    Node *node = getFirstNode();
    invertedSum += 1 / node->getValue();
    while (node->getNextNode() != nullptr) {
        node = node->getNextNode();
        invertedSum += 1 / node->getValue();
    }
    return count / invertedSum;
}

