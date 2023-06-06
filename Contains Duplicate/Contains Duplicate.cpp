// Checks if an array contains duplicates
//
using namespace std;
#include <iostream>
#include <vector>
#include <map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int, int> m;
        bool found = false;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (auto i :m)
        {
            if (i.second>1)
            {
                found = true;
            }
        }
        return found;
    }
    
};

int main()
{
    Solution s;
    vector<int> nums;
    //nums = { 1, 2, 3 };

    cout << "Type in the size of the vector: ";
    int n;
    cin >> n;
    cout << "Type the numbers in the vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> i;
        nums.push_back(i);
    }
    if (s.containsDuplicate(nums)==true)
    {
        cout << "The vector contains duplicates";
    }
    else
    {
        cout << "The vector does not contain duplicates";
    }
}

