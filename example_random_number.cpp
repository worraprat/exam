#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	
	srand(time(0));	
	for(int i=0;i<6;i++){
		cout<<rand()%26+1<<" ";
	}
	
	//cout << rand()%5+1; //possible values are 1,2,3,4,5
}
