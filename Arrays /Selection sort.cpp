#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "5 elements enter karo:\n";

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Selection Sort Logic
    for(int i = 0; i < 5 - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < 5; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted array (Ascending): ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
