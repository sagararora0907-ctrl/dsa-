#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace chrono;

int main() {
    vector<int> arr = {64, 34, 25, 12, 22};
    
    cout << "Input: "; for(int x:arr) cout<<x<<" "; cout<<endl;
    
    long long comps = 0;
    auto start = high_resolution_clock::now();
    
    // Bubble sort with counter
    int n = arr.size();
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            comps++;                    // ← Comparison count
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
    
    auto end = high_resolution_clock::now();
    auto time_ms = duration_cast<microseconds>(end-start).count()/1000.0;
    
    cout << "Output: "; for(int x:arr) cout<<x<<" "; cout<<endl;
    cout << "Time: " << time_ms << "ms" << endl;
    cout << "Comparisons: " << comps << endl;
    
    return 0;
}
