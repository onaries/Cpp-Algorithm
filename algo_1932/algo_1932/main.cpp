/*
����
7
3   8
8   1   0
2   7   4   4
4   5   2   6   5
�� �׸��� ũ�Ⱑ 5�� ���� �ﰢ���� �� ����̴�.

�� ���� 7���� �����ؼ� �Ʒ��� �ִ� �� �� �ϳ��� �����Ͽ� �Ʒ������� ������ ��, �������� ���õ� ���� ���� �ִ밡 �Ǵ� ��θ� ���ϴ� ���α׷��� �ۼ��϶�. �Ʒ����� �ִ� ���� ���� ������ ���õ� ���� �밢�� ���� �Ǵ� �밢�� �����ʿ� �ִ� �� �߿����� ������ �� �ִ�.

�ﰢ���� ũ��� 1 �̻� 500 �����̴�. �ﰢ���� �̷�� �ִ� �� ���ڴ� ��� �����̸�, ������ 0 �̻� 99 �����̴�.

�Է�
ù° �ٿ� �ﰢ���� ũ�� n(1��n��500)�� �־�����, ��° �ٺ��� n+1�ٱ��� ���� �ﰢ���� �־�����.

���
ù° �ٿ��� �ִ밡 �Ǵ� ���� ����Ѵ�.
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	// �ﰢ���� ũ�� n
	int n;
	cin >> n;

	// �ﰢ�� �� �б�
	vector<vector<int>> data(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> data[i][j];
			//cout << "*";
		}
	}
	int prev = data[0][0];
	int sum = data[0][0];
	int ii = 0, jj = 0;
	for (int i = 1; i < n; i++) {
		int max = *max_element(data[i].begin(), data[i].end());
		int pos = find(data[i].begin(), data[i].end(), max) - data[i].begin();
		cout << pos << endl;

		if (pos >= ii && pos <= ii+1) {
			
		}
		
	}
	

}