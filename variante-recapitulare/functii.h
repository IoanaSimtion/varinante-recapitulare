using namespace std;
#include <iostream>
#include <fstream>
#pragma once

int numarare(int n, int m, int a[], int b[]) {
	int ct = 0;
	bool flag = 1;
	for (int i = 0; i < n; i++) {
		flag = 1;
		for (int j = 0; j < m  && flag; j++) {
			if (a[i] >= b[j]) {
				flag = 0;
			}
		}
		if (flag) {
			ct++;
		}
	}
	return ct;
}

//todo functie ce citeste un vector 

void citire(int v[], int& d) {
	d = 0;
	ifstream f ("citire.txt");
	while (!f.eof()) {
		f >> v[d];
		d++;
	}
}

//todo functie ce afiseaza un vector

void afisare(int v[], int d)