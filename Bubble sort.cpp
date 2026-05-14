#include <iostream>
using namespace std;
int main() {
    int arr[5] = {50, 20, 40, 10, 30};
    int temp;
cout << "Before Sorting: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }}}
  cout << "\nAfter Sorting: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
 return 0;
}
