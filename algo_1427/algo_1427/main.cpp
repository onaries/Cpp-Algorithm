/*
문제
배열을 정렬하는 것은 쉽다. 숫자가 주어지면, 그 숫자의 각 자리수를 내림차순으로 정렬해보자.

입력
첫째 줄에 정렬하고자하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같다.

출력
둘째 줄에 숫자의 자리수를 내림차순으로 정렬한 수를 출력한다.
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