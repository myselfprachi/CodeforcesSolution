#include <bits/stdc++.h>
using namespace std;

struct Dequeue {
    int size, capacity;
    int *array;
    int front, rear;

    Dequeue(int c) {
        capacity = c;
        size = 0;
        array = new int[capacity];
        front = 0;
        // Do not initialize rear in the constructor.
    }

    bool isfull() {
        return (size == capacity);
    }

    bool isempty() {
        return (size == 0);
    }

    void insertrear(int x) {
        if (isfull()) {
            return;
        }
        rear = (front + size) % capacity; // Circular increment of rear
        array[rear] = x;
        size++;
    }

    int deleterear() {
        if (isempty()) return -1;
        int deletedItem = array[rear];
        rear = (front+size-1) % capacity; // Circular decrement of rear
        size--;
        return deletedItem;
    }

    int getrear() {
        if (isempty()) return -1;
        int Rear=(front+size-1)%capacity;
        return array[Rear];
    }

    void insertfront(int x) {
        if (isfull()) return;
        front = (front - 1 + capacity) % capacity; // Circular decrement of front
        array[front] = x;
        size++;
    }

    int deletefront() {
        if (isempty()) return -1;
        int deletedItem = array[front];
        front = (front + 1) % capacity; // Circular increment of front
        size--;
        return deletedItem;
    }

    int getfront() {
        if (isempty()) return -1;
        return array[front];
    }
};

int main() {
    Dequeue dq(5);
    dq.insertfront(1);
    dq.insertrear(2);
    dq.insertfront(3);
    dq.insertrear(4);
    dq.insertfront(5);

    cout << "Front: " << dq.getfront() << endl;
    cout << "Rear: " << dq.getrear() << endl;

    dq.deletefront();
    dq.deleterear();

    cout << "Front after deletion: " << dq.getfront() << endl;
    cout << "Rear after deletion: " << dq.getrear() << endl;

    return 0;
}
