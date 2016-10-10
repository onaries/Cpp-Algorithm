// 문제 : 2차원 배열이 주어졌을 때 (i, j) 위치부터 (x, y) 위치까지에 저장되어 있는 수들의 합을 구하는 프로그램을 작성하시오. 배열의 (i, j) 위치는 i행 j열을 나타낸다.
// 입력 : 첫째 줄에 배열의 크기 N, M(1≤N, M≤300)이 주어진다. 다음 N개의 줄에는 M개의 정수로 배열이 주어진다. 그 다음 줄에는 합을 구할 부분의 개수 K(1≤K≤10,000)가 주어진다. 다음 K개의 줄에는 네 개의 정수로 i, j, x, y가 주어진다(i≤x, j≤y).
// 출력 : K개의 줄에 순서대로 배열의 합을 출력한다. 배열의 합은 32bit-int 범위를 초과하지 않는다.
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int row, column;
	cin >> row >> column;

	vector<vector<int>> data(row, vector<int>(column, 0));

	// 좌표 입력
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cin >> data[i][j];
		}
	}

	int K = 0;
	cin >> K;
	// 계산 좌표 입력
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