#include <iostream>
using namespace std;

int main() {
    int hours;
    cin >> hours;

    int minutes = hours * 60;
    int seconds = hours * 3600;

    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}
