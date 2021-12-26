#include <iostream>
using namespace std;
bubblesort(int num[],int n,int i)
{
    for(int j=0;j<n-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }
        }
    if(i==n)
    {
        return 1;
    }
    return bubblesort(num,n,i+1);
}
int selectionsort(int num[],int n,int i)
{
    int mini,pos,t;
    mini=num[i];
    pos=i;
    for(int j=i+1;j<n;j++)
    {
        if(num[j]<mini)
        {
            mini=num[j];
            pos=j;
        }
    }
    t=num[i];
    num[i]=mini;
    num[pos]=t;
    if(i==n)
    {
        return 1;
    }
    return selectionsort(num,n,i+1);
}

int main()
{
    int n,n1;
    cout<<"Enter the number of elements of the array"<<endl;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element "<<endl;
        cin>>num[i];
    }
    cout<<"Enter b for bubble sort and s for selection sort: "<<endl;
    char c;
    cin>>c;
    switch(c)
    {
        case 'b':bubblesort(num,n,0);
                break;
        case 's':selectionsort(num,n,0);
                break;
        default:cout<<"Invalid input"<<endl;
    }
   for(int k=0;k<n;k++)
    {
        cout<<num[k]<<" ";
    }


    return 0;
}
