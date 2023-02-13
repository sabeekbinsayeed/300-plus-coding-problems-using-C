#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> edgeweightPair;

class Graph{
int V;
list <edgeweightPair> *adj;

public:
    Graph(int V)
    {
        this->V=V;
        adj=new list <edgeweightPair> [V];
    }

    void add_edge(int u,int v, int w)
    {
        adj[u].push_back(make_pair(v,w));
         adj[v].push_back(make_pair(u,w));
    }

    void print_neighbour (int chk)
    {

        cout << chk <<" : " << endl;

       for (auto i = adj[chk].begin(); i != adj[chk].end(); i++)
        {
            cout << " (" << (*i).first << ", " << (*i).second << ")";
        }

}

void bfs(int s)
{

vector <bool> visited(V, false);
queue <int> q;


q.push(s);
cout << s<< " ";
visited[s]=true;


while (! q.empty())
{
    int u=q.front();
    q.pop();

    for (auto element:adj[u])
    {
        int v=element.first;
        if (visited[v]!=true)
        {
            visited[v]=true;
            cout << v<< " ";
            q.push(v);
        }
    }
}

}
};
int main()
{
    int V,E,source;
    cin >>V >> E >> source;
    Graph g(V);
    int u,v,w;
    for (int i=0;i<E;i++)
    {
        cin >> u >> v >> w;
        g.add_edge(u,v,w);
    }

    for (int i=0;i<V;i++)
    {
        g.print_neighbour(i);
        cout << endl;
    }

    cout << endl << endl;
    g.bfs(source);


    return 0;
}

/*
7 10 0
0 1 7
0 2 1
0 5 3
1 3 11
2 3 3
3 6 1
6 5 2
6 4 4
5 4 6
2 5 8

*/
