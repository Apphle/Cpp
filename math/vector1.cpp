#include <iostream>
#include <vector>
using namespace std;

void pluse(vector<vector<int>>& C, vector<vector<int>>& D, vector<vector<int>>& sum)
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            sum[i][j] = C[i][j] + D[i][j];
        }
    }
    for(int k = 0; k < 2; k++)
    {
        for(int z = 0; z < 2; z++)
        {
            printf("C + D = %3d\n", sum[k][z]);
        }
    }
}

void minuse(vector<vector<int>>& C, vector<vector<int>>& D, vector<vector<int>>& sum)
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            sum[i][j] = C[i][j] - D[i][j];
        }
    }
    for(int k = 0; k < 2; k++)
    {
        for(int z = 0; z < 2; z++)
        {
            printf("C - D = %3d\n", sum[k][z]);
        }
    }
}

void multiply(vector<vector<int>>& A, vector<vector<int>>& B, vector<vector<int>>& sum)
{
    int m = A.size();    // A의 행 수
    int n = A[0].size(); // A의 열 수 (B의 행 수)
    int p = B[0].size(); // B의 열 수

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < p; j++) 
        {
            for (int k = 0; k < n; k++) 
            {
                sum[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(int l = 0; l < 2; l++)
    {
        for(int z = 0; z < 2; z++)
        {
            printf("C - D = %3d\n", sum[l][z]);
        }
    }
}

void transposition(vector<vector<int>>& E, vector<vector<int>>& trans)
{
    int m = E.size();    // A의 행 수
    int n = E[0].size(); // A의 열 수 (B의 행 수)

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            trans[j][i] = E[i][j];
        }
    }
    for(int l = 0; l < m; l++)
    {
        for(int z = 0; z < n; z++)
        {
            printf("trans = %3d\n", trans[l][z]);
        }
    }
}

int main() 
{
    // 행렬 A 정의
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 행렬 B 정의
    vector<vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    vector<vector<int>> C = {
        {7, 8},
        {9, 10}
    };

    vector<vector<int>> D = {
        {7, 5},
        {3, 1},
    };

    vector<vector<int>> E = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<vector<int>> sum = {
        {0, 0},
        {0, 0},
    };

    vector<vector<int>> trans = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    int m = A.size();
    int n = A[0].size();
    pluse(C, D, sum);
    minuse(C, D, sum);
    multiply(A, B, sum);
    transposition(E, trans);
    printf("Row number of A : %3d\n", m);
    printf("Colummmmnnumber of A : %3d\n", n);
}   