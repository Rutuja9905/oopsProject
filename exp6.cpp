#include <iostream>
#include <iomanip>
using namespace std;

class Time {
    int hours;
    int minutes;

public:
    Time() : hours(0), minutes(0) {}

    // Friend function to overload >> for input
    friend istream &operator>>(istream &in, Time &t) {
        cout << "Enter hours: ";
        in >> t.hours;
        cout << "Enter minutes: ";
        in >> t.minutes;

        // Adjust if minutes exceed 60
        if (t.minutes >= 60) {
            t.hours += t.minutes / 60;
            t.minutes = t.minutes % 60;
        }

        return in;
    }

    // Friend function to overload << for output
    friend ostream &operator<<(ostream &out, const Time &t) {
        out << setfill('0') << setw(2) << t.hours << ":"
            << setfill('0') << setw(2) << t.minutes;
        return out;
    }
};

int main() {
    Time t1;
    cin >> t1;
    cout << "\nFormatted Time is: " << t1 << endl;
    return 0;
}

