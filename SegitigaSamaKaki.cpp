#include <iostream>

using namespace std;

int main()
{
	int a, b, c, nilai;
	cout << "Masukan Tinggi Nilai = ";
	cin >> nilai;
	c = 2 * nilai - 2;
	for (a = 1; a < nilai; a++)
	{
		for (b = 1; b < c; b++) {
			cout << " ";
		}
		c = c - 1;
		for (b = 1; b <= a; b++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
