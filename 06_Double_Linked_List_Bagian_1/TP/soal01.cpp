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
    void insertFirst_2311104007(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }
        head = newNode;
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

    void display_2311104007() {
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
};

int main() {
    DoublyLinkedList list;
    int data;
    cout << "Masukkan elemen pertama = ";
    cin >> data;
    list.insertFirst_2311104007(data);
    cout << "Masukkan elemen kedua di awal = ";
    cin >> data;
    list.insertFirst_2311104007(data);
    cout << "Masukkan elemen ketiga di akhir = ";
    cin >> data;
    list.insertLast_2311104007(data);
    cout << "DAFTAR ANGGOTA LIST: ";
    list.display_2311104007();

    return 0;
}
