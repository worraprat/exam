#include <iostream>
#include <cmath>

using namespace std;
double av(double,double);
//Write prototype of av() here.

int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001)<< "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
}
double av(double x,double y){
    double max,min,a,b;
    if(x>y){
        max=x;
        min=y;
    }else{
        max=y;
        min=x;
    }
    
    if(x<=0 || y<=0){
        return 0;
    }else if(x/y<=100){
        return sqrt(x*y);
    }else{ 
    return av(x,(x+y)/2)+av(y,(x+y)/2);
    }
}
//Write function definition of av() here.
