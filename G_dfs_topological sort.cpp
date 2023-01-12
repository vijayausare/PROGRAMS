// it is applicabe only on acyclic and directed graph 
// topological sort using bfs 

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

		void dfs_helper(T src, map<T , bool >&visited, list<T>&ordering){

			// cout<<src <<" "; 

			visited[src]= true; 

			for(T nbr : l[src]){
				if(!visited[nbr])dfs_helper(nbr , visited, ordering); 
			}

			ordering.push_front(src); 

		   /// we are pushing from front as we are travesing from bottom to top 


		}

		void dfs(T src){

			map<T, bool >visited;
			list<T>ordering ;  
			// marking all elements as the  non visited first 

			for(auto p : l ){
				T node = p.first; 
				visited[node]= false ; 
			}

			// calling the recursive function 

			for(auto p: l ){
				T node = p.first; 

				if(!visited[node]){
					dfs_helper(node , visited, ordering);
				}
			}

	
			for(auto node : ordering){
				cout<<node<<endl ; 
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
	g.addEdge(0,3); 
	g.addEdge(1,2); 
	g.addEdge(2,3); 
	g.addEdge(3,4); 
	g.addEdge(4,5); 
	g.dfs(0);

	

return 0;
}
