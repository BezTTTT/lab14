#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double input[],int c,double output[]){
    double ans0=0,ans1=0,ans2=1,ans3=0, smt=0;
    output[4]=input[0];
    output[5]=input[0];
    for(int i=0;i<c;i++){
        ans0+=input[i];
        if(input[i]>output[4]) output[4]=input[i];
        if(input[i]<output[5]) output[5]=input[i];
    }output[0] = ans0/c;
    for(int i=0;i<c;i++){
        ans1+=pow((input[i]-output[0]),2);
        ans2*=input[i];
        ans3+= 1/input[i];
    }
    smt = (1/double(c));
    output[1] =sqrt(ans1/c);
    output[2] =pow(ans2,smt);
    output[3] = c/ans3;
}