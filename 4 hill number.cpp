#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin>>n;
    int dig;
    int num[100];
    int ctr=0;
    bool isHill=false;
    while(n>0)
    {
        dig=n%10;
        num[ctr]=dig;
        ctr++;
        n=n/10;
    }
    int i,j;
    for(i=0;i<=ctr;i++)
    {
        if(num[i]==num[i+1])
        {
            isHill=false;
            break;
        }
        if(num[i]>num[i+1])
        {
            for(j=i;j<ctr;j++)
            {
                if(num[j]<num[j+1])
                {
                    isHill=false;
                    break;
                }
                else
                {
                    isHill=true;
                }
            }
        }
    }
    if(isHill)
    {
        cout<<"Is a hill number";
    }
    else{
        cout<<"Is not a hill number";
    }

    return 0;
}
