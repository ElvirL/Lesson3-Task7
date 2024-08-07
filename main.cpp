/*
������� 7. ����� ���������� (�������������� �������)
��� ��������� ������� ����� ������� �����������. ��������� �� ������, �� ��� ���������� ������ �� ���������������� ��������. 
� ��� ���� ��������� ���������� ��������, �������� 5 ? 5 ��������. � ������ ������� ������������� ���� (�������) ���������, 
������������ ������ �������� � 10 ������. ������� ������ ������� ������ ����� ������� ������������� � ������ ���������. 
�������� ������: ��������� ��������� ������, ������� � ����������� ����� �������������� ������� (��� �������������� ����) 
������ ���������� ����. ��� ��� ��� ��� ������ ���� ����������� � ���� ���������� �������. ��� �������������� ���� � ��� 
��������� ������, ������� ���� ���������� � ���� ������ � �����. 0 � ��� ���������� �������� �� ������ ������ � ������ �����, 
1 � ������� ����. ������� ����� �� 0 �� 9 ������������ ����� ������� � ����������� �����.

������ ����������

input matrix of heights:
5 5 5 5
4 4 4 4
3 2 2 3
1 1 1 1
input slice: 4
1 1 1 1
1 1 1 1
0 0 0 0
0 0 0 0
input slice: 3
1 1 1 1
1 1 1 1
1 0 0 1
0 0 0 0
*/

#include <iostream>

using namespace std;

int main(){
    int world[5][5][10];
    int input_matrix_heights[5][5];

    cout << "input matrix of heights:" << endl;
    for (int i=0; i<5; ++i){
        for (int j=0; j<5; ++j){
            cin >> input_matrix_heights[i][j];
        }
    }

    for (int i=0; i<5; ++i){
        for (int j=0; j<5; ++j){
            for (int level = 0; level < 10; ++level){
                if (input_matrix_heights[i][j] >= level){
                    world[i][j][level] = 1;
                }
                else {
                    world[i][j][level] = 0;
                }
            }
        }
    }

    int slice;
    cout << "input slice: ";
    cin >> slice;
    for (int i=0; i<5; ++i){
        for (int j=0; j<5; ++j){
            if (world[i][j][slice]){
                cout << 1 << " ";
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}