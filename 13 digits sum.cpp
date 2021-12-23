#include <iostream>

using namespace std;
int Sum(int n)
{
    int s=0;
    if(n<=0)
    {
        return 0;
    }
    return (n%10)+Sum(n/10);
}

int main()
{
    int n,n1,sum=0;
    cout << "Enter a number" << endl;
    cin>>n;
    n1=n;
    while(n1>0)
    {
        int dig=n1%10;
        sum +=dig;
        n1=n1/10;
    }
    cout<<"Sum of the digits without recursion: "<<sum<<endl;
    int sum1=Sum(n);
    cout<<"Sum of the digits with recursion: "<<sum1<<endl;
    return 0;
}
