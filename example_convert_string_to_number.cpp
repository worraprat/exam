#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
	int x;
	string cppstr = "123.45";
	x=atoi(cppstr.c_str());
		cout<<x<<endl;
	cout << atoi(cppstr.c_str()) << "\n";
	cout << atof(cppstr.c_str()) << "\n";

	return 0;
}

