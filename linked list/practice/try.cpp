#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    void insertAtPosition(int position, int data) {
        Node* newNode = new Node(data);

        if (!head) {
            head = newNode;
        }
        else if (position == 1) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        else {
            Node* temp = head;
            int count = 1;

            while (count < position - 1 && temp->next) {
                temp = temp->next;
                count++;
            }

            newNode->next = temp->next;
            if (temp->next) {
                temp->next->prev = newNode;
            }
            newNode->prev = temp;
            temp->next = newNode;
        }
    }

    void print() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    int data, position;

    while (true) {
        cout << "Enter data (-1 to exit): ";
        cin >> data;
        if (data == -1) {
            break;
        }

        cout << "Enter position: ";
        cin >> position;

        list.insertAtPosition(position, data);
        list.print();
    }

    return 0;
}
