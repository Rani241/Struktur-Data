#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if(head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        Node* temp = head;
        while(temp->next != head)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }
    cout << "Insert " << value << endl;
}

void deleteNode(int key) {
    if(head == NULL) return;

    Node *curr = head, *prev = NULL;
    do {
        if(curr->data == key) {
            if(prev != NULL)
                prev->next = curr->next;
            else {
                Node* temp = head;
                while(temp->next != head)
                    temp = temp->next;
                head = curr->next;
                temp->next = head;
            }
            cout << "Delete " << key << endl;
            return;
        }
        prev = curr;
        curr = curr->next;
    } while(curr != head);
}

void traverse() {
    if(head == NULL) return;
    Node* temp = head;
    cout << "Circular List: ";
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while(temp != head);
    cout << "(kembali ke head)\n";
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    traverse();
    deleteNode(20);
    traverse();
    return 0;
}

