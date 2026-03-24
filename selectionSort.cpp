#pragma once
#include <vector>
#include <chrono>
#include <algorithm>
using namespace std::chrono;
using namespace std;

void selectionSort(vector<int>& arr, long long& comps, auto& t1, auto& t2) {
    int n = arr.size();
    comps = 0;
    t1 = high_resolution_clock::now();
    
    
    for(int i = 0; i < n-1; i++) {
        int minIdx = i;
        for(int j = i+1; j < n; j++) {
            comps++;

            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    t2 = high_resolution_clock::now();
}


