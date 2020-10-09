#include <iostream>
#include <math.h>

using namespace std;

int euclideanAlogrthim(int a, int b);
int euclideanAlogrthimHelper(int a, int b, int x, int r);

int main() {

  int a = 1;
  int b = 1;

  while(a != 0){
    
    cout << "To exit enter 0 for a" << endl;
    cout << "Enter number a" << endl;
    cin >> a;

    if(a == 0){
      break;
    }

    cout << "Enter number b" << endl;
    cin >> b;

    cout << a << " " << b << endl;

    int result = euclideanAlogrthim(a, b);
    cout << "******************************************************" << endl;
    cout << "The GCD(" << a << "," << b << ") is " << result << endl;
    cout << "******************************************************" << endl;
  }
  cout << "Thank you for using my program - Christian Stoldal" << endl;
  return 0;
}


/*
  Start with a=b*x+r
  x1=a/b
  r1=a%b

  new equation is
  b=r1*x2+r2

*/

int euclideanAlogrthim(int a, int b){
  
  int x = int(a/b);
  int r = a%b;

  if(a==b){
    return a;
  }


//cout << "Parent func a: " << a << " b: " << b << " x: " << x << " r1: " << r << endl;
  return euclideanAlogrthimHelper(a,b,x,r);

}

int euclideanAlogrthimHelper(int a,int b,int x,int r1){

  //cout << "a: " << a << " b: " << b << " x: " << x << " r1: " << r1 << endl;
  cout << "\t" << a << " = " << b << " * " << x << " + " << r1 <<endl; 

  if(r1 == 0){
    return b;
  }

  if(b%r1 == 0){
    return r1;
  }
  
  x = int(b/r1);
  //cout << a << "/" << b << " = " << int(a/b) << " and x = " << x << endl;
  int r2 = b%r1;
  return euclideanAlogrthimHelper(b,r1,x,r2);
}
