#include <iostream>
using namespace std;


int main()
{
	int matr[3][3], n = 3;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) matr[i][j] = rand() % 20 - 10;

	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << matr[i][j] << " ";
		cout << endl;
			}*//

	int det = matr[0][0] * matr[1][1] * matr[2][2] - matr[0][0] * matr[1][2] * matr[2][1]
		- matr[0][1] * matr[1][0] * matr[2][2] + matr[0][1] * matr[1][2] * matr[2][0]
		+ matr[0][2] * matr[1][0] * matr[2][1] - matr[0][2] * matr[1][1] * matr[2][0];

	cout << det << "";
	cout << endl;

			return 0;
}
