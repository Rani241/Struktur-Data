#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* link;
};
struct Node* top = NULL;
void push(int data) {
    struct Node* temp = new Node();
    if (!temp) {
        cout << "\nHeap Overflow";
        exit(1);
    }
    temp->data = data;
    temp->link = top;
    top = temp;
}
int isEmpty() {
    return top == NULL;
}

int peek() {
    if (!isEmpty())
        return top->data;
    else {
        cout << "\nStack kosong!\n";
        exit(1);
    }
}
void pop() {
    struct Node* temp;
    if (top == NULL) {
        cout << "\nStack Underflow\n";
        exit(1);
    } else {
        temp = top;
        top = top->link;
        temp->link = NULL;
        delete temp; 
    }
}
void display() {
    struct Node* temp;
    if (top == NULL) {
        cout << "\nStack Underflow\n";
        return;
    } else {
        temp = top;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->link;
        }
        cout << "NULL\n";
    }
}
int main() {
    push(11);
    push(22);
    push(33);
    push(44);
    display();
    cout << "\nElemen Top adalah " << peek() << endl;
    pop();
    pop();
    display();
    cout << "\nElemen Top adalah " << peek() << endl;
    return 0;
}

