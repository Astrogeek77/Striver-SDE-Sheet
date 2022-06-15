// https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int, int> ans;
    int i = 0;
    while (i < n)
    {
        if (arr[i] != arr[arr[i] - 1])
            swap(arr[i], arr[arr[i] - 1]);
        else
            i++;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            ans.first = i + 1;
            ans.second = arr[i];
        }
    }
    return ans;
}
