#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;

void print(vector<int> v) { for(int x:v) cout<<x<<" "; cout<<endl; }

// 1. SORTING TEST (With Time & Iterations)
void testSorting() {
    cout << "\n=== SORTING ALGORITHMS (Bubble Sort) ===\n";
    vector<int> input = {64, 34, 25, 12, 22};
    int iterations = 0;
    cout << "Input: "; print(input);

    auto start = high_resolution_clock::now(); // Start Time

    // Bubble Sort Logic
    for (int i = 0; i < input.size()-1; i++) {
        for (int j = 0; j < input.size()-i-1; j++) {
            iterations++; 
            if (input[j] > input[j+1]) swap(input[j], input[j+1]);
        }
    }

    auto stop = high_resolution_clock::now(); // Stop Time
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Output: "; print(input);
    cout << "Time Taken: " << duration.count() << " microseconds" << endl;
    cout << "Iterations: " << iterations << endl;
}

// 2. ARRAY TEST
void testArray() {
    cout << "\n=== ARRAY OPERATIONS ===\n";
    vector<int> arr = {10, 20, 30, 40};
    auto start = high_resolution_clock::now();

    auto it = find(arr.begin(), arr.end(), 30);
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Search 30: index " << (it-arr.begin()) << endl;
    cout << "Operation Time: " << duration.count() << " microseconds" << endl;
}

int main() {
    testSorting();
    testArray();
    return 0;
}