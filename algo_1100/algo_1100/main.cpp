/*
����
ü������ 8*8ũ���̰�, ���� ĭ�� �Ͼ� ĭ�� �����ư��鼭 ��ĥ�Ǿ� �ִ�. ���� ���� ��ĭ (0,0)�� �Ͼ���̴�. ü������ ���°� �־����� ��, �Ͼ� ĭ ���� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٺ��� 8���� �ٿ� ü������ ���°� �־�����. ��.���� �� ĭ�̰�, ��F���� ���� ���� �ִ� ĭ�̴�.

���
ù° �ٿ� ������ ������ ����Ѵ�.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	int count = 0;
	string *line = new string[8];
	for (int i = 0; i < 8; i++)
		cin >> line[i];
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			if (i % 2 == 0 && j % 2 == 0 && line[i][j] == 'F')
				count++;
			else if (i % 2 == 1 && j % 2 == 1 && line[i][j] == 'F')
				count++;
		}
	}
	cout << count << endl;
}