#include <iostream>
#include <iomanip>

class Time {
public:
    int hours;
    int minutes;

    // Overload >> to input hours and minutes
    friend std::istream& operator>>(std::istream& in, Time& t) {
        in >> t.hours >> t.minutes;
        return in;
    }

    // Overload << to output time in hh:mm format
    friend std::ostream& operator<<(std::ostream& out, const Time& t) {
        out << std::setw(2) << std::setfill('0') << t.hours << ":"
            << std::setw(2) << std::setfill('0') << t.minutes;
        return out;
    }
};

int main() {
    Time t;
    std::cout << "Enter hours and minutes separated by space: ";
    std::cin >> t;
    std::cout << "Time is: " << t << std::endl;
    return 0;
}
