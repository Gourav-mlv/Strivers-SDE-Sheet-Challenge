#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int pivot;
    for(int i = n-1 ; i >=0 ;i--){
        for(int j = i-1 ; j >=0 ;j--){
            cout<<"i == "<<permutation[i]<<endl;
            cout<<"j == "<<permutation[j]<<endl;
            if(permutation[j] < permutation[i]){
                cout<<"i == "<<i<<endl;
                cout<<"j == "<<j<<endl;
                int temp = permutation[j] ;
                permutation[j]  =  permutation[i] ;
                permutation[i] = temp ; 
                pivot = j;
                break;
            }
        }
    }
    cout<<"pivot == "<<pivot<<endl;
    sort(permutation.begin()+pivot+1, permutation.end());
    return permutation;
}

int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n ; 
        cin>>n;
        vector<int> input(n);
        for(int i = 0;i<n;i++){
            cin>>input[i];
        }
        vector<int> ans = nextPermutation(input , n);
        for( int i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}