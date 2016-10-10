// ���� : 2���� �迭�� �־����� �� (i, j) ��ġ���� (x, y) ��ġ������ ����Ǿ� �ִ� ������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. �迭�� (i, j) ��ġ�� i�� j���� ��Ÿ����.
// �Է� : ù° �ٿ� �迭�� ũ�� N, M(1��N, M��300)�� �־�����. ���� N���� �ٿ��� M���� ������ �迭�� �־�����. �� ���� �ٿ��� ���� ���� �κ��� ���� K(1��K��10,000)�� �־�����. ���� K���� �ٿ��� �� ���� ������ i, j, x, y�� �־�����(i��x, j��y).
// ��� : K���� �ٿ� ������� �迭�� ���� ����Ѵ�. �迭�� ���� 32bit-int ������ �ʰ����� �ʴ´�.
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int row, column;
	cin >> row >> column;

	vector<vector<int>> data(row, vector<int>(column, 0));

	// ��ǥ �Է�
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cin >> data[i][j];
		}
	}

	int K = 0;
	cin >> K;
	// ��� ��ǥ �Է�
	vector<int> a, b, c, d;
	for (int i = 0; i < K; i++) {
		int i_a, i_b, i_c, i_d;
		cin >> i_a >> i_b >> i_c >> i_d;
		a.push_back(i_a), b.push_back(i_b), c.push_back(i_c), d.push_back(i_d);
	}

	vector<int> sum;
	for (int i = 0; i < K; i++) {
		int ii, jj, xx, yy;
		ii = a[i] - 1, jj = b[i] - 1, xx = c[i], yy = d[i];
		int s = 0;
		for (int l = ii; l < xx; l++) {
			for (int k = jj; k < yy; k++) {
				s += data[l][k];
			}
		}
		sum.push_back(s);
	}

	for (int i = 0; i < K; i++) {
		cout << sum[i] << endl;
	}
}