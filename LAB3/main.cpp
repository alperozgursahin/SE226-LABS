#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {

public:
    Node* head;
    LinkedList() {
        head = nullptr;
    }

void addLast(int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void addFirst(int data) {

    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }

}

void deleteLast() {

    Node* temp = head;
    if (head == NULL) {
        cout << "There is nothing to delete!" << endl;
    }
    else {
        while(temp->next->next != nullptr){

        temp = temp->next;
    }

    temp->next = nullptr;
    }


}

Node* deleteFirst()
{
    if (head == NULL)
        return NULL;

    // Move the head pointer to the next node
    Node* temp = head;
    head = head->next;

    delete temp;

    return head;
}

bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;

}

int size()
{
    Node* temp = head;
    int size = 0;

    while (temp != NULL) {
        temp = temp->next;
        size++;
    }
    return size;


}

Node* top() {
    return head;
}

void printList() {
    Node* temp = head;

    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}
};

class Queue
{
    public:
        LinkedList* linkedList;

        Queue()
        {
            linkedList = new LinkedList();
        }

void enqueue(int data)
{
    linkedList->addLast(data);

}
Node* dequeue()
{
    linkedList->deleteFirst();

}

void printList()
{
    linkedList->printList();
}

int size()
{
    linkedList->size();
}

bool isEmpty()
{
    linkedList->isEmpty();
}

Node* top()
{
    linkedList->top();
}

};

int main()
{
    Queue* myQueue= new Queue();
    myQueue->enqueue(1);
    myQueue->enqueue(2);
    myQueue->enqueue(3);
    myQueue->enqueue(4);
    //myQueue->dequeue();
    myQueue->printList();
    cout<< "Size: " <<myQueue->size();
    cout<< " Top: " <<myQueue->top()->data;
    return 0;
}
