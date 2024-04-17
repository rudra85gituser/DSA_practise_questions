#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    void deleteFromBeginning() {
        if (head == nullptr) {
            std::cout << "List is empty. Nothing to delete." << std::endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromPosition(int position) {
        if (position < 1 || head == nullptr) {
            std::cout << "Invalid position or list is empty." << std::endl;
            return;
        }

        if (position == 1) {
            deleteFromBeginning();
            return;
        }

        Node* current = head;
        Node* previous = nullptr;
        int currentPosition = 1;

        while (currentPosition < position && current != nullptr) {
            previous = current;
            current = current->next;
            currentPosition++;
        }

        if (currentPosition < position || current == nullptr) {
            std::cout << "Position out of range." << std::endl;
            return;
        }

        previous->next = current->next;
        delete current;
    }

    void deleteFromEnd() {
        if (head == nullptr) {
            std::cout << "List is empty. Nothing to delete." << std::endl;
            return;
        }

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        Node* current = head;
        Node* previous = nullptr;

        while (current->next != nullptr) {
            previous = current;
            current = current->next;
        }

        previous->next = nullptr;
        delete current;
    }
};

int main() {
    LinkedList list;
    int choice, value, position;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Insert\n";
        std::cout << "2. Delete from Beginning\n";
        std::cout << "3. Delete from Position\n";
        std::cout << "4. Delete from End\n";
        std::cout << "5. Display\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value to insert: ";
                std::cin >> value;
                list.insert(value);
                break;
            case 2:
                list.deleteFromBeginning();
                break;
            case 3:
                std::cout << "Enter position to delete: ";
                std::cin >> position;
                list.deleteFromPosition(position);
                break;
            case 4:
                list.deleteFromEnd();
                break;
            case 5:
                std::cout << "Linked List: ";
                list.display();
                break;
            case 6:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
