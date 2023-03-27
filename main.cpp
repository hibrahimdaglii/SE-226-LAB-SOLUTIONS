#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;
};

class Queue {
private:
    Node *front;
    Node *rear;
    int count;
public:
    Queue() {
        front = nullptr;
        rear = nullptr;
        count = 0;
    }

    void enqueue(int data) {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        if (front == nullptr && rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        count++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        } else if (front == rear) {
            front = rear = nullptr;
        } else {
            Node *temp = front;
            front = front->next;
            delete temp;
        }
        count--;
    }

    int top() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }

    bool isEmpty() {
        return (front == nullptr && rear == nullptr);
    }

    [[nodiscard]] int size() const {
        return count;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);

    cout << "Front element: " << q.top() << endl;
    cout << "Size of Queue: " << q.size() << endl;
    cout << "isEmpty: " << q.isEmpty() << endl;

    cout << "" << endl;

    cout << "Removing an item from the queue..." << endl;
    cout << "" << endl;
    q.dequeue();

    cout << "Front element: " << q.top() << endl;
    cout << "Size of Queue: " << q.size() << endl;
    cout << "isEmpty: " << q.isEmpty();

    return 0;
}
