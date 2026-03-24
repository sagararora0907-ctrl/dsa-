#pragma once
#include <vector>
#include <chrono>

void insertionSort(std::vector<int>& arr, long long& comparisons, auto& start, auto& end) {
    int n = arr.size();
    comparisons = 0;
    start = std::chrono::high_resolution_clock::now();
    
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            comparisons++;
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    end = std::chrono::high_resolution_clock::now();
}
