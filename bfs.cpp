#include <bits/stdc++.h>
using namespace std;

// preparing adjacencylist
void adjlistprep(vector<vector<int>> &vec, map<int, list<int>> &adj)
{

    for (int i = 0; i < vec.size(); i++)
    {
        int u = vec[i][0];
        int v = vec[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void bfs(map<int, list<int>> &adj, unordered_map<int, bool> &visited, int node=9)
{
    queue<int> q;
    q.push(node);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        visited[front] = true;
        // cout << front<<" ";
        cout<<front<<" ";
        for (auto &a : adj[front])
        {
        
            if (visited[a] == false)
                q.push(a);
               
        }
    }
}

int main()
{
    vector<vector<int>> vec = {{1, 4}, {1, 7}, {5, 4}, {5, 9}, {6, 4}, {6, 9}, {6, 8}, {7, 8}, {8, 9}};

    // for (auto &a : vec)
    // {
    //     for (auto &b : a)
    //     {
    //         cout << b << " ";
    //     }
    //     cout << endl;
    // }

    map<int, list<int>> adj;
    adjlistprep(vec, adj);

    cout << "adjacency list :" << endl;
    for (auto &a : adj)
    {
        cout << a.first << " :  ";
        for (auto &b : a.second)
        {
            cout << "-> " << b;
        }
        cout << endl;
    }

    unordered_map<int, bool> visited;
    bfs(adj,visited);

    return 0;
}