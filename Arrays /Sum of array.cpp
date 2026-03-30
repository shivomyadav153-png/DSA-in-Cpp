#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];  // array declaration
    int sum = 0;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // sum calculate karna
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of array elements = " << sum;

    return 0;
}
