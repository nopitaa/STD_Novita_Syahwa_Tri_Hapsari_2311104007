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
    void deleteFirst_2311104007() {
        if (head == nullptr) {
            cout << "List kosong, tidak ada elemen yang dapat dihapus." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr; 
        }
        delete temp;
    }
    void deleteLast_2311104007() {
        if (tail == nullptr) {
            cout << "List kosong, tidak ada elemen yang dapat dihapus." << endl;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        
        if (tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr; 
        }
        delete temp;
    }
    void display_2311104007() {
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
};

int main() {
    DoublyLinkedList list;
    int data;
    cout << "Masukkan elemen pertama = ";
    cin >> data;
    list.insertFirst_2311104007(data);
    cout << "Masukkan elemen kedua di akhir = ";
    cin >> data;
    list.insertLast_2311104007(data);
    cout << "Masukkan elemen ketiga di akhir = ";
    cin >> data;
    list.insertLast_2311104007(data);
    cout << "Dafftar Anggota List: ";
    list.display_2311104007();
    list.deleteFirst_2311104007();
    list.deleteLast_2311104007();
    cout << "Daftar Anggota List Setelah Dihapus: ";
    list.display_2311104007();
    return 0;
}
