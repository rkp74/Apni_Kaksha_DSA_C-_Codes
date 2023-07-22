#include <iostream>
#include <vector>

using namespace std;

// Function to swap two integers
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Recursive function to generate permutations
void generatePermutations(vector<int>& arr, int start, int end) {
    if (start == end) {
        // Base case: all elements have been fixed, so print the permutation
        for (int i = 0; i <= end; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        // Recursively generate permutations
        for (int i = start; i <= end; i++) {
            // Fix the element at index 'start'
            swap(arr[start], arr[i]);

            // Generate permutations for the remaining elements
            generatePermutations(arr, start + 1, end);

            // Restore the array to its original state
            swap(arr[start], arr[i]);
        }
    }
}

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    
    int n = nums.size();

    generatePermutations(nums, 0, n - 1);

    return 0;
}
