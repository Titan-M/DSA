#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/* bool isPrime(int n)
{
  int flag = 0;
  for (int i = 2; i < sqrt(n); i++)
  {
    if (n % i == 0)
    {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
  {
    return true;
  }
}
int main()
{
  int n1, n2;
  cin >> n1 >> n2;
  cout << "Prime Number between " << n1 << " & " << n2 << " is: ";
  for (int i = n1; i <= n2; i++)
  {
    if (isPrime(i) == true)
    {
      cout << i << " ";
    }
  }
} */

/* // Fibonacci series
void fib(int n)
{
  int n1 = 0,n2 = 1, n3;
  cout<<"Fibonnaci Series: ";
  for (int i = 1; i <= n; i++)
  {
    cout << n1<< " ";
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
  }
}

int main()
{
  int n;
  cin >> n;
  fib(n);
} */

/* // Factorial
int fact(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
  {
    f = f * i;
  }
  return f;
}

int main()
{
  int n;
  cin >> n;
  int factorial = fact(n);
  cout << "Factorial of the given number is: " << factorial;
} */

// Calculate nCr Formula=n!/(n-r)!*r!
/* int fact(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
  {
    f = f * i;
  }
  return f;
}

int main(){
  int n,r;
  cin>>n>>r;

  int ans = fact(n)/(fact(n-r)*fact(r));
  cout<<ans;
} */

/* // Pascal triangle
int fact(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
  {
    f = f * i;
  }
  return f;
}
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << fact(i) / (fact(j) * fact(i - j))<<" ";
    }
    cout << endl;
  }
} */

// Sum of natural numbers
/* int sum(int n){
  int sum1=0;
  for(int i=1;i<=n;i++){
    sum1+=i;
  }
  return sum1;
}
int main(){
  int n;
  cin>>n;

  cout<<sum(n)<< endl;
} */

// Pythagorean Triplet
/* bool pythagoreanTriplet(int x, int y, int z)
{
  int a = max(x, max(y, z));
  int b, c;

  if (a == x)
  {
    b = y;
    c = z;
  }
  else if (a == y)
  {
    b = x;
    c = z;
  }
  else
  {
    b = x;
    c = y;
  }

  if ((a * a) ==  (b * b) + (c * c))
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  if (pythagoreanTriplet(a, b, c) == true)
  {
    cout << "The numbers are pythagorean triplet";
  }
  else
  {
    cout << "Not a pythagorean triplet";
  }
} */

/* // Binary to Decimal
int binaryToDecimal(int n){
  int answer=0;
  int x=1;
  while(n>0){
    int rem= n%10;
    answer += x*rem;
    x *=2;
    n/=10;
  }
  return answer;
}
int main()
{
  int n;
  cin >> n;
  cout << binaryToDecimal(n) << endl;
} */

/* // Octal to Decimal
int octalToDecimal(int n)
{
  int answer = 0;
  int x = 1;
  while (n > 0)
  {
    int rem = n % 10;
    answer += x * rem;
    x *= 8;
    n /= 10;
  }
  return answer;
}
int main()
{
  int n;
  cin >> n;
  cout << octalToDecimal(n) << endl;
} */

/* // Hexadecimal to Decimal
int hexadecimalToDecimal(string n)
{
  int answer = 0;
  int x = 1;
  int s = n.size();
  for (int i = s - 1; i >= 0; i--)
  {
    if (n[i] >= '0' && n[i] <= '9')
    {
      answer += x * (n[i] - '0');
    }
    else if (n[i] >= 'A' && n[i] <= 'F')
    {
      answer += x * (n[i] - 'A' + 10);
    }
    x*=16;
  }
  return answer;
}
int main()
{
  string n;
  cin >> n;
  cout << hexadecimalToDecimal(n) << endl;
} */

/* // Decimal to Binary

int decimalToBinary(int n)
{
  int ans = 0,base=1;

  while(n>0){
    int rem=n%2;
    ans=ans+rem*base;
    n=n/2;
    base*=10;
  }
  return ans;
}
int main()
{
  int n;
  cin >> n;
  cout << decimalToBinary(n) << endl;
} */

/* //Decimal to Octal

int decimalToOctal(int n){

  int ans = 0,base=1;

  while(n>0){
    int rem=n%8;
    ans=ans+rem*base;
    n=n/8;
    base*=10;
  }
  return ans;
}
int main()
{
  int n;
  cin >> n;
  cout << decimalToOctal(n) << endl;
} */

/* // Decimal to Hexadecimal

string decimalToHexadecimal(int n)
{
  int x = 1;
  string ans = "";
  while (n > 0)
  {
    int rem = n % 16;
    if (rem <= 9)
    {
      ans = to_string(rem)+ans;
    }
    else
    {
      ans = char('A' + rem - 10)+ans;
    }
    n=n/16;
  }
  return ans;
}
int main()
{
  int n;
  cin >> n;
  cout << decimalToHexadecimal(n) << endl;
} */

/* // Add two Binary Numbers
int addBinary(int a, int b)
{
  int ans = 0;
  int carry = 0;
  int placevalue = 1;

  while (a > 0 || b > 0 || carry > 0)
  {
    int bitA = a %10;
    int bitB = b %10;
    int sum = bitA + bitB + carry;
    int resultbit = sum % 2;
    carry = sum / 2;
    ans = ans + (resultbit * placevalue);
    placevalue *= 10;
    a /= 10;
    b /= 10;
  }
  return ans;
}
int main()
{
  int a, b;
  cin >> a >> b;

  cout << addBinary(a, b) << endl;
} */