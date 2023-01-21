#include <iostream>
using namespace std;
int main() {
  // int a;
  // cin>>a;

  // if(a>0){
  //   cout<<"A is positive"<<endl;
  // }
  // else{
  //   cout<<"A is negative"<<endl;
  // }
  // int a;
  // cout<<"enter the value of a "<<endl;
  // cin>>a;

  // if(a>0){
  //   cout<<"A is positive "<<endl;
  // }
  // else{
  //   if(a<0){
  //     cout<<"A is negative"<<endl;
  //   }
  //   else{
  //     cout<<"A is negative"<<endl;
  //   }
  // }

  // if(a>0){
  //   cout<<"A is positive "<<endl;
  // }
  // else if(a<=0){
  //   cout<<"A is negative"<<endl;
  // }

  // char ch;
  // cout<<"Enter a charcter"<<endl;
  // cin>>ch;

  //  int ascii = ch;

  //   if(ascii>=65 && ascii<=90){
  //       cout << "Upper Case" << endl;
  //   }
  //   else if(ascii>=97 && ascii<=122){
  //       cout << "Lower Case" << endl;
  //   }
  //   else if(ascii>=48 && ascii <=57){
  //       cout << "Numerical" << endl;
  //   }
  //   else{
  //       cout << "something else" << endl;
  //   }

  // 
  // int n;
  // cin>>n;

  // int i = 1;

  // while(i<=n){
  //   cout<<i<<" "<<endl;
  //   i = i+1;
  // }

  // int n;
  // cin>>n;

  // int i = 2;
  // int sum = 0;

  // while(i<=n) {
  //   sum = sum + i;
  //   i = i + 2;
  // }
  // cout<<"value of sum is "<<sum<<endl;

  // int n;
  // cin>>n;

  // int i = 2;

  // while(i<n) {
  //   //divide hogeya, not prime
  //   if(n%i == 0){
  //     cout<<" Not Prime for "<<i<<endl;
  //   }
  //   else{
  //     cout<<"Prime for "<<i<<endl;
  //   }
  //   i = i+1;
  // }

  // int n;
  // cin>>n;
  
  // int i = 1;

  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout<< "*";
  //     j = j+1;
  //   }
  //   cout<<endl;
  //   i = i+1;
  // }

  int n;
  cin>>n;

  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=n){
      cout<< i;
      j = j+1;
    }
    cout<<endl;
    i = i+1;
  }
}