#include <bits/stdc++.h>
using namespace std;

void setZeros(std::vector<std::vector<int>> &matrix)
{
	int m = matrix.size();	
	int n = matrix[0].size();
	int row1Zero = 1;
	for(int i = 0;i<n;i++){
		if(matrix[0][i]==0){
			row1Zero = -1;
			break;
		}
	}
	for(int i = 0;i<m;i++){
		if(matrix[i][0]==0){
			matrix[0][0] = -1;
			break;
		}
	}
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			if(matrix[i][j]==0){
				if(i!=0){
					matrix[i][0] = -1;
				}
				if(j!=0){
					matrix[0][j] = -1;
				}
			}
		}
	}


	cout<<endl;
	for(int i = 0 ; i< m;i++){
		for(int j = 0 ; j< n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i = 1;i<m;i++){
		if(matrix[i][0]==-1){
			for(int j = 1;j < n;j++){
				matrix[i][j] = 0;
			}
			matrix[i][0] = 0;
		}
	}

	for(int j = 1;j<n;j++){
		if(matrix[0][j]==-1){
			for(int i = 1;i < m;i++){
				matrix[i][j] = 0;
			}
			matrix[0][j] = 0;
		}
	}


	cout<<endl;
	for(int i = 0 ; i< m;i++){
		for(int j = 0 ; j< n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}


	if(matrix[0][0]==-1){
		for(int i = 0;i < m;i++){
			matrix[i][0] = 0;
		}
	}
	
	if(row1Zero==-1){
		for(int j = 0;j < n;j++){
			matrix[0][j] = 0;
		}
	}

}
int main(){
    std::vector<std::vector<int>> matrix;
	int t ;
	cin>>t;
	while(t--){
		int m , n ;
		cin>>m>>n;
		for(int i = 0 ; i< m;i++){
			std::vector<int>ip;
			for(int j = 0 ; j< n;j++){
				int val;
				cin>>val;
				ip.push_back(val);
			}
			matrix.push_back(ip);
		}
		setZeros(matrix);
		cout<<endl;
		for(int i = 0 ; i< m;i++){
			for(int j = 0 ; j< n;j++){
				cout<<matrix[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}



