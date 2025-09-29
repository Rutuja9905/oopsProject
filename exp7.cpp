#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
              
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}

template <typename T>
void displayArray(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {5, 2, 9, 1, 7};
    float floatArr[] = {3.2, 1.5, 4.8, 2.9};
    char charArr[] = {'z', 'a', 'u', 'b'};

    int n1 = sizeof(intArr) / sizeof(intArr[0]);
    int n2 = sizeof(floatArr) / sizeof(floatArr[0]);
    int n3 = sizeof(charArr) / sizeof(charArr[0]);

    cout << "Original integer array: ";
    displayArray(intArr, n1);
    sortArray(intArr, n1);
    cout << "Sorted integer array: ";
    displayArray(intArr, n1);

    cout << "\nOriginal float array: ";
    displayArray(floatArr, n2);
    sortArray(floatArr, n2);
    cout << "Sorted float array: ";
    displayArray(floatArr, n2);

    cout << "\nOriginal char array: ";
    displayArray(charArr, n3);
    sortArray(charArr, n3);
    cout << "Sorted char array: ";
    displayArray(charArr, n3);

    return 0;
}
