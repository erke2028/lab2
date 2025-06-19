#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    bool isPositive = (num > 0);

    if (isPositive)
        cout << "The number is positive." << endl;
    else
        cout << "The number is not positive." << endl;

    return 0;
}
