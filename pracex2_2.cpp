#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	ifstream source1("score1.txt");
	string text;
	float x,sum=0,i=0;
	float num[20]={};
	for(int i=0;i<20;i++){
		while(getline(source1,text)){
		x=atof(text.c_str());
		cout<<x<<endl;
	}

	}
	while(getline(source1,text)){
		num[20]=atof(text.c_str());
		sort(num,20);
		cout<<num<<endl;
	}
	//Write your code here
	
	return 0;
}

