#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> elements;

public:
    // Push operation to add an element to the top of the stack
    void push(int item) {
        elements.push_back(item);
    }

    // Pop operation to remove and return the top element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: Cannot pop, stack is empty." << endl;
            return -1; // Return a sentinel value for an empty stack
        }
        int topElement = elements.back();
        elements.pop_back();
        return topElement;
    }

    // Peek operation to get the top element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1; // Return a sentinel value for an empty stack
        }
        return elements.back();
    }

    // Check if the stack is empty
    bool isEmpty() {
        return elements.empty();
    }

    // Get the size of the stack
    int size() {
        return elements.size();
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << endl; // Outputs: 30

    stack.pop();
    cout << "After one pop, top element: " << stack.peek() << endl; // Outputs: 20

    return 0;
}
