#include <iostream>
using namespace std;

struct doublynode {
    struct doublynode* prev;
    int data;
    struct doublynode* next;
};

struct doublynode* head = NULL;
struct doublynode* tail = NULL;

void createnode(int value) {
    struct doublynode* temp = new doublynode;
    temp->prev = NULL;
    temp->data = value;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void print() {
    struct doublynode* current = head;
    int nodeNumber = 1;
    while (current != NULL) {
        cout << "Node " << nodeNumber << ": " << current->data << endl;
        current = current->next;
        nodeNumber++;
    }
}

int main() {
    cout << "Enter how many nodes you want to make: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        createnode(a);
    }
    print();

    return 0;
}
