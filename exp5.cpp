#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) {
        value = v;
    }
    Number operator++() {
        value += 100;
        return *this;
    }

    friend Number operator++(Number &obj, int);

    void display() {
        cout << "Value: " << value << endl;
    }
};

Number operator++(Number &obj, int) {
    Number temp = obj;
    obj.value += 100;
    return temp;
}

int main() {
    Number n1(200);

    cout << "Initial: ";
    n1.display();

    ++n1; 
    cout << "After pre-increment (++n1): ";
    n1.display();

    n1++; 
    cout << "After post-increment (n1++): ";
    n1.display();

    return 0;
    }
