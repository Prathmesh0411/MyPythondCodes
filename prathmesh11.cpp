#include <iostream>
#include <stdlib.h>
using namespace std;

class qnode {
    int jobnumber;
    qnode *next;
    friend class queue;
};

class queue {
    qnode *front, *rear;
public:
    void enque(int val);
    int deque();
    int isempty();
    void display();
    queue() {
        front = rear = NULL;
    }
};

int queue::isempty() {
    if (front == NULL && rear == NULL)
        return 1;
    else
        return 0;
}

void queue::enque(int val) {
    qnode *t;
    t = new qnode;
    t->jobnumber = val;
    t->next = NULL;

    // If queue is empty, then new node is front and rear both
    if (isempty()) {
        front = t;
        rear = t;
    }
    else { // Add the new node at the end of queue and change rear
        rear->next = t;
        rear = t;
    }
}

int queue::deque() {
    qnode *t;
    int val;
    if (isempty()) {
        cout << "\nQueue is empty\n";
        return -1;  // Return a value indicating the queue is empty
    }
    else {
        // Store previous front and move front one node ahead
        t = front;
        front = front->next;
        
        // If front becomes NULL, then change rear also as NULL
        if (front == NULL)
            rear = NULL;
        
        val = t->jobnumber;
        delete t;  // Free the node
    }
    return val;
}

void queue::display() {
    qnode *t;
    if (isempty()) {
        cout << "\nQueue is empty\n";
    }
    else {
        cout << "\nQueue jobnumbers: ";
        for (t = front; t != NULL; t = t->next) {
            cout << "\t" << t->jobnumber;
        }
        cout << endl;
    }
}

int main() {
    int ch, n;
    queue obj;
    while (1) {
        cout << "\n1. Add job \n2. Delete job \n3. Display job \n4. Exit";
        cout << "\nEnter your choice : ";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "\nEnter jobnumber: ";
            cin >> n;
            obj.enque(n);
            break;
        case 2:
            n = obj.deque();
            if (n != -1) {
                cout << "\nDeleted jobnumber: " << n << endl;
            }
            break;
        case 3:
            obj.display();
            break;
        case 4:
            return 0;  // Proper exit from the program
        default:
            cout << "\nYou entered an invalid choice\n";
        }
    }
    return 0;
}
