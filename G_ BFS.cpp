#include <bits/stdc++.h>

using namespace std;

template<typename T >

class Graph{
	
	map<T, list<T>>l ;
public:
	void addEdge(int x , int y){
		//bidirection 
		l[x].push_back(y); 
		l[y].push_back(x); 
	}

	void bfs(T src){

		map<T, int>visited; // 
		queue<T>q; 

		q.push(src); 
		visited[src]= true; 


		while(!q.empty()){

			T node  = q.front(); 
			q.pop(); 

			cout<<node<<" ";
			for(int nbr : l[node]){
				if(!visited[nbr]){
					q.push(nbr); 
					visited[nbr]= true; 
				}
			}
		}
	}
};


int main()

{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif
	
	Graph<int>g ; 
	g.addEdge(0,1); 
	g.addEdge(1,2); 
	g.addEdge(2,3); 
	g.addEdge(0,3); 
	g.addEdge(3,4); 
	g.addEdge(4,5); 
	g.bfs(0);
	return 0;
}
