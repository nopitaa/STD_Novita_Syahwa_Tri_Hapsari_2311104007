#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Insert node di bagian depan
    void insertDepan(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // Insert node di bagian belakang
    void insertBelakang(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

Node* searchNode(int value) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }

    // Get the length of the linked list
    int getLength() {
        int count = 0;
        Node* current = head;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }

};

int main() {
    LinkedList list;

    list.insertDepan(10);  // Nambah node di depan (nilai: 10)
    list.insertBelakang(20);   // Nambah node di belakang (nilai: 20)
    list.insertDepan(5);   // Nambah node di depan (nilai: 5)
    int cariValue = 20;  //cari node dengan nilai 20
    Node* result = list.searchNode(cariValue);
    if (result != nullptr) {
        cout << "Node dengan nilai " << cariValue << " ditemukan." << endl;
    } else {
        cout << "Node dengan nilai " << cariValue << " tidak ditemukan." << endl;
    }
    //cetak panjang link list 
    cout << "Panjang linked list: " << list.getLength() << endl;

    return 0;
}