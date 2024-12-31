#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    
    cout << "Standard Deviation = " << B[1] << endl;
    
    cout << "Geometric Mean = " << B[2] << endl;
    
    cout << "Harmonic Mean = " << B[3] << endl;
    
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    
    return 0;
}
void stat(const double a[],int n,double b[]){
    //หาค่าเฉลี่ย
    double sum = 0,avg = 0;
    for(int i=0;i<n;i++){
        sum = sum+a[i];
    }
    avg = sum/n;
    b[0] = avg;
    //หาส่วนเบี่ยงเบน
    double sd = 0,sum2 = 0;
    for(int i=0;i<n;i++){
        sum2 += pow(a[i]-avg,2);
    }
    sd = sqrt(sum2 / n);
    b[1] = sd;
    //หาค่าเฉลี่ยเรขาคณิต
    double gm = 0,multip = 1.0;
    for(int i=0;i<n;i++){
        multip *= a[i]; 
    }
    gm = pow(multip,1.0/n);
    b[2] = gm ;
    //หาค่าเฉลี่ยฮาร์มอนิก
    double harmonic = 0,monic = 0;
    for(int i=0;i<n;i++){
        monic += 1.0/a[i]; 
    }
   harmonic = n / monic ;
   b[3] = harmonic ;
   //หาค่าสูงสุดต่ำสุด
   double max = -99999;
   double min = 99999;
   for(int i = 0; i<n ; i++){
       if(max < a[i]) max = a[i];
       if(min > a[i]) min = a[i];
   }
   b[4] = max;
   b[5] = min;
    
  
}
