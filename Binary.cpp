#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int low = 0, high = 4, mid;
    int search;
    bool found = false;
cout << "Enter number to search: ";
cin >> search;
while (low <= high) {
 mid = (low + high) / 2;
if (arr[mid] == search) {
cout << "Number found at position " 
  << mid + 1 << endl;
    found = true;
            break;
        }
   else if (arr[mid] < search) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
if (!found) {
cout << "Number not found" << endl;
    }
return 0;
}
