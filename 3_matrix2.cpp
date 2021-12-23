#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout<<"enter the order of matrix " << endl;
    cout<<"enter number of elements in a rows: "<<endl;
    cin>>r;
    cout<<"enter number of elements in a columns: "<<endl;
    cin>>c;
    int m[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"enter"<<"("<<i+1<<","<<j+1<<") element: ";
            cin>>m[i][j];
        }
    }
    int m1[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<m[i][j]<<endl;

            if(m[i][j]==0)
            {
                cout<<i<<j<<endl;

                for(int k=0;k<=i;k++)
                {
                    m1[i][k]=0;
                    cout<<i<<k<<endl;
                }

                for(int k=0;k<=j;k++)
                {
                    m1[k][j]=0;
                    cout<<k<<j<<endl;
                }
                cout<<m1[i][j]<<endl;
            }
            if(m1[i][j]!=0)
            {
                m1[i][j]=m[i][j];
            }

        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout << " " << m1[i][j];
            if(j == c-1)
            {
                cout << endl;
            }
        }
    }
}


