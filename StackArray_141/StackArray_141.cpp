// StackArray_141.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

class StackArray {
private:
    string stack_array[5];
    int top;
public:
    //constructor
    StackArray() {
        top = -1;
    }

    string push(string element) {
        if (top == 4) { //step 1
            cout << "Number of data exceeds the limit." << endl;
            return;
        }

        top++;      //step2
        stack_array[top] = element;     //step3
        cout << endl;
        cout << element << "ditambahkan(pushed)" << endl;

        return element;
    }

    void pop() {
        if (empty()) {      //step 1
            cout << "\nStack is empty. Cannot pop." << endl;    //1.a
            return;     //1.b
        }

        cout << "\nThe popped element is: " << stack_array[top] << endl;    //step2
        top--;  //step3 decrement
    }

    //method for check if data is empty
    bool empty() {
        return (top == -1);

    }

    void display() {
        if (empty()) {
            cout << "\nStack is empty." << endl;

        }
        else {
            for (int tmp = 0; tmp <= top; tmp++) {
                cout << stack_array[tmp] << endl;
            }
        }
    }

};

int main()
{
    StackArray s;
    while (true) {
        cout << endl;
        cout << "\n***Stack Menu**\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "\nEnter your choice: ";
        string input;
        getline(cin, input);
        char ch = (input.empty() ? '0' : input[0]);
        switch (ch) {
        case '1': {
            cout << "\nEnter a element: ";
            string element;
            getline(cin, element);
            s.push(element);
            break;
        }
        }


    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
