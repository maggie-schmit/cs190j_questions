#include <iostream>
#include <cmath>

using namespace std;

int prime(int num);


int main(){
  cout << "2 test: " << prime(2) << endl;
  cout << "11 test: " << prime(11) << endl;
  cout << "12 test: " << prime(12) << endl;
  cout << "100 test: " << prime(100) << endl;
  cout << "91 test: " << prime(91) << endl;
}

int prime(int num){
  int retval = 0;
  for(int i=2; i < num; i++){
    if(num%i == 0){
      retval = 1;
    }else{
      retval = 0;
  
    }
  }
  return retval;
}
