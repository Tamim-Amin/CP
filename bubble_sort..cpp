#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - 1 - i; j++) {
            // If current element is greater than the next
            if (arr[j] > arr[j + 1]) {
                // Swap them
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" element: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
