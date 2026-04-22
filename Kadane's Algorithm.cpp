#include <iostream>
using namespace std;

int main() {
    int arr[5] = {-2, 1, -3, 4, -1};
    int maxSum = arr[0], currSum = arr[0];

    for(int i = 1; i < 5; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << "Max Subarray Sum = " << maxSum;
    return 0;
}
