#include <bits/stdc++.h>
using namespace std;


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
			l[y].push_back(x); 
		}

		void printTheGraph(){;
			for(int i =0; i < v ;i++){
				cout<<"vertex "<<i <<"--->"; 
				for(int nbr :l[i]){

					cout<<nbr<<" ";
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


Graph g(4); 
g.addEdge(0 ,1); 
g.addEdge(0,2);
g.addEdge(2,3); 

g.printTheGraph(); 

	return 0;
}
