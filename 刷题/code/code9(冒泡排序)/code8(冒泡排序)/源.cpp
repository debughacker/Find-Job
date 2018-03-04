#include <iostream>
#include <cstdlib>
using namespace std;
#include <vector>

void bubbleSort(vector<int> &array) {
	int tmp;
	bool flag;
	for (int i = array.size() - 1; i >= 0; i--) {
		flag = false;
		for (int j = 0; j < i; j++) {
			if (array[j] > array[j + 1]) {
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				flag = true;
			}
		}
			if (!flag)
				break;
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
		bubbleSort(array);
		for (vector<int>::iterator iter = array.begin(); iter != array.end(); iter++) {
			cout << *iter << " ";
			if (iter == array.end() - 1)
				cout <<"\n"<< endl;
		}
	}
	system("pause");
}