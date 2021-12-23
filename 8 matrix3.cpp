#include <iostream>

using namespace std;
int main()
{
    int r1,c1;
    cout << "Enter number of elements in the first matrix" << endl;
    cout<<"enter number of rows: "<<endl;
    cin>>r1;
    cout<<"enter number of columns: "<<endl;
    cin>>c1;
    int m1[r1][c1];
    cout << "Enter number of elements in the second matrix" << endl;
    int r2,c2;
    cout<<"enter number of rows: "<<endl;
    cin>>r2;
    cout<<"enter number of columns: "<<endl;
    cin>>c2;
    int m2[r2][c2];
    while (c1!=r2&&r1!=c2)
    {
        cout << "Error! column of first matrix not equal to row of second."<<endl;
        cout << "Enter number of elements in the first matrix" << endl;
        cout<<"enter number of rows: "<<endl;
        cin>>r1;
        cout<<"enter number of columns: "<<endl;
        cin>>c1;
        m1[r1][c1];
        cout << "Enter number of elements in the second matrix" << endl;
        cout<<"enter number of rows: "<<endl;
        cin>>r2;
        cout<<"enter number of columns: "<<endl;
        cin>>c2;
        m2[r2][c2];
    }
    for(int j=0;j<r1;j++)
    {
        for(int k=0;k<c1;k++)
        {
            cout<<"enter"<<"("<<j+1<<","<<k+1<<") element: ";
            cin>>m1[j][k];
        }
    }
    for(int j=0;j<r2;j++)
    {
        for(int k=0;k<c2;k++)
        {
            cout<<"enter"<<"("<<j+1<<","<<k+1<<") element: ";
            cin>>m2[j][k];
        }
    }

        int p[r1][c2];
    for(int i=0;i<r1;i++)
    {
            for(int j=0;j<c2;j++)
            {
                p[i][j]=0;
            }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                p[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

        cout<<"Product of the two matrices is "<<endl;
        for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout << " " << p[i][j];
            if(j == c2-1)
            {
                cout << endl;
            }
        }
    }
    int t1[c1][r1];
        cout<<"Transpose of first matrix is "<<endl;
        for(int i=0;i<c1;i++)
    {
        for(int j=0;j<r1;j++)
        {
            t1[i][j]=m1[j][i];
        }
    }
        for(int i=0;i<c1;i++)
    {
        for(int j=0;j<r1;j++)
        {
            cout << " " << t1[i][j];
            if(j == r1-1)
            {
                cout << endl;
            }
        }
    }
        cout<<"Transpose of second matrix is "<<endl;
        int t2[c2][r2];
        for(int i=0;i<c2;i++)
    {
        for(int j=0;j<r2;j++)
        {
            t2[i][j]=m2[j][i];
        }
    }
        for(int i=0;i<c2;i++)
    {
        for(int j=0;j<r2;j++)
        {
            cout << " " << t2[i][j];
            if(j == r2-1)
            {
                cout << endl;
            }
        }
    }
    int p1[c1][r2];
    for(int i=0;i<c1;i++)
    {
            for(int j=0;j<r2;j++)
            {
                p1[i][j]=0;
            }
    }
    for(int i=0;i<c1;i++)
    {
        for(int j=0;j<r2;j++)
        {
            for(int k=0;k<r1;k++)
            {
                p1[i][j] += t1[i][k] * t2[k][j];
            }
        }
    }
    cout<<"Product of the transpose of two matrices is "<<endl;
        for(int i=0;i<c1;i++)
    {
        for(int j=0;j<r2;j++)
        {
            cout << " " << p1[i][j];
            if(j == r2-1)
            {
                cout << endl;
            }
        }
    }

    cout<<"Transpose of the product of the two matrices is "<<endl;
    int p2[c2][r2];
        for(int i=0;i<c2;i++)
    {
        for(int j=0;j<r1;j++)
        {
            p2[i][j]=p[j][i];
        }
    }
        for(int i=0;i<c2;i++)
    {
        for(int j=0;j<r1;j++)
        {
            cout << " " << p2[i][j];
            if(j == r1-1)
            {
                cout << endl;
            }
        }
    }
    bool b=true;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            if(p1[i][j]!=p2[i][j])
            {
                b=false;
            }
        }
    }
    if(b)
    {
        cout<<"Therefore the identity (A.B)’ = B’. A’ is verified "<<endl;
    }

    return 0;
}
