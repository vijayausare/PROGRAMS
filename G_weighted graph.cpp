#include <bits/stdc++.h>

using namespace std;

class Graph{

	unordered_map<string , list<pair<string , int>>>l ; 

	public :
		void addEdge(string x, string y , bool bidir, int wt ){

			l[x].push_back(make_pair(y , wt)); 
			if(bidir)l[y].push_back(make_pair(x,wt)); 

		}

	void printAdjList(){

		for(auto p : l ){
			string city = p.first ; 
			list<pair<string, int>>nbrs = p.second ; 
			cout<<city<<"-->"; 

			for(auto nbr:nbrs){

				string dest = nbr.first ; 
				int dist = nbr.second; 
				cout<<dest<<" "<<dist<<" "; 
			}
			cout<<endl ; 
		}
	}
};

int main()

{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif

Graph g; 
g.addEdge("A", "B", 1, 20); 
g.addEdge("A", "C", 1, 10);
g.addEdge("C", "D", 1, 40);
g.addEdge("A", "D", 0, 50);
g.printAdjList();


	return 0;
}
