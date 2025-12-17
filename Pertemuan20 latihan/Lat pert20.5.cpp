#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(string value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    cout << "Enqueue: " << value << endl;
}

void dequeue() {
    if(front == NULL) {
        cout << "Queue kosong\n";
        return;
    }
    cout << "Dequeue: " << front->data << endl;
    front = front->next;
    if(front == NULL)
        rear = NULL;
}

void display() {
    Node* temp = front;
    cout << "Queue: ";
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    enqueue("Antrian 1");
    enqueue("Antrian 2");
    enqueue("Antrian 3");
    display();
    dequeue();
    display();
    return 0;
}

