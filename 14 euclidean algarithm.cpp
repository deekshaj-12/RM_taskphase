#include <iostream>
#include<cmath>

using namespace std;
int hcf(int n1,int n2)
{
    int diff=n2;
    while(diff>=n1)
    {
        diff=diff-n1;
    }
    if(diff==0)
    {
        return n1;
    }
    return hcf(diff,n1);
}
int main()
{
    int n1,n2,n;
    cout << "Enter first number" << endl;
    cin>>n1;
    cout << "Enter second number" << endl;
    cin>>n2;
    if(n2>n1)
    {
        n=hcf(n1,n2);
    }
    if (n1>n2)
    {
        n=hcf(n2,n1);
    }
    if(n1==n2)
    {
        n=n1;
    }
    cout<<"Highest Common factor of "<<n1<<" and "<<n2<<" is "<<n<<endl;
    return 0;
}
