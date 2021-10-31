#include<string.h>
#include "Sinhvien.h"
#include<iostream>
using namespace std;
void List::xoatheoID(List l){
	int id;
	cout <<"Nhap ID sinh vien can xoa:";
	cin >>id;
	Node *pDel = l.head;
	 if(pDel == NULL){
		 cout <<"Danh sach rong!";
	 }else{
		 Node *pPre = NULL;
		 while (pDel != NULL){
			 if(pDel->data.getid() == id){
				 break;
			 }
			 pPre =pDel;
			 pDel =pDel->Next;
		 }
		 if(pDel == NULL){
			 cout <<"Khong tim thay du lieu !";
		 }else{
			 if(pDel == l.head){
				 l.head= l.head->Next;
				 pDel->Next= NULL;
				 delete pDel;
				 pDel = NULL;
			 }
			 else{
				 pPre->Next=pDel->Next;
				 pDel->Next=NULL;
				 delete pDel;
				 pDel =NULL;
			 }
		 }
	 }
	 cout <<"Danh sach sau khi xoa"<<endl;
	 Show(l);

    
	
	
}
void List::xoatheoten(List l){
	string ten;
    fflush(stdin);
    cout<<"Nhap ten sinh vien can xoa:";
    getline(cin,ten);
     Node *pDel = l.head;
	 if(pDel == NULL){
		 cout <<"Danh sach rong!";
	 }else{
		 Node *pPre = NULL;
		 while (pDel != NULL){
			 if(pDel->data.getten() == ten){
				 break;
			 }
			 pPre =pDel;
			 pDel =pDel->Next;
		 }
		 if(pDel == NULL){
			 cout <<"Khong tim thay du lieu !";
		 }else{
			 if(pDel == l.head){
				 l.head= l.head->Next;
				 pDel->Next= NULL;
				 delete pDel;
				 pDel = NULL;
			 }
			 else{
				 pPre->Next=pDel->Next;
				 pDel->Next=NULL;
				 delete pDel;
				 pDel =NULL;
			 }
		 }
	 }
	 cout <<"Danh sach sau khi xoa"<<endl;
	 Show(l);

    
}