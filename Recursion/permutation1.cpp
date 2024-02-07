#include <bits/stdc++.h>
using namespace std;

void permutation(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[])
{
    if (ds.size() == nums.size())
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (!freq[i])
        {
            ds.push_back(nums[i]);
            freq[i] = 1;
            permutation(ds, nums, ans, freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}

int main()
{
    vector<int> ds, nums;
    vector<vector<int>> ans;
    nums = {1, 2, 3};
    int freq[nums.size()];
    for (int i = 0; i < nums.size(); i++)
        freq[i] = 0;
    permutation(ds, nums, ans, freq);
    for (int i = 0; i < ans.size(); i++)
    {
        for (auto it : ans[i])
            cout << it << " ";
        cout << endl;
    }
    return 0;
}