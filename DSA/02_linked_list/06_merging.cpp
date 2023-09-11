#include<iostream>
using namespace std;
Node* sortList(Node* head) {
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    // Count the occurrences of 0, 1, and 2 in the list
    while (temp != NULL) {
        if (temp->data == 0) {
            zeroCount++;
        } else if (temp->data == 1) {
            oneCount++;
        } else if (temp->data == 2) {
            twoCount++;
        }
        temp = temp->next;
    }

    // Reset temp to the head and update the list
    temp = head;
    while (temp != NULL) {
        if (zeroCount != 0) {
            temp->data = 0;
            zeroCount--;
        } else if (oneCount != 0) {
            temp->data = 1;
            oneCount--;
        } else if (twoCount != 0) {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }

    return head;
}
