#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }
    void insertLast_2311104007(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        newNode->prev = tail;

        if (tail != nullptr) {
            tail->next = newNode;
        } else {
            head = newNode;
        }
        tail = newNode;
    }
    void PrintDepan_2311104007() {
        if (head == nullptr) {
            cout << "List kosong." << endl;
            return;
        }
        Node* current = head;
        while (current != nullptr) {
            cout << current->data;
            if (current->next != nullptr) {
                cout << " <-> ";
            }
            current = current->next;
        }
        cout << endl;
    }
    void PrintBelakang_2311104007() {
        if (tail == nullptr) {
            cout << "List kosong." << endl;
            return;
        }
        Node* current = tail;
        while (current != nullptr) {
            cout << current->data;
            if (current->prev != nullptr) {
                cout << " <-> ";
            }
            current = current->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    int data;
    cout << "Masukkan 4 elemen secara berurutan: ";
    for (int i = 0; i < 4; i++) {
        cin >> data;
        list.insertLast_2311104007(data);
    }
    cout << "Daftar elemen dari depan ke belakang: ";
    list.PrintDepan_2311104007();
    cout << "Daftar elemen dari belakang ke depan: ";
    list.PrintBelakang_2311104007();

    return 0;
}