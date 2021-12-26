#include <iostream>

using namespace std;
int search(int num[],int n,int low,int high)
{
    int mid=(low+high)/2;
    if(low>high)
    {
        return 0;
    }
    if(n==num[mid])
    {
        return mid+1;
    }
    if(n<num[mid])
    {
        search(num,n,low,mid-1);
    }
    if(n>num[mid])
    {
        search(num,n,mid+1,high);
    }
}
int main()
{
    int n;
    cout << "Enter the number to be searched" << endl;
    cin>>n;
    int num[]={1,2,3,4,5,6,7,8,};
    int m=search(num,n,0,7);
    if(m!=0)
    {
        cout<<"the number is present in "<<m<<" position"<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }
    return 0;
}
