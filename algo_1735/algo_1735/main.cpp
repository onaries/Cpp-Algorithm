/*
����
�м� A/B�� ���ڰ� A, �и� B�� �м��� �ǹ��Ѵ�. A�� B�� ��� �ڿ������ ����.

�� �м��� �� ���� �м��� ǥ���� �� �ִ�. �� �м��� �־����� ��, �� ���� ���м��� ���·� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���м��� �� �̻� ��е��� �ʴ� �м��� �ǹ��Ѵ�.
�Է�
ù° �ٰ� ��° �ٿ�, �� �м��� ���ڿ� �и� ���ϴ� �� ���� �ڿ����� ������� �־�����. �ԷµǴ� �� �ڿ����� ��� 30,000 �����̴�.

���
ù° �ٿ� ���ϰ��� �ϴ� ���м��� ���ڿ� �и� ���ϴ� �� ���� �ڿ����� �� ĭ�� ���̿� �ΰ� ������� ����Ѵ�.
*/

#include <iostream>
using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int denominator, molecule;
	molecule = a * d + b * c;
	denominator = b * d;

	// ����� �ȴٸ� �ִ����� ã��
	int x = molecule, y = denominator, z = 0;
	while (true){
		z = x % y;
		if (z == 0)
			break;
		x = y;
		y = z;
	}
	int gcd = y;
	molecule /= gcd;
	denominator /= gcd;
	cout << molecule << " " << denominator << endl;
}