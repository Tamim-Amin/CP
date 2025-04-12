#include <iostream>
#include <vector>

using namespace std;

// Function to find subarray with given sum using two pointers method
bool findSubarrayWithSum( vector<int>& arr, int x)
{
    int left = 0, right = 0, current_sum = 0;
    int n = arr.size();

    // Iterate through the array
    while (right < n)
    {
        // Add elements to current_sum until it is greater than or equal to x
        while (current_sum < x && right < n)
        {
            current_sum += arr[right];
            right++;
        }

        // If current_sum becomes equal to x, return true
        if (current_sum == x)
        {
            cout << "Targeted sub-array found from index " << left << " to " << right - 1 << endl;
            cout << "Sub-array elements are: ";
            for (int i = left; i < right; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            return true;
        }

        // Move the left pointer to reduce the current_sum
        while (current_sum > x && left < right)
        {
            current_sum -= arr[left];
            left++;
        }

        // Check again after reducing
        if (current_sum == x)
        {
            cout << "Targeted sub-array found from index " << left << " to " << right - 1 << endl;
            cout << "Sub-array elements are: ";
            for (int i = left; i < right; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            return true;
        }
    }

    // If no subarray with sum x is found
    cout << "No sub-array with sum " << x << " exists in this array." << endl;
    return false;
}

int main()
{
    int n, x,temp;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    cout << "Enter the target sum: ";
    cin >> x;

    // Call the function to find subarray with given sum
    findSubarrayWithSum(arr, x);

    return 0;
}
