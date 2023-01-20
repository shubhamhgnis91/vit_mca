#include <iostream>
#include <climits>
#define max 5
using namespace std;

int minDistance(int distance[], bool visited[], int n)
{
    int min = INT_MAX, min_index;
    for (int v = 0; v < n; v++)
        if (visited[v] == false && distance[v] <= min)
            min = distance[v], min_index = v;
    return min_index;
}

void prims(int a[][max], int n, int s)
{
    int distance[n], parent[n];
    bool visited[n];

    for(int i=0;i<n;i++)
    {
        distance[i]=INT_MAX;
        visited[i]=false;
        parent[i]=-1;
    }

    distance[s]=0;
    for(int count=0; count<n-1; count++)
    {
        int u = minDistance(distance, visited, n);
        visited[u] = true;

        for(int v=0; v<n; v++)
        {
            if (!visited[v] && a[u][v] && distance[u] != INT_MAX && a[u][v] < distance[v])
            {
                distance[v] = a[u][v];
                parent[v] = u;
            }
        }
    }

    int minCost=0;
    cout<<"Edge \tWeight\n";  
    for (int i = 1; i< n; i++) {
        cout<<parent[i]<<" - "<<i<<" \t"<<distance[i]<<" \n";  
        minCost+=distance[i];
    }
    cout<<"Total cost is: "<<minCost;
}

int main()
{
    int A[][max] ={     { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 },
                    };
    int s,t;
    
    prims(A, max, 0);
    return 0;
}
