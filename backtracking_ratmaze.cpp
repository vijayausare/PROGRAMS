#include <bits/stdc++.h>

using namespace std;


bool ratInMaze(char maze[10][10], int soln[][10], int i , int j , int m , int n ){

	if(i ==m and j ==n ){

		soln[m][n]=1; 

		//printing the path 

		for(int i= 0 ; i<=m ; i++){

			for(int j= 0 ; j<=n ; j++ ){
				cout<<soln[i][j]<<" ";

			}cout<<endl ;

		}cout<<endl ; 

		return true  ; 
	}

	//rat should be inside the grid 

	if(i>m or j>n)return false ; 
	if(maze[i][j]=='X')return false; 


	// assuming that solution exist through the current cell 

	soln[i][j]=1; 

	bool rightSuccess = ratInMaze(maze , soln, i , j+1 ,m , n ); 
	bool downSuccess = ratInMaze(maze , soln , i+1, j , m ,n ); 


	//backtracking 

	soln[i][j]=0; 

	if(rightSuccess or downSuccess)return true;

	return false; 
}


int main()

{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif
	
	char maze[10][10]={

		"0000",
		"00X0",
		"000X",
		"0X00",
	};

int soln[10][10]= {0}; 
int m= 4, n =4 ; 

bool ans = ratInMaze(maze , soln , 0,0,m-1, n-1 ); 

if(!ans){cout<<"Pathh dose not exist !";}



	return 0;
}
