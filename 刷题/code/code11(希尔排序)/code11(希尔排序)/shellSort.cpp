#include <iostream>
#include <cstdlib>
using namespace std;
#include <vector>
//平均nlogn，最差n²
void shellSort(vector<int> &array) {
	int j;
	for (int gap = array.size() / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < array.size(); i += 1) {
			int tmp = array[i];
			for (j = i; j >= gap && tmp < array[j-gap]; j -= gap) {
				array[j] = array[j - gap];
			}
			array[j] = tmp;
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
		shellSort(array);
		for (vector<int>::iterator iter = array.begin(); iter != array.end(); iter++) {
			cout << *iter << " ";
			if (iter == array.end() - 1)
				cout << "\n" << endl;
		}
	}
	system("pause");
}