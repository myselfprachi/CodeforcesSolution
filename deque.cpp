#include <bits/stdc++.h>
using namespace std;

struct Dequeue {
    int size, capacity;
    int *array;

    Dequeue(int c) {
        capacity = c;
        size = 0;
        array = new int[capacity];
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
        array[size] = x;
        size++;
    }

   int deleterear() {
    if (isempty()) return -1;
    int deletedItem = array[size - 1];
    size--;
    return deletedItem;
    }
     

    int getrear() {
        if (isempty()) return -1;
        return array[size - 1];
    }

    void insertfront(int x) {
        if (isfull()) return;
        for (int i = size; i > 0; i--) {
            array[i] = array[i - 1];
        }
        array[0] = x;
        size++;
    }

    int deletefront() {
    if (isempty()) return -1;
    int deletedItem = array[0];
    for (int i = 0; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    size--;
    return deletedItem;
}
    int getfront() {
        if (isempty()) return -1;
        return array[0];
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
