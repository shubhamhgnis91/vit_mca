#include<iostream>
#define max 10
using namespace std;

void print_arr(int a[],int n)
{
    cout<<"\n\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
}

void accept_arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter elelemt "<<i+1<<": ";
        cin>>a[i];
    }
}

void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0&&temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int lin_search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
        if(a[i]==x)
            return i;
    return -1;
}

int bin_search(int a[],int n,int x)
{
    int l=0,h=n;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(a[m]==x)
            return m;
        if(x<a[m])
            h=m-1;
        else
            l=m+1;
    }
    return -1;
}

int main()
{

    int a[20],ch,n,x,res;
    cout<<"\n\n22MCA0379\nShubham Singh\n\nHow many elements: ";
    cin>>n;
    accept_arr(a,n);
    do
    {
        cout<<"\n\n22MCA0379\nShubham Singh\n\n1. Insertion sort\n2. Linear Search\n3. Binary Search\n4. Exit\n\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"\nArray before insertion sort:\n";
                    print_arr(a,n);
                    insertion_sort(a,n);
                    cout<<"\nArray after insertion sort:\n";
                    print_arr(a,n);
                    break;

            case 2: cout<<"\nEnter element to search for: ";
                    cin>>x;
                    res=lin_search(a,n,x);
                    if(res!=-1)
                        cout<<"\nElement found in the array at "<<res+1<<" position.";
                    else
                        cout<<"\nElement not present in the array.";
                    break;

            case 3: cout<<"\nEnter element to search for: ";
                    cin>>x;
                    res=bin_search(a,n,x);
                    if(res!=-1)
                        cout<<"\nElement found in the array at "<<res+1<<" position.";
                    else
                        cout<<"\nElement not present in the array.";
                    break;

            case 4: cout<<"\nExiting...";
                    break;

            default:cout<<"\nWrong choice!\nEnter again.";

        }
    }while(ch!=4);

    return 0;
}
