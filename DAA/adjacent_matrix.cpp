/*#include<bits/stdc++.h>
using namespace std;
struct graph_adt
{
    int v;
    int e;
    int **adjmat;
};
struct graph_adt g;
int create_graph(graph_adt g,int n);
int add_edge(graph_adt g,int i,int j);
int main()
{
    int n;
    cin>>n;
    int i,j;
    cin>>i>>j;
    create_graph(g,n);
    add_edge(g,i,j);
    return 0;
}*/

// graph adt based on adjacency matrix, user input conforms

#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    int V;
    int E;
    int **adjmatrix;

    Graph()
    {
        cout << "Please enter the number of vertices:" << endl;
        cin >> V;
        cout << "Please enter the number of edges:" << endl;
        cin >> E;
        adjmatrix = new int *[V];
        for (int i = 0; i < V; i++)
        {
            adjmatrix[i] = new int[V];
            for (int j = 0; j < V; j++)
            {
                adjmatrix[i][j] = 0;
            }
        }
    }
    void add_edge(int u, int v)
    {
        adjmatrix[u][v] = 1;
        adjmatrix[v][u] = 1;
    }
    void print_matrix()
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
                cout << adjmatrix[i][j] << " ";
            cout << endl;
        }
    }
    void adjacencyList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "Vertex " << i << " is connected with: ";
            for (int j = 0; j < V; j++)
            {
                if (adjmatrix[i][j])
                {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g;
    for (int i = 0; i < g.E; i++)
    {
        int a, b;
        cout << "Add an edge connecting the two vertices:" << endl;
        cin >> a >> b;
        g.add_edge(a, b);
    }
    g.print_matrix();
    g.adjacencyList();
}
