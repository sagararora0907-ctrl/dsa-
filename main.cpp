#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <unordered_map>
#include <chrono>
#include <algorithm>
#include <iomanip>
using namespace std;
using namespace chrono;

void print(vector<int> v) { for(int x:v) cout<<x<<" "; cout<<endl; }

// 1. SORTING TESTS
void testSorting() {
    cout << "\n=== SORTING ALGORITHMS ===\n";
    vector<int> input = {64,34,25,12,22};
    cout << "Input: "; print(input);
    
    // Bubble sort test (function copy-paste karo yaha)
    // Quick sort test...
}

// 2. ARRAY TEST
void testArray() {
    cout << "\n=== ARRAY OPERATIONS ===\n";
    vector<int> arr = {10,20,30,40};
    
    cout << "Array: "; print(arr);
    auto it = find(arr.begin(), arr.end(), 30);
    cout << "Search 30: index " << (it-arr.begin()) << endl;
    
    arr[1] = 999; arr.erase(arr.begin()+2);
    cout << "After update+delete: "; print(arr);
}

// 3. STRING TEST
void testString() {
    cout << "\n=== STRING OPERATIONS ===\n";
    string s = "hello";
    cout << "String: " << s << endl;
    
    s[1] = 'a'; s.erase(2,2);
    cout << "After update+delete: " << s << endl;  // "halo"
}

// 4. LINKED LIST TEST
void testLinkedList() {
    cout << "\n=== LINKED LIST ===\n";
    list<int> ll = {10,20,30};
    cout << "LL: ";
    for(int x:ll) cout<<x<<" "; cout<<endl;
    
    ll.erase(next(ll.begin(),1));
    cout << "After delete: ";
    for(int x:ll) cout<<x<<" "; cout<<endl;
}

int main() {
    testSorting();
    testArray();
    testString();
    testLinkedList();
    return 0;
}