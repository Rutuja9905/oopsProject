#include <iostream>
#include <stdexcept> // for out_of_range
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index;
    cout << "Enter index to access: ";
    cin >> index;

    try {
        if (index < 0 || index >= n) {
            throw out_of_range("Index Out of Bounds!");
        }
        cout << "Element at index " << index << " = " << arr[index] << endl;
    } catch (const out_of_range &e) {
        cout << "Exception: " << e.what() << endl;
    }

    delete[] arr; // free allocated memory
    return 0;
}
