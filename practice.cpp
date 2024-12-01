#include <iostream>
#include<vector>
using namespace std;
void SelectionSort(int* a,size_t size)
{
    int m,flag;
    for (int i=0;i<size-1;i++)
    {
        m=a[i];
        flag=i;
        for (int j=i+1;j<size;j++)
        {
            if (a[j] < m)
            {
                m=a[j];
                flag=j;
            }
        }
        swap(a[i],a[flag]);
    }
}
int maxToy(int* a,int m,int n)
{

    vector<vector<int>> dp (n+1,vector<int>(m+1,0));
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            if (a[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]= max(dp[i-1][j],dp[i-1][j-a[i-1]]+a[i-1]);
        }
    }
    return dp[n][m];
}
int main()
{
    int m;
    cin>>m;
    int n;
    cin>>n;
    int toy[n];
    for (int i=0;i<n;i++)
    {
        cin>>toy[i];
    }
    SelectionSort(toy,n);
    cout<<maxToy(toy,m,n);
    return 0;
}