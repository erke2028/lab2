#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter a positive number N: ";
    cin >> N;

    for (int i = 2; i <= N; i += 2) {
        sum += i;
    }

    cout << "Sum " << sum << endl;
    return 0;
}
