#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	fstream plik;
	plik.open("gen.txt", ios::out); //plik.open("gen.bin",ios::binary|ios::out);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		plik << rand() % 65535 << endl;
	}
	plik.close();
}