#include <iostream>
using namespace std;

double largest(double arr[], int n) {
    double num = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > num) {
            num = arr[i];
        }
    }
    return num;
}

int main() {
    double arr[] = {138, 77, 90, 12, 928};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest element is: " << largest(arr, n);
    return 0;
}
