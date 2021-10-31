#include<string.h>
#include "Sinhvien.h"
#include<iostream>
using namespace std;
void List:: menu(){
	List l;
	Sinhvien sv;
	int n;
	
	KhoitaoList(l);
	input(l);
	Show(l);
	timkiemten(l);
	timkiemid(l);
	update(l);
	xoatheoten(l);
	xoatheoID(l);
	
	return ;
}


int main(){
	int n;
	Sinhvien a[100];
	List l;
	l.menu();
	system("pause");
	return 0;
}
