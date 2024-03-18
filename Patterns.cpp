#include <iostream>
using namespace std;

/* //Rectangle pattern
int main(){
  int row,column;
  cout<<"Enter number of rows and column: ";
  cin>>row>>column;

  for(int i=0; i<row;i++){
    for(int j=0;j<column;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
} */

/* //Hollow Rectangle
int main(){
  int row,column;
  cout<<"Enter number of rows and column: ";
  cin>>row>>column;

  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      if(i==0 || i==row-1){
        cout<<"*";
      }else if(j==0 || j==column-1){
        cout<<"*";
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
} */

/* //Inverted half Pyramid
int main(){
  int n;
  cout<<"Enter number of rows: ";
  cin>>n;

  for(int i=0;i<n;i++){
    for(int j=n;j>i;j--){
      cout<<"* ";
    }
    cout<<endl;
  }

  //2nd method
    for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
} */

/* //Half pyramid after 180 rotation
int main(){
  int n;
  cout<<"Enter number of rows: ";
  cin>>n;

  for(int i=0;i<n;i++){
    for(int k=0; k<n-i-1;k++){
      cout<<" ";
    }
    for(int j=0;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }

  //2nd Method
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j<n-i-1){
        cout<<" ";
      }else{
        cout<<"*";
      }
    }
    cout<<endl;
  }
} */

/* //Half Pyramid using numbers
int main(){
  int n,number=1;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<number;
    }
    cout<<endl;
    number++;
  }
} */

/* //Floyd's Triangle
int main(){
  int n,number=1;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<number<<" ";
      number++;
    }
    cout<<endl;
  }
} */

/* // Butterfly pattern
  int main(){
    int n;
    cout << "Enter the number of rows for the butterfly pattern: ";
    cin >> n;

    // Upper half of the butterfly
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the butterfly
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
  } */

/* // 0-1 Pattern
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if ((i + j) % 2 == 0)
      {
        cout << 1;
      }
      else
      {
        cout << 0;
      }
    }
    cout << endl;
  }
} */

/* int main(){
  int n;
  cin>>n;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    for(int j=1;j<=i;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
} */

/* // Palindromic Pattern
int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int j;
    for ( j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    int k = i;
    for (; j <= n; j++)
    {
      cout<<k--;
    }
    k=2;
    for(;j<=n+i-1;j++){
      cout<<k++;
    }
    cout<<endl;
  }
} */

/* //Star Pattern
int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
      cout<<"*";
    }
    cout<<endl;
  }

  for (int i = n; i>=1; i--)
  {
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}  */

/* // Zig-Zag Pattern
//  *   *  
// * * * *
//*   *   *

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= 3; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if ((i + j) % 4 == 0)
      {
        cout << "*";
      }
      else if (i == 2 && j % 4 == 0)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
} */