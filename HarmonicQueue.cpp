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
    Node *node = getLastNode();
    invertedSum += 1 / node->getValue();
    while (node->getPrevious() != nullptr) {
        node = node->getPrevious();
        invertedSum += 1 / node->getValue();
    }
    return count / invertedSum;
}

