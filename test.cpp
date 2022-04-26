#include <iostream>
#include <algorithm>
 
using namespace std;
void printTab(int *tab, int n);
 
void selectionSort(int *tab, int n) {
	int minElementPosition;
 
	for (int x = 0; x < n - 1; x++) {
		minElementPosition = x;
		for (int y = x + 1; y < n; y++) {
			//Sprawdzamy czy aktualnie wskazywanny element nie jest mniejszy, 
			//od tego na pozycji minElementPosition 
			if (tab[y] < tab[minElementPosition]) {
				minElementPosition = y;
			}
		}
 
		//Zamieniamy umiejscowienie elementu z pozycji minElementPosition, 
		//tylko gdy jest na innej pozycji, niż oczekiwana
		if (x != minElementPosition) {
			cout << "\nKrok " << x << ": Wstawianie elementu minimalnego: " << tab[minElementPosition] << " na pozycje: " << x << endl;
			swap(tab[minElementPosition], tab[x]);
			printTab(tab, n);
		}
	}
}
 
 
int main() {
	int n;
 
	cout << "Wprowadz liczbe elementow tablicy: ";
	cin >> n;
 
	//Dynamiczne tworzenie tablicy
	int *tab = new int[n];
 
	cout << "\nWprowadz " << n << " liczb do posortowania.";
    cout << "Zatwierdz kazda z nich klawiszem Enter:" << endl;
 
	for (int x = 0; x < n; x++) {
		cin >> tab[x];
	}
 
	cout << endl << "Tablica przed posortowaniem:" << endl;
	printTab(tab, n);
 
	cout << endl << "Rozpoczecie sortowania" << endl;
	selectionSort(tab, n);
 
	cout << endl << "Oto tablica po sortowaniu:" << endl;
 
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
 
	delete[] tab;
	system("pause");
	return 0;
}
 
void printTab(int *tab, int n) {
	cout << endl;
	for (int x = 0; x < n; x++) {
		cout << tab[x] << " | ";
	}
	cout << endl;
}
