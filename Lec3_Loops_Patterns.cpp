#include <iostream>
using namespace std;
/* int main(){
  int n;
  cout<<"Enter value of n: ";
  cin>>n;
  if(n>0){
    cout<<n<<" is a postive number."<<endl;
  }else if(n<0){
    cout<<n<<" is a negative number."<<endl;
  }else{
    cout<<"The number entered is 0."<<endl;
  }
} */

/* int main(){
  char ch;
  cout<<"Enter a character: ";
  cin>>ch;
  if(ch>='a' && ch<='z'){
    cout<<"Entered character is a smallcase.";
  }else if(ch>='A' && ch<='Z'){
    cout<<"Entered character is a uppercase.";
  }else if(ch>='0' && int(ch)<='9'){
    cout<<"Entered character is a number.";
  }else{
    cout<<"Special character entered";
  }
} */

/* int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    cout<<i<<endl;
    i+=1;
  }
} */

/* int main(){
  int n;
  cout<<"Enter the number till you want to get the sum: ";
  cin>>n;
  int i=1,sum=0;
  while(i<=n){
    sum+=i;
    i+=1;
  }
  cout<<"Sum of numbers between 1 to "<<n<<" is = "<<sum;
} */

/* int main(){
  int n;
  cout<<"Enter the limit: ";
  cin>>n;
  int i=1,sum=0;
  while(i<=n){
    if(i%2==0){
      sum+=i;
    }
    i+=1;
  }
  cout<<"Sum of all even numbers = "<<sum;
} */

/* int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  int i=1,count=0;
  while(i<=n){
    if(n%i==0){
      count++;
    }
    i+=1;
  }
  if(count==2){
    cout<<n<<" is a Prime Number";
  }else{
    cout<<n<<" is not a Prime Number";
  }
} */

/* int main(){
  int n;
  cout<<"Enter a the number: ";
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<"*";
      j+=1;
    }
    cout<<endl;
    i+=1;
  }
} */

/* int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<i;
      j+=1;
    }
    cout<<endl;
    i+=1;
  }
} */