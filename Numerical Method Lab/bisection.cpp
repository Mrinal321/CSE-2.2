#include<bits/stdc++.h>
using namespace std;
 
#define EP 0.01

float solution(float x) {
   return x*x*x - x*x + 2;
}

void bisection(float a, float b) {
   if (solution(a) * solution(b) >= 0) {
      cout << "You have not assumed right a and b\n";
      return;
   }
   float c = a;
   while ((b-a) >= EP) {
      //middle point
      c = (a+b)/2;
      //Check if middle point is root
      if (solution(c) == 0.0)
         break;
       // repeat the steps while c > EP
      else if (solution(c)*solution(a) < 0)
         b = c;
      else
         a = c;
      cout << "A= " << a << "; B= " << b << endl;
   }
cout << "The value of root is : " << c;
}

int main() {
   float a =-500, b = 100;
   bisection(a, b);
   return 0;
}