#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int even = 0;

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            even++;
        }
    }

    cout << "even numbers: "<< even << endl;
    return 0;
}
