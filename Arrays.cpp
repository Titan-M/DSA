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