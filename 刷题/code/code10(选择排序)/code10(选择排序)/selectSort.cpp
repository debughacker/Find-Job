#include <iostream>
#include <cstdlib>
using namespace std;
#include <vector>

void selectSort(vector<int> &array) {
	for (int i = 0; i <= array.size() - 1; i++) {
		int min = array[i];
		int minIndex = i;
		for (int j = i; j < array.size(); j++) {
			if (array[j] < min) {
				min = array[j];
				minIndex = j;
			}
		}
		if (i != minIndex) {
			array[minIndex] = array[i];
			array[i] = min;
		}
	}
}

int main()
{
	int n;
	vector<int> array;
	while (1) {
		cin.clear();
		array.clear();
		while (cin >> n) {
			array.push_back(n);
		}
		selectSort(array);
		for (vector<int>::iterator iter = array.begin(); iter != array.end(); iter++) {
			cout << *iter << " ";
			if (iter == array.end() - 1)
				cout << "\n" << endl;
		}
	}
	system("pause");
}