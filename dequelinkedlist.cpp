#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class Deque {
private:
    Node* front;
    Node* rear;

public:
    Deque() {
        front = nullptr;
        rear = nullptr;
    }

    // Check if the deque is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Enqueue an element at the front of the deque
    void enqueueFront(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    // Enqueue an element at the rear of the deque
    void enqueueRear(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            newNode->prev = rear;
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Dequeue an element from the front of the deque
    int dequeueFront() {
        if (isEmpty()) {
            std::cout << "Deque is empty." << std::endl;
            return -1; // You can handle this error case as needed
        }

        int val = front->data;
        Node* temp = front;
        if (front == rear) {
            // If there's only one element, reset both front and rear
            front = nullptr;
            rear = nullptr;
        } else {
            front = front->next;
            front->prev = nullptr;
        }
        delete temp;
        return val;
    }

    // Dequeue an element from the rear of the deque
    int dequeueRear() {
        if (isEmpty()) {
            std::cout << "Deque is empty." << std::endl;
            return -1; // You can handle this error case as needed
        }

        int val = rear->data;
        Node* temp = rear;
        if (front == rear) {
            // If there's only one element, reset both front and rear
            front = nullptr;
            rear = nullptr;
        } else {
            rear = rear->prev;
            rear->next = nullptr;
        }
        delete temp;
        return val;
    }
};

int main() {
    Deque dq;

    dq.enqueueFront(1);
    dq.enqueueFront(2);
    dq.enqueueRear(3);

    std::cout << "Deque elements: ";
    while (!dq.isEmpty()) {
        std::cout << dq.dequeueFront() << " ";
    }
    std::cout << std::endl;

    return 0;
}
