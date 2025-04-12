#include<bits/stdc++.h>
using namespace std;
// Function to check if the given string is a palindrome
bool isPalindrome(string s)
{
    int left = 0, right = s.size() - 1;// Initialize two pointers
    //to check palindrome
    while (left < right)
    {
        // Skip non-alphanumeric characters from the left side
        while (left < right && !isalnum(s[left]))
            left++;
        // Skip non-alphanumeric characters from the right side
        while (left < right && !isalnum(s[right]))
            right--;

        //compare left and right pointer,ignoring case
        if (tolower(s[left]) != tolower(s[right]))
            return false;//If doesn't match

        left++, right--;//it match
    }
    //If the string is palindrome
    return true;
}

int main()
{
    string s;
    cout<<"Enter any string: ";
    getline(cin, s);

    if(isPalindrome(s))
    {
        cout<<"The string is valid palindrome.";
    }
    else
    {
        cout<<"The string is not a palindrome.";
    }

    return 0;
}
