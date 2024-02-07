#include <bits/stdc++.h>
using namespace std;

void perm(int ind, vector<int> &nums, vector<vector<int>> &ans)
{
    if (ind == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = ind; i < nums.size(); i++)
    {
        swap(nums[ind], nums[i]);
        perm(ind + 1, nums, ans);
        swap(nums[ind], nums[i]);
    }
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    perm(0, nums, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (auto it : ans[i])
            cout << it << " ";
        cout << endl;
    }
    return 0;
}