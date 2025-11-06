#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Display function
    void display() {
        cout << "Value = " << value << endl;
    }

    // Overload ++ using member function (prefix)
    void operator++() {
        value = value + 100;
    }

    // Overload ++ using friend function (postfix)
    friend void operator++(Number &n, int);
};

// Friend function definition
void operator++(Number &n, int) { // postfix dummy int
    n.value = n.value + 100;
}

int main() {
    Number n1(200), n2(500);

    cout << "--- Using Member Function (Prefix) ---" << endl;
    cout << "Before increment: ";
    n1.display();

    ++n1; // calls member function
    cout << "After increment: ";
    n1.display();

    cout << "\n--- Using Friend Function (Postfix) ---" << endl;
    cout << "Before increment: ";
    n2.display();

    n2++; // calls friend function
    cout << "After increment: ";
    n2.display();

    return 0;
}
