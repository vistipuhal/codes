#include<iostream>
#include<cstring>
using namespace std;

int max(int a, int b)
{
    return a>b?a:b;
}
int LCS(string X, string Y)
{
    int M=X.length(), N=Y.length();
    int L[M+1][N+1];
    for(int i=0;i<=M;i++)
        for(int j=0;j<=N;j++)
        {
          if(i==0 || j==0)
             L[i][j]=0;
          else if(X[i-1]==Y[j-1])
            L[i][j]=L[i-1][j-1]+1;
          else
            L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
return L[M][N];
}


int main()
{
  string A,B;
  cin>>A>>B;
  cout<<LCS(A,B);
return 0;
}
