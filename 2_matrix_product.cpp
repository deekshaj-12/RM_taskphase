#include <iostream>

using namespace std;
int main()
{
    int r1,r2,c1,c2;
    cout<<"enter the order of first matrix " << endl;
    cout<<"enter number of elements in a rows: "<<endl;
    cin>>r1;
    cout<<"enter number of elements in a columns: "<<endl;
    cin>>c1;
    cout<<"enter the order of second matrix"<<endl;
    cout<<"enter number of elements in a rows: "<<endl;
    cin>>r2;
    cout<<"enter number of elements in a columns: "<<endl;
    cin>>c2;
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second."<<endl;
        cout << "Enter number of rows for first matrix: "<<endl;
        cin >> r1;
        cout << "Enter number of columns for first matrix: "<<endl;
        cin>>c1;
        cout << "Enter number of rows for first matrix: "<<endl;
        cin >> r2;
        cout << "Enter number of columns for first matrix: "<<endl;
        cin>>c2;
    }
    int m1[r1][c1];
    int m2[r2][c2];
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
    return 0;
}
