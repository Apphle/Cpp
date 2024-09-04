#include <iostream>
#include <vector>
using namespace std;

void determinant(vector<vector<int>>& A)
{
    int m = A.size();    // A의 행 수
    int n = A[0].size(); // A의 열 수 (B의 열 수)

    if(m != 3 || n != 3)
    {
        printf("3x3 행렬이 아닙니다\n");
        return;
    }
    else
    {
        int det = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);

        printf("3x3 행렬 determinant: %d\n", det);
    }
    
}

int main() 
{
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    //////확인용//////
    vector<vector<int>> B = {
        {1, 2, 3},
        {4, 5, 6}
    };

    determinant(A);
}   