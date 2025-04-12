#include<iostream>
using namespace std;
void selectionSort(int arr[],int s)
{
    for(int i=0;i<s-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<s;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}
int main()
{
    int s;
    cout<<"Size: ";
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,s);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
}

