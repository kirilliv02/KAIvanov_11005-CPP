#include <iostream>

using namespace std;
struct Node {
    int item;
    Node *next = nullptr;
    Node *last = nullptr;
};

struct DoubleLinkedList {
    Node *pHead = nullptr;
    Node *pEnd = nullptr;

    void add(int item) {
        Node *node = new Node;
        node->item = item;
        pEnd = node;

        if (!pHead) {
            pHead = node;
        } else {
            Node *temp = pHead;
            while (temp->next) {
                temp = temp->next;
            }
            node->last = temp;
            temp->next = node;


        }
    }

    int size() {
        Node *temp = pHead;
        int size = 0;
        while (temp) {
            size++;
            temp = temp->next;
        }
        return size;
    }

    int get(int id) {
        Node *temp = pHead;
        int count = 0;
        while (count != id) {
            temp = temp->next;
            count++;
        }
        return temp->item;
    }

    void insertAt(int item, int id) {
        Node *node = new Node;
        node->item = item;
        if (id == 0) {
            node->next = pHead;
            pHead->last = node;
            pHead = node;
        } else if (id == size()) {
            node->last = pEnd;
            pEnd->next = node;
            pEnd = node;
        } else {
            Node *temp = pHead;
            int count = 1;
            while (count != id) {
                temp = temp->next;
                count++;
            }
            node->next = temp->next;
            node->last = temp;
            temp->next = node;
            temp->next->next->last = node;
        }
    }

    void removeAt(int id) {
        if (id == 0) {
            pHead = pHead->next;
        } else if (id == size()) {
            pEnd = pEnd->last;
        } else {
            Node *temp = pHead;
            int count = 0;
            while (count != id) {
                temp = temp->next;
                count++;
            }
            temp->next->last = temp->last;
            temp->last->next = temp->next;
        }
    }

    void printAllFromFirst() {
        Node *temp = pHead;
        while (temp) {
            cout << temp->item << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printAllFromLast() {
        Node *temp = pEnd;
        while (temp) {
            cout << temp->item << " ";
            temp = temp->last;
        }
        cout << endl;
    }
};

struct Queue {
    Node *pHead = nullptr;
    Node *pEnd = nullptr;

    void enqueue(int item) {
        Node *node = new Node;
        node->item = item;
        pHead = node;

        if (!pEnd) {
            pEnd = node;
        } else {
            Node *temp = pEnd;
            while (temp->last) {
                temp = temp->last;
            }
            node->next = temp;
            temp->last = node;


        }

    }

    void dequeue() {
        if (!pEnd->last) {
            pHead = nullptr;
            pEnd = nullptr;
        } else {
            pEnd = pEnd->last;
            pEnd->next = nullptr;
        }
    }

    void printAllFromLast() {
        Node *temp = pHead;
        while (temp) {
            cout << temp->item << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printAllFromFirst() {
        Node *temp = pEnd;
        while (temp) {
            cout << temp->item << " ";
            temp = temp->last;
        }
        cout << endl;
    }
};

int main() {
    DoubleLinkedList *linkedList = new DoubleLinkedList;

    linkedList->add(1);
    linkedList->add(2);
    linkedList->add(3);
    linkedList->add(4);
    linkedList->add(5);
    linkedList->printAllFromFirst();
    cout << linkedList->size() << endl;
    cout << linkedList->get(2) << endl;
    linkedList->removeAt(2);
    linkedList->insertAt(66, 2);
    linkedList->printAllFromLast();


    Queue *queue = new Queue;
    queue->enqueue(1);
    queue->enqueue(2);
    queue->enqueue(3);
    queue->enqueue(4);
    queue->enqueue(5);
    queue->printAllFromFirst();
    queue->dequeue();
    queue->printAllFromLast();


    return 1;
}
