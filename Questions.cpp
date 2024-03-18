#include <iostream>
#include <cmath>
using namespace std;

// Prime Number or Not
/* int main()
{
  int n;
  bool flag = 0;
  cin >> n;

  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      cout << "Not a Prime Number";
      flag = 1;
      break;
    }
  }
  if (flag == 0)
  {
    cout << "Prime Number";
  }
} */

// Reverse a Number
/* int main()
{
  int n, rev = 0;
  cin >> n;

  while (n > 0)
  {
    int rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10;
  }

  cout << "Reverse Number is: " << rev;
} */

/* // Armstrong Number
int main()
{
  int n, count = 0, num = 0;
  cin >> n;
  int n1 = n;
  while (n1 > 0)
  {
    n1 /= 10;
    count++;
  }
  int n2 = n;
  while (n2 > 0)
  {
    int rem = n2 % 10;
    num = num + pow(rem, count);
    n2 /= 10;
  }

  if (num == n)
  {
    cout << n << " is an Armstrong number";
  }
  else
  {
    cout << n << " is not an Armstrong number";
  }
} */

