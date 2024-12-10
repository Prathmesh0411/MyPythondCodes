#include <iostream>
using namespace std;

class stack {
    char s[25];
    int top;

public:
    stack() {
        top = -1;  // Initializing stack
    }

    void push(char val);
    char pop();
    bool isempty();
    bool isfull();
    void display();
};

bool stack::isempty() {
    if (top == -1) {
        return true;  // Stack is empty
    }
    return false;  // Stack is not empty
}

bool stack::isfull() {
    if (top >= 24) {
        return true;  // Stack is full
    }
    return false;  // Stack is not full
}

void stack::push(char val) {
    if (isfull()) {
        cout << "\nStack is full!";
    } else {
        top++;
        s[top] = val;  // Add element to stack
    }
}

char stack::pop() {
    if (isempty()) {
        cout << "\nStack is empty!";
        return '*';  // Returning a placeholder for empty stack
    } else {
        char val = s[top];
        top--;  // Remove element from stack
        return val;
    }
}

void stack::display() {
    if (isempty()) {
        cout << "\nStack is empty!";
    } else {
        cout << "\nStack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << s[i] << " ";
        }
    }
}

class paranthesis {
    char expn[25];
    stack obj;

public:
    void read();
    void checkexpn();
};

void paranthesis::read() {
    cout << "\nEnter the expression: ";
    cin >> expn;
    cout << "\nEntered expression is: " << expn;
}

void paranthesis::checkexpn() {
    int i, flag = 0;
    char ch;
    for (i = 0; expn[i] != '\0'; i++) {
        // Push opening brackets onto the stack
        if (expn[i] == '{' || expn[i] == '[' || expn[i] == '(') {
            obj.push(expn[i]);
        }

        // Check closing brackets and match them
        if (expn[i] == '}' || expn[i] == ']' || expn[i] == ')') {
            if (!obj.isempty()) {
                ch = obj.pop();
                if ((expn[i] == '}' && ch != '{') ||
                    (expn[i] == ']' && ch != '[') ||
                    (expn[i] == ')' && ch != '(')) {
                    flag = 1;
                    break;  // If mismatched parentheses, exit
                }
            } else {
                flag = 1;
                break;  // Closing without matching opening parenthesis
            }
        }
    }

    if (flag == 0 && obj.isempty()) {
        cout << "\nExpression is well-formed with parentheses.";
    } else {
        cout << "\nExpression is not well-formed with parentheses.";
    }
}

int main() {
    paranthesis obj1;
    obj1.read();
    obj1.checkexpn();
    return 0;
}
