#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int prn;
    string name;
    Node* link;

    Node(int pr, string nm) : prn(pr), name(nm), link(nullptr) {}
};

class LinkedList {
    Node* start;

public:
    LinkedList() : start(nullptr) {}

    void insert_President() {
        int pr;
        string nm;
        cout << "Enter PRN and Name:\n";
        cin >> pr >> nm;
        Node* tmp = new Node(pr, nm);

        if (start == nullptr)
            start = tmp;
        else {
            tmp->link = start;
            start = tmp;
        }
        display();
    }

    void insert_Secretary() {
        int pr;
        string nm;
        cout << "Enter PRN and Name:\n";
        cin >> pr >> nm;
        Node* tmp = new Node(pr, nm);

        if (start == nullptr)
            start = tmp;
        else {
            Node* q = start;
            while (q->link != nullptr)
                q = q->link;
            q->link = tmp;
        }
        display();
    }

    void insert_Member() {
        int pr, index;
        string nm;
        cout << "Enter PRN and Name:\n";
        cin >> pr >> nm;
        Node* tmp = new Node(pr, nm);

        if (start == nullptr) {
            start = tmp;
        } else {
            cout << "Enter index after which to insert the member: ";
            cin >> index;

            Node* q = start;
            for (int i = 0; i < index && q != nullptr; i++) {
                q = q->link;
            }

            if (q == nullptr) {
                cout << "There are less elements than the specified index.\n";
                delete tmp;
                return;
            }

            tmp->link = q->link;
            q->link = tmp;
        }
        display();
    }

    void del_President() {
        if (start == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        Node* tmp = start;
        start = start->link;
        delete tmp;
        display();
    }

    void del_Secretary() {
        if (start == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        Node* q = start;
        Node* tmp = start;

        while (tmp->link != nullptr) {
            q = tmp;
            tmp = tmp->link;
        }

        q->link = nullptr;
        delete tmp;
        display();
    }

    void del_Member() {
        if (start == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        int pr;
        cout << "Enter PRN to be deleted: ";
        cin >> pr;

        Node* q = start;
        Node* tmp = start;

        while (tmp != nullptr && tmp->prn != pr) {
            q = tmp;
            tmp = tmp->link;
        }

        if (tmp == nullptr) {
            cout << "PRN not found.\n";
            return;
        }

        if (tmp == start)
            start = start->link;
        else
            q->link = tmp->link;

        delete tmp;
        display();
    }

    void display() {
        if (start == nullptr) {
            cout << "Club is empty!!\n";
            return;
        }

        cout << "**** Members in Club ****\n";
        Node* q = start;
        while (q != nullptr) {
            cout << q->prn << " " << q->name << endl;
            q = q->link;
        }
    }

    void count() {
        int i = 0;
        Node* q = start;
        while (q != nullptr) {
            i++;
            q = q->link;
        }
        cout << "Total no. of members in club: " << i << endl;
    }

    void concat(LinkedList& l2) {
        if (start == nullptr) {
            start = l2.start;
            return;
        }

        Node* ptr = start;
        while (ptr->link != nullptr)
            ptr = ptr->link;

        ptr->link = l2.start;
        l2.start = nullptr;  // Clear l2 to avoid duplicate pointers
        display();
    }
};

int main() {
    LinkedList l1, l2;
    int ch;

    cout << "\n**** Linked List *****\n";
    while (true) {
        cout << "\n1.Insert President \n2.Insert Secretary \n3.Insert Member"
                "\n4.Delete President \n5.Delete Secretary \n6.Delete Member"
                "\n7.Display \n8.Count \n9.Concat \n10.Exit\n";
        cout << "Enter Your Choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                l1.insert_President();
                break;
            case 2:
                l1.insert_Secretary();
                break;
            case 3:
                l1.insert_Member();
                break;
            case 4:
                l1.del_President();
                break;
            case 5:
                l1.del_Secretary();
                break;
            case 6:
                l1.del_Member();
                break;
            case 7:
                l1.display();
                break;
            case 8:
                l1.count();
                break;
            case 9:
                cout << "Creating new list to concatenate.\n";
                l2.insert_President();
                l2.insert_Member();
                l2.insert_Secretary();
                l1.concat(l2);
                break;
            case 10:
                exit(0);
            default:
                cout << "\nWrong Choice !!\n";
        }
    }
    return 0;
}