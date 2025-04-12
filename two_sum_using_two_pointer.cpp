#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool twoSum(vector<int>& nums, int x) {
    vector<pair<int, int>> nums2; // pair of <value, original_index>

    // Store each number along with its original index
    for (int i = 0; i < nums.size(); i++) {
        nums2.push_back({nums[i], i});
    }

    // Sort by the values
    sort(nums2.begin(), nums2.end());

    int left = 0, right = nums2.size() - 1;

    while (left < right) {
        int sum = nums2[left].first + nums2[right].first;
        if (sum == x) {
            cout << "Found: " << nums2[left].first << " and " << nums2[right].first << endl;
            cout << "Their sum is: " << x << endl;
            cout << "Their original indices are: " << nums2[left].second << " and " << nums2[right].second << endl;
            return true;
        } else if (sum < x)
            left++;
        else
            right--;
    }

    cout << "No such values exist." << endl;
    return false;
}

int main() {
    vector<int> nums;
    int n, target, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        nums.push_back(temp);
    }

    cout << "Enter target sum: ";
    cin >> target;

    twoSum(nums, target);
}
