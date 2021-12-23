#include <iostream>

using namespace std;
int factors(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum += i;
        }
    }
    cout<<"Sum of factors of "<<n<<" is "<<sum<<endl;
    return sum;
}
int main()
{
    int n1,n2;
    cout << "Enter the first number" << endl;
    cin>>n1;
    cout << "Enter the second number" << endl;
    cin>>n2;
    int sum1=factors(n1);
    int sum2=factors(n2);
    if(sum1==n2&&sum2==n1)
    {
        cout<<"Are amicable numbers "<<endl;
    }
    else
    {
        cout<<"Not amicable numbers "<<endl;
    }
    return 0;
}
