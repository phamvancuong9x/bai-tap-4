//Bai tap: cho x=6, viet to hop cau tao nen x.
#include<iostream>
using namespace std;
int main()
{
	int x = 6;
	int i1, j1, k1, n1, m1;
	int i2, j2, k2, n2, m2;
	for (int i = 0; i <= 6; i++) {
		for (int j = 0; j <= 3; j++) {
			for (int k = 0; k <= 2; k++) {
				for (int n = 0; n <= 1; n++) {
					for (int m = 0; m <= 1; m++) {
						if (i * 1 + j * 2 + k * 3 + n * 4 + m * 5 == x) {
							i2 = i1 = i; j2 = j1 = j; k2 = k1 = k; n2 = n1 = n; m2 = m1 = m;
							while (i1 != 0) {
								cout << 1;
								if (i1 > 1) { cout << " + "; }
								i1--;
							}if (j1 != 0 && i2 != 0) { cout << " + "; }
							while (j1 != 0) {
								cout << 2;
								if (j1 > 1) { cout << " + "; }
								j1--;
							}if (k1 != 0 && (j2 != 0 || i2 != 0)) { cout << " + "; }
							while (k1 != 0) {
								cout << 3;
								if (k1 > 1) { cout << " + "; }
								k1--;
							}if (n1 != 0 && (k2 != 0 || j2 != 0 || i2 != 0)) { cout << " + "; }
							while (n1 != 0) {
								cout << 4;
								if (n1 > 1) { cout << " + "; }
								n1--;
							}if (m1 != 0 && (n2 != 0 || k2 != 0 || j2 != 0 || i2 != 0)) { cout << " + "; }
							while (m1 != 0) {
								cout << 5;
								if (m1 > 1) { cout << " + "; }
								m1--;
							}
							cout << endl;
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}