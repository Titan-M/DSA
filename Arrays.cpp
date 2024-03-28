#include <iostream>
#include <climits>
using namespace std;

/* int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n;i++){
    cin>>arr[i];
  }
  int maxNo=INT_MIN, minNo=INT_MAX;
  for(int i=0; i<n;i++){
    maxNo=max(maxNo,arr[i]);
    minNo=min(minNo,arr[i]);
  }

  cout<<"Maximum is: "<<maxNo<<" Minimum is: "<<minNo;
} */

// Searching
/* // Linear Search Time Complexity= O(n)
int linearSearch(int arr[], int n, int num)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == num)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int num;
  cout << "Enter the key number: ";
  cin >> num;
  int sol = linearSearch(arr, n, num);
  if (sol == -1)
  {
    cout << "Not found";
  }
  else
  {
    cout << "Found at Position: " << sol;
  }
} */

/* // Binary Search Time Complexity= O(log^n)
//Binary Search > Linear Search
int binarySearch(int arr[], int n, int num)
{
  int left = 0, right = n - 1;
  while (left <= right)
  {
    int mid = left+(right-left) / 2;
    if (arr[mid] == num)
    {
      return mid;
    }
    else if (arr[mid] > num)
    {
      right=mid-1;
    }
    else
    {
      left=mid+1;
    }
  }
  return -1;
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int num;
  cout << "Enter the key number: ";
  cin >> num;

  int ans = binarySearch(arr, n, num);
  if (ans == -1)
  {
    cout << "Not found";
  }
  else
  {
    cout << "Found at position: " << ans;
  }
} */

// Sorting
/* //Selection Sort- Find min elem and swap with elem at beginning
void selectionSort(int arr[], int n){
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[i]){
        int temp =arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
      }
    }
  }
  cout<<"Sorted array: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  selectionSort(arr,n);
} */

/* // Bubble sort
void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      { // ascending order
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  bubbleSort(arr, n);
} */

// Insertion Sort- Insert an element from an unsorted array to its correct position in the sorted array

/* void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int current = arr[i];
    int j = i - 1;
    while (arr[j] > current && j >= 0)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = current;
  }
  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  insertionSort(arr, n);
} */

/* //Maximum number at i-th iteration Time complexity=O(n)
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int maximum=INT_MIN;
  for(int i=0; i<n;i++){
    maximum=max(maximum, arr[i]);
    cout<<"Maximum number after "<<i <<" iteration is: "<<maximum;
  }
} */

/* // Sum of all subarrays
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum=0;
    for (int j = i; j < n; j++)
    {
      sum = sum + arr[j];
      cout<<sum<<endl;
    }
  }
} */

/* // Finding which subarray is the longest subarray having same difference when in a consecutive manner
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int diff = arr[1] - arr[0], length = 2, maximum = 0;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] - arr[i - 1] == diff)
    {
      length++;
    }
    else
    {
      length = 1;
      diff = arr[i] - arr[i - 1];
    }
    maximum = max(maximum, length);
  }
  cout << "Maximum length of the subarray having difference in a consecutive manner is: " << maximum << endl;
  return 0;
} */

/* // Record Breaker
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  if(n==1){
    cout<<"Record Breaking Days: "<<arr[0];
  }

  int maximum = -1;
  for (int i = 0; i < n; i++)
  {
    if ((i == n - 1 || arr[i] > arr[i + 1]) && arr[i] > maximum)
    {
      cout << "Record Breaking Day: " << arr[i] << endl;
    }
    maximum = max(maximum, arr[i]);
  }
} */

/* //Repeating Elements with early occurence
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    const int N = 1e6 + 1;
    int idx[N];
    for (int i = 0; i < N; i++) {
        idx[i] = -1;
    }

    int minIdx = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (idx[arr[i]] != -1) {
            minIdx = min(minIdx, idx[arr[i]]);
        } else {
            idx[arr[i]] = i;
        }
    }

    if (minIdx == INT_MAX) {
        cout << "-1" << endl;
    } else {
        cout << minIdx + 1 << endl;
    }

    return 0;
} */

/* // Subarray with given sum
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int S;
  cout << "Enter S";
  cin >> S;
  int i = 0, j = 0, st = -1, en = -1, sum = 0;
  while (j < n && sum + arr[j] <= S)
  {
    sum += arr[j];
    j++;
  }

  if (sum == S)
  {
    cout << i + 1 << " " << j << endl;
    return 0;
  }

  while (j < n)
  {
    sum += arr[j];
    while (sum > S)
    {
      sum -= arr[i];
      i++;
    }

    if (sum == S)
    {
      st=i+1;
      en=j+1;
      break;
    }
    j++;
  }
  cout<<st <<" "<< en<< endl;
}

//Optimised Code
  int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int S;
    cout << "Enter the target sum (S): ";
    cin >> S;

    int st = -1, en = -1, sum = 0, i = 0, j = 0;

    while (j < n) {
        sum += arr[j];

        while (sum > S && i < j) {
            sum -= arr[i];
            i++;
        }

        if (sum == S) {
            st = i + 1;
            en = j + 1;
            break;
        }

        j++;
    }

    if (st == -1 || en == -1) {
        cout << "No subarray found with sum equal to " << S << endl;
    } else {
        cout << "Subarray found with sum equal to " << S << " starts at index " << st << " and ends at index " << en << endl;
    }
    return 0;
} */

// To check which is the smallest possible positive integer missing in an array
/* int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  const int N = 1e6 + 2;
  bool check[N];
  for (int i = 0; i < n; i++)
  {
    check[i] = false;
  }

  for (int i = 0; i < n; i++)
  {
    if (a[i] >= 0)
    {
      check[a[i]] = true;
    }
  }
  int ans = -1;

  for (int i = 1; i < N; i++)
  {
    if (check[i] == false)
    {
      ans = i;
      break;
    }
  }
  cout << ans;
} */

// Subarray
/* int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      for(int k=i;k<j;k++){
        cout<<a[k];
      }
    }
    cout<<endl;
  }
} */

// Maximum subarray sum
/* int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int maximum=INT_MIN;
  int sum=0;

  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      for(int k=i;k<=j;k++){
        sum+=a[k];
      }
      maximum=max(maximum,sum);
      sum=0;
    }
  }
  cout<<"Maximum sum is: "<<maximum;
} */

/* //Time complexity O[n^2]
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int currSum[n + 1];
  currSum[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    currSum[i] = currSum[i - 1] + a[i - 1]; //Sum is stored in new array and then currSum is added with the numbers in the new array
  }

  int maxSum = INT_MIN;
  for (int i = 1; i <= n; i++)
  {
    int sum=0;
    for(int j=0;j<=i-1;j++){
      sum=currSum[i]-currSum[j];
      maxSum=max(maxSum,sum);
    }
  }
  cout<<maxSum;
} */

/* // Time complexity O(n) - Kadane's Algo
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int currSum = 0;
  int maxSum = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    currSum += a[i];
    if (currSum < 0)
    {
      currSum = 0;
    }
    maxSum=max(maxSum,currSum);
  }
  cout<<maxSum;
} */

/* // Maximum circular subarray Sum

int kadane(int arr[], int n)
{
  int currSum = 0;
  int maxSum = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    currSum += arr[i];
    if (currSum < 0)
    {
      currSum = 0;
    }
    maxSum = max(maxSum, currSum);
  }
  return maxSum;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int wrapSum;
  int nonWrapSum;
  nonWrapSum = kadane(a, n);

  int totalSum = 0;
  for (int i = 0; i < n; i++)
  {
    totalSum += a[i];
    a[i] = -a[i];
  }

  wrapSum=totalSum+kadane(a, n);
  cout<<max(wrapSum, nonWrapSum);
} */

/* // Pair Sum problem
bool pairSum(int arr[], int n, int k)
{
  int sum = 0;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] + arr[j] == k)
      {
        cout << i << " " << j << endl;
        return true;
      }
    }
  }
  return false;
}
int main()
{
  int k, n;
  cin >> n;
  cin >> k;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << pairSum(a, n, k);
} */

/* // Time complexity O(n)
int main()
{
  int k, n;
  cin >> n;
  cin >> k;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 1; i < n; i++)
  {
    int current = arr[i];
    int j = i - 1;
    while (arr[j] > current && j >= 0)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = current;
  }

  int high = n - 1;
  int low = 0;

  while (low<high)
  {
    int sum = arr[low] + arr[high];
    if (sum == k)
    {
      cout << low << " " << high << endl;
      break;
    }
    if (sum > k)
    {
      high--;
    }
    else
    {
      low++;
    }
  }
} */