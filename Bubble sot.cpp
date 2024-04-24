#include <iostream>
#include <vector>
#include <omp.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function to perform Parallel Bubble Sort using OpenMP
void parallelBubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool sorted = false;

    while (!sorted) {
        sorted = true;
        #pragma omp parallel for shared(arr, sorted)
        for (int i = 0; i < n - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                #pragma omp critical
                {
                    swap(arr[i], arr[i + 1]);
                    sorted = false;
                }
            }
        }
    }
}

int main() {
    // Input array
    vector<int> arr = {5, 2, 9, 1, 7, 6, 8, 3, 4};

    // Measure time for parallel bubble sort
    auto start = high_resolution_clock::now();
    parallelBubbleSort(arr);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    // Output sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Output execution time
    cout << "Parallel Bubble Sort took " << duration.count() << " microseconds." << endl;

    return 0;
}
