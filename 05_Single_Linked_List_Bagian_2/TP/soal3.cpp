#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertSorted_2311104007(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (head == nullptr || head->data >= newData) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;

        while (current->next != nullptr && current->next->data < newData) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
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
    cout << "Masukkan 4 elemen integer:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> value;
        insertSorted_2311104007(head, value);
    }
    cout << "\nMasukkan elemen tambahan: ";
    cin >> value;
    insertSorted_2311104007(head, value);
    cout << "List setelah elemen tambahan dimasukkan: ";
    printList_2311104007(head);
    return 0;
}
