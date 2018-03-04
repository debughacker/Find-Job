#include <iostream>
#include <cstdlib>
using namespace std;
#include <vector>
void insertionSort(vector<int> &array) {
	int tmp;
	for (int i = 1; i < array.size(); i++) {
		tmp = array[i];
		int j = i;
		for (; j > 0 && array[j - 1] > tmp; j--) {
			array[j] = array[j - 1];
		}
		array[j] = tmp;
	}
}

int main()
{
	int n;
	vector<int> array;
	while (cin >> n) {
		array.push_back(n);
	}
	insertionSort(array);
	for (vector<int>::iterator iter = array.begin(); iter != array.end(); iter++) {
		cout << *iter << " ";
	}
	system("pause");
}
