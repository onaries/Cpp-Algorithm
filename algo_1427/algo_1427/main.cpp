/*
����
�迭�� �����ϴ� ���� ����. ���ڰ� �־�����, �� ������ �� �ڸ����� ������������ �����غ���.

�Է�
ù° �ٿ� �����ϰ����ϴ� �� N�� �־�����. N�� 1,000,000,000���� �۰ų� ����.

���
��° �ٿ� ������ �ڸ����� ������������ ������ ���� ����Ѵ�.
*/

#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	int array[10];
	int i = 0;
	while (N != 0) {
		int dist = N % 10;
		array[i] = dist;
		N /= 10;
		i++;
	}

	sort(array, array + i, greater<int>());
	for (int j = 0; j < i; j++) {
		cout << array[j];
	}
}