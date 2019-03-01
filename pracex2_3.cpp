#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
char alphabet[8][8];

void showAlphabet();
void randomAlphabet();

int main(){
	srand(time(0));	
	randomAlphabet();
	showAlphabet();
}

void showAlphabet(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}
void randomAlphabet(){
	srand(time(0));
	int a[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
	string b[26]={"abcdefghijklmnopqrstuvwxyz"}; 
	int x[26]={};
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
		     x[i]=rand()%26+1;
		     cout<<x[i]<<" ";
			 
			
		}
		cout<<"\n";
	}
     
	
	
	
}