#include <iostream>
#define max 10
using namespace std;

void accept(int a[][max],int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cout<<"\nEnter weight for "<<i+1<<" - "<<j+1<<": ";
            cin>>a[i][j];
        }
}

void display(int a[][max],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<"\t";
    }
}

int dijkstra(int a[][max],n,s,t)
{
    int distance[n];
    bool visited[n];

    for(int i=0;i<n;i++)
    {
        distance[i]=INT_MAX;
        visited[i]=false;
    }
    distance[s]=0;


}

int main()
{
    int A[max][max],n,s,t;
    cout<<"\nEnter how many nodes: ";
    cin>>n;
    accept(A,n);
    display(A,n);
    cout<<"\nEnter source node and destination node: ";
    cin>>s>>t;
    return 0;
}
