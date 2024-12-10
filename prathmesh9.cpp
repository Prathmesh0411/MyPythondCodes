#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class stack {
    char s[25];
    int top;
public:
    stack() {
        top = -1;  // Initialize top to -1 indicating the stack is empty
    }

    void push(char val);
    char pop();
    int isfull();
    int isempty();
};

// Check if the stack is empty
int stack::isempty() {
    if(top == -1)
        return 1;  // Stack is empty
    else
        return 0;
}

// Check if the stack is full
int stack::isfull() {
    if(top == 24)
        return 1;  // Stack is full
    else
        return 0;
}

// Push a character onto the stack
void stack::push(char val) {
    if(isfull()) {
        cout << endl << "Stack overflow/full..............." << endl;
    } else {
        top++;
        s[top] = val;
    }
}

// Pop a character from the stack
char stack::pop() {
    char val = '\0';
    if(isempty()) {
        cout << endl << "Stack underflow/empty..............." << endl;
    } else {
        val = s[top];
        top--;
    }
    return val;
}

class str {
    char inputstr[25], revstr[25];
    stack stobj;
public:
    void readstring();
    void revstring();
    void convertstring();
    void checkpalindrome();
};

// Read the input string
void str::readstring() {
    cout << "\nEnter string: ";
    cin.getline(inputstr, 25);  // Safely read input string
    cout << "\nYou entered: -> " << inputstr;
}

// Reverse the string using stack
void str::revstring() {
    int i;
    char ch;
    for(i = 0; inputstr[i] != '\0'; i++) {
        stobj.push(inputstr[i]);
    }
    i = 0;
    cout << "\n\nAfter reversing, your string is: -> ";
    while(!stobj.isempty()) {
        ch = stobj.pop();
        cout << ch;
        revstr[i] = ch;
        i++;
    }
    revstr[i] = '\0';  // Null-terminate the reversed string
}

// Convert all uppercase letters to lowercase
void str::convertstring() {
    int i, j = 0;
    char tempstr[25];
    for(i = 0; inputstr[i] != '\0'; i++) {
        if(inputstr[i] >= 'a' && inputstr[i] <= 'z') {
            tempstr[j] = inputstr[i];
            j++;
        } else if(inputstr[i] >= 'A' && inputstr[i] <= 'Z') {
            tempstr[j] = inputstr[i] + 32;  // Convert uppercase to lowercase
            j++;
        }
    }
    tempstr[j] = '\0';  // Null-terminate the converted string
    strcpy(inputstr, tempstr);  // Copy the converted string back to inputstr
    cout << "\n\nYour converted string: -> " << inputstr;
}

// Check if the string is a palindrome
void str::checkpalindrome() {
    cout << "\n\n\n\n\n";
    cout << "\nChecking for palindrome..." << endl;
    readstring();
    convertstring();
    revstring();
    if(strcmp(inputstr, revstr) == 0) {
        cout << "\n\nYour string is PALINDROME";
    } else {
        cout << "\n\nYour string is NOT PALINDROME";
    }
}

int main() {
    str obj;
    obj.checkpalindrome();  // Perform all operations (read, convert, reverse, check palindrome)
    return 0;
}
