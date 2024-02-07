#include <bits/stdc++.h>
using namespace std;

void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if (ind == arr.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    // pick up the element.
    if (arr[ind] <= target)
    {
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();
    }

    findCombination(ind + 1, target, arr, ans, ds);
}

int main()
{
    int target = 7;
    vector<vector<int>> ans;
    vector<int> arr = {2, 3, 6, 7};
    vector<int> ds;
    findCombination(0, target, arr, ans, ds);
    for (int i = 0; i < ans.size(); i++)
    {
        for (auto it = ans[i].begin(); it != ans[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}