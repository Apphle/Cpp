#include <iostream>
#include <cstdlib>

using namespace std;

char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
int currentPlayer = 1;

// 게임 보드를 출력하는 함수
void displayBoard() {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "| ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << "-------------" << endl;
    }
}

// 사용자로부터 입력을 받는 함수
void getUserInput() {
    int choice;
    cout << "Player " << currentPlayer << ", enter a number: ";
    cin >> choice;

    // 입력된 숫자가 1부터 9 사이이고 선택한 위치가 비어있는지 확인
    if (choice >= 1 && choice <= 9 && (board[(choice - 1) / 3][(choice - 1) % 3] == 'X' || board[(choice - 1) / 3][(choice - 1) % 3] == 'O')) {
        cout << "Invalid move! Try again." << endl;
        getUserInput(); // 재귀적으로 다시 입력 받음
    }
    else {
        // 선택한 위치에 해당 플레이어의 기호를 표시
        char symbol = (currentPlayer == 1) ? 'X' : 'O';
        board[(choice - 1) / 3][(choice - 1) % 3] = symbol;
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }
}

// 승리 조건 확인 함수
bool checkWin() {
    // 가로, 세로, 대각선 검사
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true; // 가로
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true; // 세로
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true; // 왼쪽 대각선
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true; // 오른쪽 대각선
    return false;
}

// 무승부 확인 함수
bool checkDraw() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false; // 아직 비어있는 칸이 있으면 무승부가 아님
            }
        }
    }
    return true; // 모든 칸이 채워져 있으면 무승부
}

int main() {
    displayBoard();
    while (!checkWin() && !checkDraw()) {
        getUserInput();
        displayBoard();
    }
    if (checkWin()) {
        cout << "Player " << ((currentPlayer == 1) ? 2 : 1) << " wins!" << endl;
    }
    else {
        cout << "It's a draw!" << endl;
    }
    return 0;
}
