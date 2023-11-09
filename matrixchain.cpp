#include <bits/stdc++.h>
using namespace std;
void printMatrixChainOrder(int p[], int n)
{
    int dp[n][n];

    for (int i = 0; i < n; i++)
    {
        dp[i][i] = 0;
    }

    for (int chainLen = 2; chainLen < n; chainLen++)
    {
        for (int i = 1; i < n - chainLen + 1; i++)
        {
            int j = i + chainLen - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++)
            {
                int cost = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] *

                           p[j];

                if (cost < dp[i][j])
                {
                    dp[i][j] = cost;
                }
            }
        }
    }
    cout<< "M Table:\n";
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (j >= i)
            {
                cout << dp[i][j] << "\t";
            }
            else
            {
                cout << "-\t";
            }
        }
        cout << "\n";
    }
    cout << "\nMinimum number of multiplications: " << dp[1][n - 1]
         <<endl;
}
int main()
{

    int matrixDimensions[]= {4,10,3,12,20,7};
    int n=sizeof(matrixDimensions)/sizeof(matrixDimensions[0]);
    printMatrixChainOrder(matrixDimensions, n);
    return 0;
}
