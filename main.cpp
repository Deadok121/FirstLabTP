#include <iostream>
#include "HarmonicQueue.h"

using namespace std;

void printOptions();
int main() {
    HarmonicQueue queue;
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
                queue.pop();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                cout << "\nHarmonic mean : " << queue.findHarmonicMean() << endl;
                break;
            case 5:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 5);
    cin.get();
    return 0;
}


void printOptions() {
    cout << "1) Push element to queue" << endl;
    cout << "2) Pop element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Find harmonic mean" << endl;
    cout << "5) Exit" << endl;
};