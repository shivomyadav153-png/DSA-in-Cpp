#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1, 2, 4, 5};
    int n = 5;

    int total = n * (n + 1) / 2;
    int sum = 0;

    for(int i = 0; i < 4; i++) {
        sum += arr[i];
    }

    cout << "Missing Number = " << total - sum;
    return 0;
}
