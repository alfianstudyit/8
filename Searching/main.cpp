#include <iostream>
using namespace std;

int main() {
	int data[10] = { 34, 7, 23, 32, 5, 62, 32, 7, 78, 12 };
	int target;
	bool ditemukan = false;
	cout << "Data dalam array: ";
	for (int i = 0; i < 10; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
	cout << "nilai dicari: ";
	cin >> target;
	for (int i = 0; i < 10; i++)
	{
		if (data[i] == target)
		{
			ditemukan = true;
			cout << "Nilai " << target << " ditemukan pada indeks ke-" << i << endl;
			break;
		}
	}
	if (!ditemukan)
	{
		cout << "Nilai " << target << " tidak ditemukan dalam array." << endl;
	}

	system("pause");
	
	return 0;

}