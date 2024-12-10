#include<iostream>
using namespace std;

#define SIZE 5  // The size of the deque

class dequeue
{
    int a[SIZE], front, rear, count;

public:
    dequeue();
    void add_at_beg(int);
    void add_at_end(int);
    void delete_fr_front();
    void delete_fr_rear();
    void display();
};

dequeue::dequeue()
{
    front = -1;
    rear = -1;
    count = 0;
}

void dequeue::add_at_beg(int item)
{
    if (front == 0)  // If the deque is full at the front
    {
        cout << "\nInsertion is not possible, overflow!!!";
        return;
    }
    if (front == -1)  // If deque is empty
    {
        front++;
        rear++;
        a[front] = item;
        count++;
    }
    else  // Insert at the front
    {
        for (int i = rear; i >= front; i--)
        {
            a[i + 1] = a[i];
        }
        a[front] = item;
        rear++;
        count++;
    }
}

void dequeue::add_at_end(int item)
{
    if (rear == SIZE - 1)  // If the deque is full at the rear
    {
        cout << "\nInsertion is not possible, overflow!!!";
        return;
    }
    if (front == -1)  // If deque is empty
    {
        front++;
        rear++;
        a[rear] = item;
        count++;
    }
    else  // Insert at the end
    {
        a[++rear] = item;
        count++;
    }
}

void dequeue::delete_fr_front()
{
    if (front == -1)  // If the deque is empty
    {
        cout << "Deletion is not possible: Dequeue is empty";
        return;
    }
    else
    {
        cout << "The deleted element from front is: " << a[front] << endl;
        if (front == rear)  // If there's only one element
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
        count--;
    }
}

void dequeue::delete_fr_rear()
{
    if (front == -1)  // If the deque is empty
    {
        cout << "Deletion is not possible: Dequeue is empty";
        return;
    }
    else
    {
        cout << "The deleted element from rear is: " << a[rear] << endl;
        if (front == rear)  // If there's only one element
        {
            front = rear = -1;
        }
        else
        {
            rear--;
        }
        count--;
    }
}

void dequeue::display()
{
    if (front == -1)  // If the deque is empty
    {
        cout << "Dequeue is empty." << endl;
        return;
    }

    cout << "Elements in the Dequeue: ";
    for (int i = front; i <= rear; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int c, item;
    dequeue d1;
    do
    {
        cout << "\n**** DEQUEUE OPERATION ****\n";
        cout << "\n1-Insert at beginning";
        cout << "\n2-Insert at end";
        cout << "\n3-Display";
        cout << "\n4-Deletion from front";
        cout << "\n5-Deletion from rear";
        cout << "\n6-Exit";
        cout << "\nEnter your choice <1-6>: ";
        cin >> c;

        switch (c)
        {
        case 1:
            cout << "Enter the element to be inserted at beginning: ";
            cin >> item;
            d1.add_at_beg(item);
            break;
        case 2:
            cout << "Enter the element to be inserted at end: ";
            cin >> item;
            d1.add_at_end(item);
            break;
        case 3:
            d1.display();
            break;
        case 4:
            d1.delete_fr_front();
            break;
        case 5:
            d1.delete_fr_rear();
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice, please try again.\n";
            break;
        }
    } while (c != 6);

    return 0;
}
