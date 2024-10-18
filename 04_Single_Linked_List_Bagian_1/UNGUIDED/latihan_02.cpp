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
    //hapus node dengan nilai tertentu
    void removeNode(int value) {
        if (head == nullptr) return;

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr && current->data != value) {
            prev = current;
            current = current->next;
        }

        if (current == nullptr) return;

        prev->next = current->next;
        delete current;
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

    // Print si list nya
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << "-> ";
            }
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    list.insertDepan(10);  // Nambah node di depan (nilai: 10)
    list.insertBelakang(20);   // Nambah node di belakang (nilai: 20)
    list.insertDepan(5);   // Nambah node di depan (nilai: 5)
    list.removeNode(10); //Hapus node di nilai tertentu(nilai: 10)
    cout << "Linked List: ";
    list.printList();   
    
    return 0;
}