#include <iostream>
using namespace std;

class cqueue
{
private:
    int *arr;
    int front, rear;
    int MAX;

public:
    cqueue(int maxsize = 10); // constructor to initialize queue
    void addq(int item);
    int delq();
    void display();
};

cqueue::cqueue(int maxsize)
{
    MAX = maxsize;
    arr = new int[MAX]; // constructor initializes array of required size
    front = rear = -1;
    for (int i = 0; i < MAX; i++)
        arr[i] = 0;
}

void cqueue::addq(int item)
{
    if ((rear + 1) % MAX == front)
    {
        cout << "\nQueue is full"; // Adding an order when queue is full
        return;
    }
    rear = (rear + 1) % MAX;
    arr[rear] = item;
    if (front == -1)
        front = 0;
}

int cqueue::delq()
{
    int data;
    if (front == -1)
    {
        cout << "\nQueue is empty"; // Serving an order when queue is empty
        return -1; // Using -1 to represent an empty queue (could also return a custom code)
    }
    data = arr[front];
    arr[front] = 0;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        front = (front + 1) % MAX;
    return data;
}

void cqueue::display()
{
    cout << endl;
    if (front == -1) // If the queue is empty, show no orders
    {
        cout << "No orders in the queue." << endl;
        return;
    }
    int i = front;
    while (i != rear)
    {
        switch (arr[i])
        {
        case 1:
            cout << i + 1 << ". Onion pizza\n";
            break;
        case 2:
            cout << i + 1 << ". Tomato pizza\n";
            break;
        case 3:
            cout << i + 1 << ". Capsicum pizza\n";
            break;
        case 4:
            cout << i + 1 << ". Cheese burst pizza\n";
            break;
        }
        i = (i + 1) % MAX;
    }
    // Don't forget to display the last element (rear)
    switch (arr[rear])
    {
    case 1:
        cout << rear + 1 << ". Onion pizza\n";
        break;
    case 2:
        cout << rear + 1 << ". Tomato pizza\n";
        break;
    case 3:
        cout << rear + 1 << ". Capsicum pizza\n";
        break;
    case 4:
        cout << rear + 1 << ". Cheese burst pizza\n";
        break;
    }
}

int main()
{
    cqueue a;
    int c, ch, data;
    do
    {
        cout << "\n\nEnter \n1: Place order\n2: Display orders\n3: To check order serving now\n4: Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter type for pizza \n1: Onion pizza\n2: Tomato pizza\n3: Capsicum pizza\n4: Cheese burst pizza";
            cin >> c;
            if (c < 1 || c > 4) // Adding a check to make sure the input is valid
            {
                cout << "Invalid pizza type.\n";
            }
            else
            {
                a.addq(c); // Add pizza type to queue
            }
            break;
        case 2:
            cout << "\nPizza orders are: ";
            a.display(); // Display all orders in the queue
            break;
        case 3:
            data = a.delq(); // Remove and return the order being served
            if (data != -1) // Only display if there is a valid order
            {
                cout << "\nThe order serving now is: ";
                switch (data)
                {
                case 1:
                    cout << "Onion pizza\n";
                    break;
                case 2:
                    cout << "Tomato pizza\n";
                    break;
                case 3:
                    cout << "Capsicum pizza\n";
                    break;
                case 4:
                    cout << "Cheese burst pizza\n";
                    break;
                }
            }
            break;
        case 4:
            return 0;
        default:
            cout << "\nInvalid choice!";
        }
    } while (ch != 4);
}
