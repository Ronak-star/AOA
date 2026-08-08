//C++ Implementation (Kahn's Algorithm) 

// #include <iostream>

// #include <vector>

// #include <queue>

// using namespace std;

// void topologicalSort(int V, vector<vector<int>>& graph)

// {

//     vector<int> indegree(V, 0);

//     // Calculate indegree

//     for(int u = 0; u < V; u++)

//     {

//         for(int v : graph[u])

//             indegree[v]++;

//     }

//     queue<int> q;

//     // Push all vertices with indegree 0

//     for(int i = 0; i < V; i++)

//     {

//         if(indegree[i] == 0)

//             q.push(i);

//     }

//     while(!q.empty())

//     {

//         int node = q.front();

//         q.pop();

//         cout << node << " ";

//         for(int neighbour : graph[node])

//         {

//             indegree[neighbour]--;

//             if(indegree[neighbour] == 0)

//                 q.push(neighbour);

//         }

//     }

// }

// int main()

// {

//     int V = 6;

//     vector<vector<int>> graph(V);

//     graph[5].push_back(2);

//     graph[5].push_back(0);

//     graph[4].push_back(0);

//     graph[4].push_back(1);

//     graph[2].push_back(3);

//     graph[3].push_back(1);

//     cout << "Topological Order:\n";

//     topologicalSort(V, graph);

//     return 0;

// }

// #include <iostream>

// using namespace std;

// int main()

// {

//     int V = 3;

//     int graph[3][3] =

//         {

//             {0, 1, 0},

//             {0, 0, 1},

//             {0, 0, 0}

//         };

//     for (int k = 0; k < V; k++)

//     {

//         for (int i = 0; i < V; i++)

//         {

//             for (int j = 0; j < V; j++)

//             {

//                 if (graph[i][k] && graph[k][j])

//                     graph[i][j] = 1;
//             }
//         }
//     }

//     cout << "Transitive Closure Matrix\n";

//     for (int i = 0; i < V; i++)

//     {

//         for (int j = 0; j < V; j++)

//             cout << graph[i][j] << " ";

//         cout << endl;
//     }
// }



// #include <bits/stdc++.h>
// using namespace std;

// class Un_WeightedGraph
// {
//     int V, E;

// public:

//     void un_weighted_directed_matrix()
//     {
//         cout << "Enter vertices and edges for Directed Graph: ";
//         cin >> V >> E;

//         vector<vector<int>> Admat(V, vector<int>(V, 0));

//         cout << "Enter (u v):\n";

//         for(int i = 0; i < E; i++)
//         {
//             int u, v;
//             cin >> u >> v;

//             Admat[u][v] = 1;
//         }

//         cout << "\nDirected Graph Adjacency Matrix\n";

//         for(int i = 0; i < V; i++)
//         {
//             for(int j = 0; j < V; j++)
//             {
//                 cout << Admat[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     void un_weighted_undirected_matrix()
//     {
//         cout << "\nEnter vertices and edges for Undirected Graph: ";
//         cin >> V >> E;

//         vector<vector<int>> Admat(V, vector<int>(V, 0));

//         cout << "Enter (u v):\n";

//         for(int i = 0; i < E; i++)
//         {
//             int u, v;
//             cin >> u >> v;

//             Admat[u][v] = 1;
//             Admat[v][u] = 1;
//         }

//         cout << "\nUndirected Graph Adjacency Matrix\n";

//         for(int i = 0; i < V; i++)
//         {
//             for(int j = 0; j < V; j++)
//             {
//                 cout << Admat[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     Un_WeightedGraph wg;

//     wg.un_weighted_directed_matrix();

//     cout << endl;

//     wg.un_weighted_undirected_matrix();

//     return 0;
// }









// #include <bits/stdc++.h>
// using namespace std;

// class UnweightedGraph
// {
//     int V, E;

// public:

//     // Unweighted Directed Graph using Adjacency List
//     void Unweighted_directed_List()
//     {
//         cout << "Enter vertices and edges for Unweighted Directed Graph: ";
//         cin >> V >> E;

//         vector<vector<int>> AdjList(V);

//         cout << "Enter (u v):\n";

//         for(int i = 0; i < E; i++)
//         {
//             int u, v;
//             cin >> u >> v;

//             AdjList[u].push_back(v);
//         }

//         cout << "\nDirected Graph Adjacency List\n";

//         for(int i = 0; i < V; i++)
//         {
//             cout << i << " -> ";

//             for(auto x : AdjList[i])
//             {
//                 cout << x << " ";
//             }

//             cout << endl;
//         }
//     }

//     // Unweighted Undirected Graph using Adjacency List
//     void Unweighted_undirected_List()
//     {
//         cout << "\nEnter vertices and edges for Unweighted Undirected Graph: ";
//         cin >> V >> E;

//         vector<vector<int>> AdjList(V);

//         cout << "Enter (u v):\n";

//         for(int i = 0; i < E; i++)
//         {
//             int u, v;
//             cin >> u >> v;

//             AdjList[u].push_back(v);
//             AdjList[v].push_back(u);
//         }

//         cout << "\nUndirected Graph Adjacency List\n";

//         for(int i = 0; i < V; i++)
//         {
//             cout << i << " -> ";

//             for(auto x : AdjList[i])
//             {
//                 cout << x << " ";
//             }

//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     UnweightedGraph ug;

//     ug.Unweighted_directed_List();

//     cout << endl;

//     ug.Unweighted_undirected_List();

//     return 0;
// }











#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<vector<int>>& graph,
         vector<bool>& visited,
         stack<int>& st)
{
    visited[node] = true;

    for(int neighbour : graph[node])
    {
        if(!visited[neighbour])
            dfs(neighbour, graph, visited, st);
    }

    st.push(node);
}

int main()
{
    int V = 6;

    vector<vector<int>> graph(V);

    graph[5].push_back(2);
    graph[5].push_back(0);
    graph[4].push_back(0);
    graph[4].push_back(1);
    graph[2].push_back(3);
    graph[3].push_back(1);

    vector<bool> visited(V,false);

    stack<int> st;

    for(int i=0;i<V;i++)
    {
        if(!visited[i])
            dfs(i,graph,visited,st);
    }

    cout<<"Topological Order\n";

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}