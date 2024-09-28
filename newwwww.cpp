#include<iostream>
using namespace std;

class Stack {
    int* stack;   // Dynamic array for stack elements
    int top;
    int capacity;

public:
    // Default Constructor
    Stack(int size = 5) {
        capacity = size;
        stack = new int[capacity];
        top = 0;
    }

    // Constructor with array initialization
    Stack(int arr[], int size) {
        capacity = size;
        stack = new int[capacity];
        top = 0;
        for (int i = 0; i < size; ++i) {
            stack[top++] = arr[i];
        }
    }

    // Copy Constructor (Deep Copy)
    Stack(const Stack& other) {
        capacity = other.capacity;
        top = other.top;
        stack = new int[capacity];
        for (int i = 0; i < top; ++i) {
            stack[i] = other.stack[i];
        }
    }

    // Assignment Operator (Deep Copy)
    Stack& operator=(const Stack& other) {
        if (this != &other) {  // Check for self-assignment
            delete[] stack;  // Free existing memory

            capacity = other.capacity;
            top = other.top;
            stack = new int[capacity];
            for (int i = 0; i < top; ++i) {
                stack[i] = other.stack[i];
            }
        }
        return *this;
    }

   

    // Push method
    void push(int ele) {
        if (isFull()) {
            cout << "STACK IS FULL" << endl;
        } else {
            stack[top++] = ele;
            cout << ele << " is pushed" << endl;
        }
    }

    // Pop method
    void pop() {
        if (isEmpty()) {
            cout << "STACK IS EMPTY" << endl;
        } else {
            int store = stack[--top];
            cout << store << " is popped out" << endl;
        }
    }

    // Method to check if the stack is full
    bool isFull() const {
        return top == capacity;
    }

    // Method to check if the stack is empty
    bool isEmpty() const {
        return top == 0;
    }

    // Display the stack elements
    void display() const {
        if (isEmpty()) {
            cout << "STACK IS EMPTY" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i < top; ++i) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    // Initialize stack with array elements
    Stack stack1(arr, 5);
    stack1.display();

    // Using Copy Constructor
    Stack stack2 = stack1;
    stack2.display();

    // Using Assignment Operator
    Stack stack3;
    stack3 = stack1;
    stack3.display();

    stack1.pop();
    stack1.display();

    stack2.display(); // Should be unaffected by changes in stack1

    return 0;
}
