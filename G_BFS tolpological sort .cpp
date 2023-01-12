#include <bits/stdc++.h>

using namespace std;

template<typename T>

class Graph{

int v ; // vertices of the graph  

	list<int>*l ; /// pointer pointing to the array of the list 
		// as we dont know the size of v which will get at runtime 

public:
	Graph(int v ){
			this->v = v; 

			l = new list<int>[v];// here we are creating the v size of array which are the list 

	}

	void addEdge(int x , int y ){
		l[x].push_back(y); 
		// only directed array are allowed in the topological sort
	}

	void topologicalSort(){

		// indegree 
		int * indegree = new int[v]; 

		//making all elements as 0 in indegree array 

		for(int i = 0 ; i< v; i++)indegree[i]=0 ; 

		//calculating actual indegreee in

		for(int i =0 ; i<v ;i++){
			for(auto y : l[i]){
				indegree[y]++; 
			}
		}


		// bfs 

		queue<int>q; 

		// finding the nodes with 0 indegree 
		for(int i =0 ; i< v ;i++){
			if(indegree[i]==0 ) q.push(i); 

		}

		//start removing elements from queue 

		while(!q.empty()){
			int node = q.front(); 
			q.pop(); 
			cout<<node<<" ";

			// itherate over the node and reduce indegree of nbr 

			for(auto nbr : l[node]){
				indegree[nbr]--; 
				if(indegree[nbr]==0)q.push(nbr); 

			}
		}
	}
};

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	

Graph<int>g(4); 
g.addEdge(0 ,1); 
g.addEdge(0,2);
g.addEdge(2,3); 
g.topologicalSort(); 

	

return 0;
}
