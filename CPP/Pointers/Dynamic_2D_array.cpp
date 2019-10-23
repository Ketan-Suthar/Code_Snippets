// source https://www.geeksforgeeks.org/create-dynamic-2d-array-inside-class-c/
// C++ program to show how to allocate dynamic 2D 
// array in a class using a Graph example. 
#include<bits/stdc++.h> 
using namespace std; 

// A Class to represent directed graph 
class Graph 
{ 
	int V; // No. of vertices 

	// adj[u][v] would be true if there is an edge 
	// from u to v, else false 
	bool **adj; 

public: 
	Graph(int V); // Constructor 

	// function to add an edge to graph 
	void addEdge(int u, int v) { adj[u][v] = true; } 
	void print(); 
};

Graph::Graph(int V) 
{ 
	this->V = V; 

	// Create a dynamic array of pointers 
	adj = new bool* [V]; 

	// Create a row for every pointer 
	for (int i=0; i<V; i++) 
	{
		// Note : Rows may not be contiguous 
		adj[i] = new bool[V]; 

		// Initialize all entries as false to indicate 
		// that there are no edges initially 
		memset(adj[i], false, V*sizeof(bool)); 

		//cout<<*adj[i]<<endl;
	} 
} 

// Utility method to print adjacency matrix 
void Graph::print() 
{ 
for (int u=0; u<V; u++) 
{ 
	for (int v=0; v<V; v++) 
		cout << adj[u][v] << " "; 
	cout << endl; 
} 
} 

// Driver method 
int main() 
{ 
	// Create a graph given in the above diagram 
	Graph g(4); 
	g.addEdge(0, 1); 
	g.addEdge(0, 2); 
	g.addEdge(1, 2); 
	g.addEdge(2, 0); 
	g.addEdge(2, 3); 
	g.addEdge(3, 3); 

	g.print(); 

	return 0; 
} 
