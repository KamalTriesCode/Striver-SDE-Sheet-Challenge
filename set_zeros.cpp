#include<bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	int row=matrix.size();
	int col=matrix[0].size();

	int k_row=1,l_col=1;

	for(int i=0;i<col;i++)
	{
		if(matrix[0][i]==0)
		{
			k_row=0;
			break;
		}
	}

	for(int i=0;i<row;i++)
	{
		if(matrix[i][0]==0)
		{
			l_col=0;
			break;
		}
	}

	// cout<<k_row<<" "<<l_col;

	for(int i=1;i<row;i++)
	{
		for(int j=1;j<col;j++)
		{
			if(matrix[i][j]==0)
			{
				matrix[0][j]=0;
			}
		}
	}

	for(int i=1;i<col;i++)
	{
		for(int j=1;j<row;j++)
		{
			if(matrix[j][i]==0)
			{
				matrix[j][0]=0;
			}
		}
	}

	for(int i=1;i<row;i++)
	{
		if(matrix[i][0]==0)
		{
			for(int j=1;j<col;j++)
			{
				matrix[i][j]=0;
			}
		}
	}

	for(int i=1;i<col;i++)
	{
		if(matrix[0][i]==0)
		{
			for(int j=1;j<row;j++)
			{
				matrix[j][i]=0;
			}
		}
	}

	if(k_row==0)
	{
		for(int i=0;i<col;i++)
		{
			matrix[0][i]=0;
		}
	}

	if(l_col==0)
	{
		for(int j=0;j<row;j++)
		{
			matrix[j][0]=0;
		}
	}
}

int main()
{
	int r,c;
	cin>>r>>c;
	// cout<<r<<c;
	vector<vector<int>> matrix;

	for(int i=0;i<r;i++)
	{
		vector<int> temp;
		for(int j=0;j<c;j++)
		{
			int x;
			cin>>x;
			temp.push_back(x);
		}

		matrix.push_back(temp);
	}

	setZeros(matrix);

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<matrix[i][j]<<" ";
		}

		cout<<endl;
	}
}