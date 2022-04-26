#include <iostream>
#include <algorithm>
 
using namespace std;
 
void sortuj(int *tab, int n)
{
	for(int i=0 ; i<n-1; i++)
	{
		for(int j=0; j<n-1; j++)
			if(tab[j]>tab[j+1])
			{
			swap(tab[j], tab[j+1]);
			} 
	}
}
 
int main()
{
	int x;
	cout << "Podaj ile elementow chcesz posortowac: ";
	cin >> x;
	
	int *elementy=new int[x]; //program wykorzystuje tablice dynamiczne
	
	cout << "Podaj elementy:" << endl;
	
	for(int i=0; i<x; i++)
	cin >> elementy[i];	
	
	cout << "Oto te elementy: " << endl;
	
	
	for(int i=0; i<x; i++)
	cout << elementy[i] << " ";
	
	
	sortuj(elementy, x);
	
	cout << "\nOto elementy po sortowaniu: " << endl;
	
	for(int i=0; i<x; i++)
	cout << elementy[i] << " ";
		
	return 0;
}
