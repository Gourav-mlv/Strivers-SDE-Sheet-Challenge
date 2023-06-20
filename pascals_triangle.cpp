#include <bits/stdc++.h>
using namespace std;

vector<int> pascalRow(vector<int> inp)
{
    vector<int> ans;
    int temp = 0;
    for (int i : inp)
    {
        ans.push_back(temp + i);
        temp = i;
    }
    ans.push_back(inp[inp.size() - 1]);
    return ans;
}
vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    ans.push_back(vector<int>{1});
    for (int i = 0; i < numRows; i++)
    {
        ans.push_back(pascalRow(ans[ans.size() - 1]));
    }
    return ans;
}
int main()
{
    vector<vector<int>>  ans =  generate(10);
    for(auto i : ans){
        cout<<endl;
        for(auto j : i ){
            cout<<j<<" ";
        }
    }
}
