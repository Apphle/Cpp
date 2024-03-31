#include <iostream>
#include <cstdlib>

using namespace std;

char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
int currentPlayer = 1;

// ���� ���带 ����ϴ� �Լ�
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

// ����ڷκ��� �Է��� �޴� �Լ�
void getUserInput() {
    int choice;
    cout << "Player " << currentPlayer << ", enter a number: ";
    cin >> choice;

    // �Էµ� ���ڰ� 1���� 9 �����̰� ������ ��ġ�� ����ִ��� Ȯ��
    if (choice >= 1 && choice <= 9 && (board[(choice - 1) / 3][(choice - 1) % 3] == 'X' || board[(choice - 1) / 3][(choice - 1) % 3] == 'O')) {
        cout << "Invalid move! Try again." << endl;
        getUserInput(); // ��������� �ٽ� �Է� ����
    }
    else {
        // ������ ��ġ�� �ش� �÷��̾��� ��ȣ�� ǥ��
        char symbol = (currentPlayer == 1) ? 'X' : 'O';
        board[(choice - 1) / 3][(choice - 1) % 3] = symbol;
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }
}

// �¸� ���� Ȯ�� �Լ�
bool checkWin() {
    // ����, ����, �밢�� �˻�
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true; // ����
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true; // ����
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true; // ���� �밢��
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true; // ������ �밢��
    return false;
}

// ���º� Ȯ�� �Լ�
bool checkDraw() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false; // ���� ����ִ� ĭ�� ������ ���ºΰ� �ƴ�
            }
        }
    }
    return true; // ��� ĭ�� ä���� ������ ���º�
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
