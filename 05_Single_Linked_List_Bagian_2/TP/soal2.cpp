#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void append_2311104007(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void bubbleSort_2311104007(Node* head) {
    if (head == nullptr) return;
    bool swapped;
    Node* current;
    Node* lastPtr = nullptr;

    do {
        swapped = false;
        current = head;
        while (current->next != lastPtr) {
            if (current->data > current->next->data) {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true;
            }
            current = current->next;
        }
        lastPtr = current; 
    } while (swapped); 
}
void printList_2311104007(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    Node* head = nullptr;
    int value;
    cout << "Masukkan 5 elemen integer untuk diurutkan:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> value;
        append_2311104007(head, value);
    }
    cout << "List sebelum diurutkan: ";
    printList_2311104007(head);
    bubbleSort_2311104007(head);
    cout << "List setelah diurutkan: ";
    printList_2311104007(head);
    return 0;
}
