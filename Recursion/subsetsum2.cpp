#include <bits/stdc++.h>
using namespace std;

void subs(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans)
{
    ans.push_back(ds);
    for (int i = ind; i < nums.size(); i++)
    {
        if (i != ind && nums[i] == nums[i - 1])
            continue;
        ds.push_back(nums[i]);
        subs(i + 1, nums, ds, ans);
        ds.pop_back();
    }
}

int main()
{
    vector<int> nums, ds;
    vector<vector<int>> ans;
    nums = {2, 1, 3, 3, 3, 2, 1};
    sort(nums.begin(), nums.end());
    subs(0, nums, ds, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (auto it : ans[i])
            cout << it << " ";
        cout << endl;
    }
    return 0;
}