#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;


int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    cout << "Array: ";
    for(int x : arr) cout << x << " "; cout << endl;

    auto it = find(arr.begin(), arr.end(), 30);
    if(it != arr.end()) cout << "30 found at index " << (it - arr.begin()) << endl;

    arr[2] = 999;
    cout << "After update: ";
    for(int x : arr) cout << x << " "; cout << endl;

    arr.erase(arr.begin() + 3);
    cout << "After delete index 3: ";
    for(int x : arr) cout << x << " "; cout << endl;
    return 0;
}
