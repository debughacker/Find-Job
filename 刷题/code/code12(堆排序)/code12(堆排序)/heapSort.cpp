#include <iostream>
#include <cstdlib>
using namespace std;
#include <vector>
//nlogn²»ÎÈ¶¨

void maxHeapDown(vector<int> &array, int start, int end) {
	int current = start;
	int l = 2 * current + 1;
	int tmp = array[current];
	for (; l <= end; current = l, l = l * 2 + 1) {
		if (l < end&&array[l] < array[l + 1])
			l += 1;
		if (tmp > array[l])
			break;
		else {
			array[current] = array[l];
			array[l] = tmp;
		}
	}
}

void heapSort(vector<int> &array) {
	int n = array.size();
	int i, tmp;
	for (i = n / 2 - 1; i >= 0; i--) {
		maxHeapDown(array, i, n - 1);
	}
	for (i = n - 1; i > 0; i--) {
		tmp = array[0];
		array[0] = array[i];
		array[i] = tmp;
		maxHeapDown(array, 0, i - 1);
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
		heapSort(array);
		for (vector<int>::iterator iter = array.begin(); iter != array.end(); iter++) {
			cout << *iter << " ";
			if (iter == array.end() - 1)
				cout << "\n" << endl;
		}
	}
	system("pause");
}