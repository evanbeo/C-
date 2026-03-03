#include <bits/stdc++.h>
using namespace std;

void nhap(float a[100][100],int m,int n)
{
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)cout << a[i][j]
        {
            cout<<"Nhap a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
}

void xuatmang(float a[100][100],int m ,int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
           {
               cout << a[i][j] << " ";
           }
           cout << endl;
    }
}

int am(float a[100][100],int m,int n)
{
    int khoi=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            if (a[i][j]<0)
                khoi++;
    return khoi;
}

int duong(float a[100][100],int m,int n)
{
    int khoi=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            if (a[i][j]>0)
                khoi++;
    return khoi;
}

int main()
{
    int m,n;
    float a[100][100];
    cout<<"Nhap so dong n: ";
    cin>>n;
    cout<<"Nhap so cot m: ";
    cin>>m;
    nhap(a,n,m);
    xuatmang(a,n,m);
    cout<<"So phan tu am = "<<am(a,n,m);
    cout<<"\nSo phan tu duong = "<<duong(a,n,m);
    return 0;
}

