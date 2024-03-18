#include <iostream>
using namespace std;
/* int main(){
  int a=4;
  int b=6;
  cout<<"a&b "<<(a&b)<<endl;
  cout<<"a|b "<<(a|b)<<endl;
  cout<<"a^b "<<(a^b)<<endl;
  cout<<"~a "<<(~a)<<endl;
  cout<<(17>>1)<<endl;
  cout<<(17>>2)<<endl;
  cout<<(19<<1)<<endl;
  cout<<(21<<2)<<endl;
} */
/* int main(){
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;
  cout<<"Printing count from 1 to "<<n<<endl;
  for(int i=1;i<=n;i++){
    cout<<i<<endl;
  }
} */
/* int main(){
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;
  int sum=0;
  cout<<"Printing count from 1 to "<<n<<endl;
  for(int i=1;i<=n;i++){
    sum+=i;
  }
  cout<<"Sum: "<<sum;
} */

/* int main(){
  int n1=0,n2=1,n;
  cout<<"Enter the value of n: ";
  cin>>n;
  cout<<"The Fibonacci series is as follows from 0 to "<<n<<endl;
  if(n==0){
    cout<<n1<<" ";
  }else{
    cout<<n1<<" "<<n2<<" ";
      for(int i=2;i<n;i++){
      int next=n1+n2;
      cout<<next<<" ";
      n1=n2;
      n2=next;
    }
  }
} */

//LEETCODE QUESTION
/* int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int prod=1,sum=0;
  while(n>0){
    int temp=n%10;
    prod*=temp;
    sum+=temp;
    n=n/10;
  }
  int result=prod-sum;
  cout<<"Result is: "<<result;
} */

int main(){
  unsigned int n;
  cout<<"Enter the number: ";
  cin>>n;
  cout<<n;
}