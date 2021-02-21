#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_string(string);

void printMatrix(const vector<vector<int>> &matrix)
{
	for (int i = 0; i < matrix.size(); ++i)
	{
		for (int j = 0; j < matrix[i].size(); ++j)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout<<endl;
	}
}

int secureValue(int i, int j, const vector<vector<int>> &A)
{
	if (i < 0 || i >= A.size()  || j < 0 || j >= A[i].size())
	{
		return 0;
	}
	return A[i][j];
}

int surfaceArea(const vector<vector<int>> &A) 
{
	int area = A.size() * A[0].size() *2; //top & bottom
	int jLimit = A[0].size();

	for (int i = -1; i < (int)A.size(); ++i)
	{
		for (int j = -1; j < (int)jLimit ; ++j)
		{
			int value1 = secureValue(i, j, A);
			area = area + abs(value1 - secureValue(i+1, j, A));
			area = area + abs(value1 - secureValue(i, j+1, A));
		}
	}

	return area;
}

int main()
{
	vector<vector<int>> matrix = { {1, 3, 4}, {2, 2, 3}, {1, 2, 4} };
	printMatrix(matrix);
	std::cout << surfaceArea(matrix) << "\n";
	return 1;
}