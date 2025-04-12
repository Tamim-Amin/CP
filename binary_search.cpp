#include <iostream>
using namespace std;

// Binary Search Function to find the target in a sorted array
bool binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;  // Initialize the search boundaries

    // Continue searching while the search space is valid
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Calculate mid to avoid overflow

        // Check if mid element is the target
        if (arr[mid] == target)
            return true;

        // If target is greater, ignore the left half
        else if (arr[mid] < target)
            left = mid + 1;

        // If target is smaller, ignore the right half
        else
            right = mid - 1;
    }

    return false;  // Target not found
}

int main() {
    int n, target;


    cout << "Enter the number of product: ";
    cin >> n;

    int arr[n];


    cout << "Enter " << n << " sorted product IDs:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    cout << "Enter the target product IDs to search to check if exist: ";
    cin >> target;


   // int result = binarySearch(arr, n, target);

    // Output result based on whether the product ID was found
    if (binarySearch(arr,n,target))
        cout << "True" << endl;  // Product found
    else
        cout << "False" << endl;  // Product not found

    return 0;
}

