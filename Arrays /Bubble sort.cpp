#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "5 elements enter karo:\n";

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Bubble Sort Logic
    for(int i = 0; i < 5 - 1; i++) {
        for(int j = 0; j < 5 - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array (Ascending): ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
