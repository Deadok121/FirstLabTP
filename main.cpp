#include <iostream>
#include "HarmonicQueue.h"

using namespace std;

void printOptions();

int main() {
    HarmonicQueue queue;
    HarmonicQueue secondQueue;
    printOptions();
    int choice;
    do {
        cout << "Enter your choice : " << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                float value;
                cout << "Value : " << endl;
                cin >> value;
                queue.addNode(value);
                break;
            case 2:
                float val;
                cout << "Value : " << endl;
                cin >> val;
                secondQueue.addNode(val);
                break;
            case 3:
                queue.pop();
                break;
            case 4:
                secondQueue.pop();
                break;
            case 5:
                cout << "\nFirst queue :";
                queue.display();
                cout << "\nSecond queue :";
                secondQueue.display();
                break;
            case 6:
                cout << "\nHarmonic mean first queue : "
                     << queue.findHarmonicMean() << endl;
                break;
            case 7:
                cout << "\nHarmonic mean second queue : "
                     << secondQueue.findHarmonicMean() << endl;
                break;
            case 8: {
                cout << "\nMerged queue : " << endl;
                Queue merged = merge(queue, secondQueue);
                merged.display();
                break;
            }
            case 9: {
                cout << "\nCopy of first queue : " << endl;
                Queue copy = queue.getCopy();
                copy.display();
            }
            case 10:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 10);
    cin.get();
    return 0;
}


void printOptions() {
    cout << "1) Push element to first queue" << endl;
    cout << "2) Push element to second queue" << endl;
    cout << "3) Pop element from first queue" << endl;
    cout << "4) Pop element from second queue" << endl;
    cout << "5) Display all the elements of 2 queues" << endl;
    cout << "6) Find harmonic mean of first queue" << endl;
    cout << "7) Find harmonic mean of second queue" << endl;
    cout << "8) Merge and display new third queue" << endl;
    cout << "9) Copy and display first queue" << endl;
    cout << "10) Exit" << endl;
};