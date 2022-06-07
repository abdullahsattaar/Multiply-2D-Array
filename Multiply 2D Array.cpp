#include <iostream>
using namespace std;
int mult(int arr1[][3], int arr2[][3], int i, int j)
{
	int mul = 0;
	for (int k = 0; k < 3; k++)
		mul = arr1[i][k] * arr2[k][j] + mul;

	return mul;
}
int main()
{
	int Leo[3][3] = {
			{ 1, 2, 3 },
			{ 4, 5, 6 },
			{ 7, 8, 9 } };

	int Aries[3][3] = {
			{ 1, 2, 3 },
			{ 4, 5, 6 },
			{ 7, 8, 9 } };

	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int x = mult(Leo, Aries, i, j);
			cout << x << "  ";
		
		}
		cout << endl;
	}
	system("pause");
	return 0;






}