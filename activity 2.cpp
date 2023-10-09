#include <iostream>
using namespace std;

// Define the structure for a node
struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;  // Change nullptr to NULL
    return newNode;
}

// Linked list class
class LinkedList {
public:
    Node* head;

    LinkedList() : head(NULL) {}  // Change nullptr to NULL

    // Function to insert a node at the beginning
    void insertAtBeginning(int data) {
        Node* newNode = createNode(data);
        newNode->next = head;
        head = newNode;
        cout << "Insertion at the beginning successful." << endl;
    }

    // Function to insert a node at the end
    void insertAtEnd(int data) {
        Node* newNode = createNode(data);
        if (!head) {
            head = newNode;
            cout << "Insertion at the end successful." << endl;
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
        cout << "Insertion at the end successful." << endl;
    }

    // Function to delete a node with a specific value
    void deleteNode(int data) {
        if (!head) {
            cout << "List is empty. Deletion not possible." << endl;
            return;
        }
        if (head->data == data) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Deletion successful." << endl;
            return;
        }
        Node* current = head;
        while (current->next) {
            if (current->next->data == data) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
                cout << "Deletion successful." << endl;
                return;
            }
            current = current->next;
        }
        cout << "Element not found. Deletion not possible." << endl;
    }

    // Function to reverse the linked list
    void reverse() {
        Node* prev = NULL; // Change nullptr to NULL
        Node* current = head;
        Node* nextNode = NULL;

        while (current) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }

        head = prev;
        cout << "Reversal successful." << endl;
    }

    // Function to display the linked list with addresses
    void displayWithAddresses() {
        cout << "Head Address: " << &head << " Head Content: ";
        if (head)
            cout << head->data;
        else
            cout << "null";
        cout << endl;

        Node* current = head;
        while (current) {
            cout << "Ptr Address: " << &current << " Ptr Content: " << current->data << " -> ";
            current = current->next;
        }
        cout << "null" << endl;
    }
};

int main() {
    LinkedList singleLinkedList;

    while (true) {
        cout << "Which linked list you want:" << endl;
        cout << "1: Single" << endl;
        cout << "2: Double" << endl;
        cout << "3: Circular" << endl;

        int listChoice;
        cin >> listChoice;

        if (listChoice == 1) {
            int choice;
            while (true) {
                cout << "\nSingle Linked List Operations:" << endl;
                cout << "1: Insertion" << endl;
                cout << "2: Deletion" << endl;
                cout << "3: Display" << endl;
                cout << "4: Reverse" << endl;
                cout << "5: Seek" << endl;
                cout << "6: Exit" << endl;

                cin >> choice;

                if (choice == 1) {
                    int insertionChoice;
                    cout << "Insertion Options:" << endl;
                    cout << "1: Insertion at Beginning" << endl;
                    cout << "2: Insertion at End" << endl;
                    cin >> insertionChoice;

                    if (insertionChoice == 1) {
                        int data;
                        cout << "Enter data: ";
                        cin >> data;
                        singleLinkedList.insertAtBeginning(data);
                    } else if (insertionChoice == 2) {
                        int data;
                        cout << "Enter data: ";
                        cin >> data;
                        singleLinkedList.insertAtEnd(data);
                    }
                } else if (choice == 2) {
                    int data;
                    cout << "Enter data to delete: ";
                    cin >> data;
                    singleLinkedList.deleteNode(data);
                } else if (choice == 3) {
                    singleLinkedList.displayWithAddresses();
                } else if (choice == 4) {
                    singleLinkedList.reverse();
                } else if (choice == 5) {
                    // Handle seek option
                } else if (choice == 6) {
                    // Exit the program
                    return 0;
                } else {
                    cout << "Invalid choice. Please enter a valid option." << endl;
                }
            }
        }
    }

    return 0;
}

