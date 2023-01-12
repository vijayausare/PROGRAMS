// if there is graph in which the compopnents are not conneccted buth these 
// thr part of the same graph 
// uodateed only dfs function

#include <bits/stdc++.h>

using namespace std;

template<typename T>

class Graph{
	map<T, list<T>>l ; 
	
	public:
		void addEdge(int x , int y ){
			l[x].push_back(y); 
			l[y].push_back(x); 
		}

		// recursive function

		void dfs_helper(T src, map<T , bool >&visited){

			cout<<src <<" "; 

			visited[src]= true; 

			for(T nbr : l[src]){
				if(!visited[nbr])dfs_helper(nbr , visited); 
			}
		}

		void dfs(T src){

			map<T, bool >visited; 
			// marking all elements as the  non visited first 
			

			for(auto p : l ){
				T node = p.first; 
				visited[node]= false ; 
			}

			//  we wiill call gfs function  n number of times calling the recursive function 
			// where n is the no of the connected componenets to given graph 
			int cnt  =0 ; 
			for(auto p : l ){
				T node = p.first; 
				if(!visited[node]){
					cout<<"componenets "<<cnt <<"-->";
					dfs_helper(node , visited);  
					cnt++; 
					cout<<endl ; 

				} 
			}
		}

}; 


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Graph<int> g ; 
	g.addEdge(0,1);
	g.addEdge(1,2); 
	g.addEdge(2,3); 
	g.addEdge(3,4); 
	
	g.addEdge(6,7); 
	g.addEdge(7,8);
	g.addEdge(8,9);  
	
	g.addEdge(10,11); 
	g.addEdge(11,16);
	g.addEdge(16,20);  


	g.dfs(0);

	

return 0;
}
