#include <iostream>
#include <climits>
#define max 9
using namespace std;

int minDistance(int distance[], bool visited[], int n)
{
    int min = INT_MAX, min_index;
    for (int v = 0; v < n; v++)
        if (visited[v] == false && distance[v] <= min)
            min = distance[v], min_index = v;
    return min_index;
}
void dijkstra(int a[][max], int n, int s, int t)
{
    int distance[n];
    bool visited[n];

    for(int i=0;i<n;i++)
    {
        distance[i]=INT_MAX;
        visited[i]=false;
    }

    distance[s]=0;
    for(int count=0; count<n-1; count++)
    {
        int u = minDistance(distance, visited, n);
        visited[u] = true;

    for(int v=0; v<n; v++)
        if (!visited[v] && a[u][v] && distance[u] != INT_MAX && distance[u]+a[u][v] < distance[v])
            distance[v] = distance[u] + a[u][v];
    }

    cout<<"The shortest distance from "<<s+1<<" to "<<t+1<<" is: "<<distance[t]<<endl;
}
int main()
{
    int A[max][max] ={ { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } 
                    };
    int s,t;

    cout<<"\nEnter source node and destination node: ";
    cin>>s>>t;
    
    dijkstra(A, 9, s-1, t-1);
    return 0;
}
