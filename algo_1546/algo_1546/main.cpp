/*
����
�����̴� �⸻��縦 ���ƴ�. �����̴� ������ �����ؼ� ���� ��������� �ߴ�. �ϴ� �����̴� �ڱ� ���� �߿� �ִ밪�� �����. �� ���� M�̶�� �Ѵ�. �׸��� ���� ��� ������ ����/M*100���� ���ƴ�.

���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50/70*100�� �Ǿ� 71.43���� �ȴ�.

�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� �� ������ ���� N�� �־�����. �� ���� 1000���� �۰ų� ����. ��° �ٿ� �������� ���� ������ �־�����. �� ���� 100���� �۰ų� ���� ���� �ƴ� �����̰�, ��� �ϳ��� ���� 0���� ũ��.

���
ù° �ٿ� ���ο� ����� �Ҽ��� ��° �ڸ����� �ݿø��� ��°�ڸ����� ����Ѵ�.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<double> score;
	for (int i = 0; i < N; i++){
		int s;
		cin >> s;
		score.push_back(s);
	}
	
	double max = *max_element(score.begin(), score.end());
	
	double average = 0;
	for (int i = 0; i < score.size(); i++){
		double score_temp;

		score_temp = score[i] / max * 100.0;
		if (score_temp > 100)
			score_temp = 100;
		else if (score_temp < 0)
			score_temp = 0;
		
		average += score_temp;
	}
	average /= N;
	printf("%.2f", average);
}
