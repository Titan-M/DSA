#include <iostream>
using namespace std;
/* //Arrays
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element: ";
    cin>>arr[i];
  }
  double sum=0.0;
  for(int i=0;i<n;i++){
    sum=sum+arr[i];
  }
  cout<<"Sum of the entered elements is: "<<sum;
  cout<<"\nAverage of the entered elements: "<<sum/(n-1)<<endl;
  cout<<"Elements at even position: ";
  for(int i=0;i<n;i++){
    if(i%2==0){
      cout<<arr[i]<<" ";
    }
  }
} */

//Element insertion at the end of the array
/* int main(){
  int max_size=100;
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[max_size];
  for(int i=0;i<n;i++){
    cout<<"Enter element: ";
    cin>>arr[i];
  }
  cout<<"Enter element to be inserted: ";
  int elem;
  cin>>elem;
  if(n < max_size){
    arr[n]=elem;
    n++;
  }
  cout<<"New Array: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
} */

/* //Element insertion in front of the array
int main(){
  int max_size=100;
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[max_size];
  for(int i=0;i<n;i++){
    cout<<"Enter element: ";
    cin>>arr[i];
  }
  for(int i=n;i>0;i--){
    arr[i]=arr[i-1];
  }

  cout<<"Enter element to be added in the front: ";
  int elem;
  cin>>elem;
  if(n<max_size){
    arr[0]=elem;
    n++;
  }
  cout<<"New Array: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
} */

//Element insertion at specific position
/* int main(){
  int max_size=100;
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[max_size];
  for(int i=0;i<n;i++){
    cout<<"Enter element: ";
    cin>>arr[i];
  }
  cout<<"Enter the element to be inserted: ";
  int elem;
  cin>>elem;
  cout<<"Enter the position: ";
  int pos;
  cin>>pos;

  if(pos<n && n<max_size){
    for(int i=n-1;i>=pos;i--){
      arr[i+1]=arr[i];
    }
    arr[pos]=elem;
    n++;  
  }
  cout<<"New array: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
} */

/* //Deletion from the end
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element: ";
    cin>>arr[i];
  }
  n=n-1;
  cout<<"New array: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
} */

/* //Deletion from specific position 24 45 34 54 
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element: ";
    cin>>arr[i];
  }
  int pos;
  cout<<"Enter the position at which you want to delete: ";
  cin>>pos;
  if(pos>n){
    cout<<"Cannot Delete, position out of bounds"<<endl;
  }else{
    for(int i=pos;i<n;i++){
      arr[i]=arr[i+1];
    }
    n=n-1;
    cout<<"New Array: ";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
  }
} */

/* //Deletion on the basis of element
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element: ";
    cin>>arr[i];
  }
  int elem;
  cout<<"Enter the element to be deleted: ";
  cin>>elem;
  int flag=0,pos=0;
  for(int i=0;i<n;i++){
    if(arr[i]==elem){
      flag=1;
      pos=i;
      break;
    }
  }
  if(flag==1){
    for(int i=pos;i<n;i++){
      arr[i]=arr[i+1];
    }
    n=n-1;
    cout<<"New array: ";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
  }else{
    cout<<"Element not found"<<endl;
  }
} */

/* //Structure practice
struct bank_details{
  long acc_num;
  string emp_name;
  int acc_bal;
};
int main(){
  int n;
  cout<<"Enter the number of employees: ";
  cin>>n;
  struct bank_details emp[n];
  for(int i=0;i<n;i++){
    cout<<"Enter information for Employee "<<i+1<<endl;
    cout<<"Enter your name: ";
    cin>>emp[i].emp_name;
    cout<<"Enter account number: ";
    cin>>emp[i].acc_num;
    cout<<"Enter account balance: ";
    cin>>emp[i].acc_bal;
  }

  for(int i=0;i<n;i++){
    cout<<"Displaying Information of employee: "<<i+1<<endl;
    cout<<"Name of the employee: "<<emp[i].emp_name<<endl;
    cout<<"Account Number: "<<emp[i].acc_num<<endl;
    cout<<"Account Balance: "<<emp[i].acc_bal<<endl;
  }
} */

/* //Pointers
int main(){
  int a,b;
  cin>>a>>b;
  int *aP =&a;
  int *bP =&b;
  int temp=*aP;
  *aP =*bP;
  *bP = temp;
  cout<<"Value of A: "<<a<<"\nValue of B: "<<b;
} */

//Recursion
/* //1)Fibonacci 0 1 1 2 3 5 8
void fibonacci(int n, int a=0, int b=1, int i=1){
  if(i<=n){
    cout<<a<<" ";
    fibonacci(n,b,b+a,++i);
  }
}
int main(){
  fibonacci(5);
} */

/* //Stack
int const MAX=100;
int stack[MAX],front=-1;
void Push(){
  if(front==MAX-1){
    cout<<"Stack is full"<<endl;
  }else{
    cout<<"Enter element to be pushed: ";
    int elem;
    cin>>elem;
    front++;
    stack[front]=elem;
  }
}
void Pop(){
  if(front==-1){
    cout<<"Stack is Empty"<<endl;
  }else{
    cout<<"Element popped from the stack is: "<<stack[front]<<endl;
    front--;
  }
}

void Display(){
  if(front==-1){
    cout<<"Stack is Empty"<<endl;
  }else{
    for(int i=0;i<=front;i++){
      cout<<stack[i]<<" ";
    }
  }
}

void peek(){
  if(front==-1){
    cout<<"Stack is empty"<<endl;
  }else{
    cout<<"Element is: "<<stack[front];
  }
}
int main(){
  int ch;
  do{
    cout<<"1:Push\n2:Pop\n3:Display\n4:Peek\n5:Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;
    switch(ch){
      case 1:
      Push();
      break;
      case 2:
      Pop();
      break;
      case 3:
      cout<<"Displaying Elements: ";
      Display();
      cout<<endl;
      break;
      case 4:
      peek();
      break;
      case 5:
      cout<<"Exiting Stack";
      break;
      default:
      cout<<"Invalid Choice";
    }
  }while(ch!=5);
} */

/* //Linear Queue
int const n=5;
int queue[n],front=-1,rear=-1;
void Enqueue(){
  if(rear==n){
    cout<<"Queue is full"<<endl;
  }else if(front == -1 && rear == -1){
    front=rear=0;
  }
  cout<<"Enter element to be enqueued: "<<endl;
  int elem;
  cin>>elem;
  queue[rear]=elem;
  rear++;
}

void Dequeue(){
  if(front==-1){
    cout<<"Queue is Empty"<<endl;
  }else{
    cout<<"Dequeued element is: "<<queue[front]<<endl;
    front++;
  }
}
void Display(){
  if(front==-1){
    cout<<"Queue is Empty";
  }else{
    for(int i=front;i<rear;i++){
      cout<<queue[i]<<" ";
    }
  }
}

int main(){
  int ch;
  do{
    cout<<"1:Enqueue\n2:Dequeue\n3:Display\n4:Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;
    switch(ch){
      case 1:
      Enqueue();
      break;
      case 2:
      Dequeue();
      break;
      case 3:
      cout<<"Displaying the queue: ";
      Display();
      cout<<endl;
      break;
      case 4:
      cout<<"Exit";
      break;
      default:
      cout<<"Invalid choice";
    }
  }while(ch!=4);
} */

/* //Circular Queue
int const n=3;
int queue[n],front=-1,rear=-1;
void Enqueue(){
  if((rear+1)%n==front){
    cout<<"Queue is full"<<endl;
  }
  if(front==-1){
    rear=front=0;
  }else if(rear+1==n && front!=0){
    rear=0;
  }else{
    rear++;
  }
  cout<<"Enter element to be enqueued: ";
  int val;
  cin>>val;
  queue[rear]=val;
}
void Dequeue(){
  if(front==-1){
    cout<<"Queue is Empty"<<endl;
  }
  int val=queue[front];
  if(rear==front){
    front=rear=-1;
  }else{
    cout<<"Dequeued element is: "<<val<<endl;
    front++;
  }
}
void Display(){
  if(front==-1){
    cout<<"Queue is Empty"<<endl;
  }
  if(front<=rear){
    for(int i=front;i<=rear;i++){
      cout<<queue[i]<<" ";
    }    
  }
  for(int i=front;i<n;i++){
      cout<<queue[i]<<" ";
    }
  for(int i=0;i<=rear;i++){
    cout<<queue[i]<<" ";
  }
}

int main(){
  int ch;
  do{
    cout<<"1:Enqueue\n2:Dequeue\n3:Display\n4:Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;
    switch(ch){
      case 1:
      Enqueue();
      break;
      case 2:
      Dequeue();
      break;
      case 3:
      cout<<"Displaying the queue: ";
      Display();
      cout<<endl;
      break;
      case 4:
      cout<<"Exit";
      break;
      default:
      cout<<"Invalid choice";
    }
  }while(ch!=4);
}
 */

/* //Bubble Sorting
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element: ";
    cin>>arr[i];
  }
  cout<<"Before sorting: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\nAfter sorting: ";
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
} */

/* //Selection Sort
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element: ";
    cin>>arr[i];
  }
  cout<<"Before sorting: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  int min;
  cout<<"\nAfter sorting: ";
  for(int i=0;i<n-1;i++){
    min=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min]){
        min=j;
      }
    }
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
} */

/* //Insertion Sort
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element: ";
    cin>>arr[i];
  }
  cout<<"Before sorting: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
  cout<<"\nAfter sorting: ";  
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }  
} */

/* //Linear Search
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element: ";
    cin>>arr[i];
  }
  int elem;
  cout<<"Enter element to be searched: ";
  cin>>elem;
  int pos=0,flag=0;
  for(int i=0;i<n;i++){
    if(arr[i]==elem){
      flag=1;
      pos=i;
      break;
    }
  }
  if(flag==0){
    cout<<"Element not found";
  }else{
    cout<<"Element found at position: "<<pos+1<<endl;
  }
} */

/* //Binary Search
int BinarySearch(int arr1[], int n, int srch){
  int left=0,right=n-1;
  while(left<=right){
    int mid=left+(right-left)/2;
    if(arr1[mid]==srch){
      return mid;
    }else if(arr1[mid]<srch){
      left=mid+1;
    }else{
      right=mid-1;
    }
  }
  return -1;
}
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element: ";
    cin>>arr[i];
  }
  int elem;
  cout<<"Enter element to be searched: ";
  cin>>elem;
  int val=BinarySearch(arr,n,elem);
  if(val==-1){
    cout<<"Element not found";
  }else{
    cout<<"Element found at position "<<val;
  }
} */

/* //Insert element at the beginning of a Linked list
struct Node{
  int value;
  Node *next;
};
void printLinkedlist(Node*p){
  while(p!=nullptr){
    cout<<p->value<<" ";
    p=p->next;
  };
  cout<<endl;
}
Node insertAtBeginning(Node head, int value){
  Node *newNode=new Node();
  newNode->value=value;
  newNode->next=head;
  return newNode;
}

int main(){
  Node *head=nullptr;
  char addMore;
  do{
    int newValue;
    cout<<"Enter a value to insert: ";
    cin>>newValue;
    head=insertAtBeginning(head,newValue);
    cout<<"Do you want to add more nodes [Y/N]: ";
    cin>>addMore;
  }while(addMore=='y' || addMore=='Y');
  cout<<"Linked List: ";
  printLinkedlist(head);

  while(head!=nullptr){
    Node* temp=head;
    head=head->next;
    delete temp;
  }
  return 0;
} */

/* //Insert At End
struct Node{
  int data;
  Node *next;
};
void printLinkedList(Node *p){
  while(p!=nullptr){
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;
}

Node *insertAtEnd(Node *head, int value){
  Node *newNode= new Node();
  newNode->data=value;
  newNode->next=nullptr;
  if(head==nullptr){
    head=newNode;
  }else{
    Node *tail=head;
    while(tail->next!=nullptr){
      tail=tail->next;
    }
    tail->next=newNode;
  }
  return head;
}

int main(){
  Node *head;
  char Addmore;
  do{
    int value;
    cout<<"Enter value to be inserted: ";
    cin>>value;
    head=insertAtEnd(head,value);
    cout<<"Do you want to add more Nodes [Y/N]: ";
    cin>>Addmore;
  }while(Addmore=='y'||Addmore=='Y');

  cout<<"Linked List: ";
  printLinkedList(head);

  while(head!=nullptr){
    Node* temp=head;
    head=head->next;
    delete temp;
  }
  return 0;
} */

/* //Delete at Beginning
struct Node{
  int data;
  Node *next;
};
void printLinkedList(Node *p){
  while(p!=nullptr){
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;
}
Node *deleteAtBeginning(Node *head){
  Node *temp=head;
  head=head->next;
  delete temp;
  return head;
}

int main(){
  Node *head=nullptr;
  char addMore;
  do{
    int newvalue;
    cout<<"Enter value to be inserted: ";
    cin>>newvalue;
    Node *newNode=new Node();
    newNode->data=newvalue;
    newNode->next=head;
    head=newNode;

    cout<<"Do you want to add more nodes [Y/N]: ";
    cin>>addMore;
  }while(addMore=='y'||addMore=='Y');
  cout<<"Linked List: ";
  printLinkedList(head);
  head=deleteAtBeginning(head);
  cout<<"\nLinked List after deletion: ";
  printLinkedList(head);

  while(head!=nullptr){
    Node * temp=head;
    head=head->next;
    delete temp;
  }
} */

/* //Delete at End
struct Node{
  int data;
  Node *next;
};

void printLinkedList(Node *p){
  while(p!=nullptr){
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;
}

Node *deleteAtEnd(Node *head){
  if(head==nullptr){
    cout<<"List is already empty"<<endl;
    return nullptr;
  }
  if(head->next==nullptr){
    delete head;
    return nullptr;
  }
  Node *current=head;
  Node *previous=nullptr;
  while(current->next!=nullptr){
    previous=current;
    current=current->next;
  }
  delete current;
  previous->next=nullptr;
  return head;
}

int main(){
  Node *head=nullptr;
  char Addmore;
  do{
    int newValue;
    cout<<"Enter value to be inserted: ";
    cin>>newValue;
    Node* newNode=new Node();
    newNode->data=newValue;
    newNode->next=nullptr;
    if(head==nullptr){
      head=newNode;
    }else{
      Node *tail=head;
      while(tail->next!=nullptr){
        tail=tail->next;
      }
      tail->next=newNode;
    }
    cout<<"Do you want to add more nodes [y/n]: ";
    cin>>Addmore;
  }while(Addmore=='Y'||Addmore=='y');

  cout<<"Linked List: ";
  printLinkedList(head);
  head=deleteAtEnd(head);
  cout<<"Linked List after deletion: ";
  printLinkedList(head);

  while(head!=nullptr){
    Node *temp=head;
    head=head->next;
    delete temp;
  }
} */

/* Node *insertAtBeginning(Node *head, int value){
  Node *newNode=new Node();
  newNode->data=value;
  newNode->next=head;
  return newNode;
}

Node *insertAtEnd(Node *head,int value){
  Node *newNode=new Node();
  newNode->data=value;
  newNode->next=nullptr;
  if(head==nullptr){
    head=newNode;
  }else{
    Node *tail=head;
    while(tail->next!=nullptr){
      tail=tail->next;
    }
    tail->next=newNode;
  }
  return head;
}

Node *deleteAtBeginning(Node *head){
  Node *temp=head;
  head=head->next;
  delete temp;
  return head;
}
Node *deleteAtEnd(Node *head){
  if(head==nullptr){
    cout<<"List is already empty"<<endl;
  }
  if(head->next==nullptr){
    delete head;
    return nullptr;
  }
  Node *current=head;
  Node *previous=nullptr;
  while(current->next!=nullptr){
    previous=current;
    current=current->next;
  }
  delete current;
  previous->next=nullptr;
  return head;
} */

/* //Insert At Specific Positon
struct Node{
  int data;
  Node *next;
};
void printLinkedList(Node *p){
  while(p!=nullptr){
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;
} */
/* 
Node *insertAtSpecificPosition(Node *head, int value, int position){
  Node *newNode=new Node();
  newNode->data=value;
  newNode->next=nullptr;

  if(position==1||head==nullptr){
    newNode->next=head;
    return newNode;
  }
  Node *current=head;
  for(int i=1;i<position-1 && current!=nullptr;++i){
    current=current->next;
  }

  if(current==nullptr){
    Node*tail=head;
    while(tail->next!=nullptr){
      tail=tail->next;
    }
    tail->next=newNode;
  }else{
    newNode->next=current->next;
    current->next=newNode;
  }
  return head;
} */

/* Node* insertAtSpecificposition(Node* head,int value, int position){
  Node *newNode=new Node();
  newNode->data=value;
  newNode->next=nullptr;
  if(position==1||head==nullptr){
    newNode->next=head;
    return newNode;
  }
  Node *current=head;
  for(int i=1;i<position-1 && current!=nullptr;++i){
    current=current->next;
  }
  if(current==nullptr){
    Node *tail=head;
    while(tail->next!=nullptr){
      tail=tail->next;
    }
    tail->next=newNode;
  }else{
    newNode->next=current->next;
    current->next=newNode;
  }
  return head;
} */

/* //Deletion at Specific position
struct Node{
  int data;
  Node *next;
};
Node* deleteAtSpecificPosition(Node *head, int position){
  if(head==nullptr){
    cout<<"List is empty"<<endl;
  }
  if(position==1){
    Node *temp=head;
    head=head->next;
    delete temp;
    return head;
  }
  Node* current=head;
  Node *previous=nullptr;
  int currentPosition=1;
  while(currentPosition<position && current!=nullptr){
    previous=current;
    current=current->next;
    currentPosition++;
  }
  if(current==nullptr){
    cout<<"Position is beyond the list"<<endl;
    return head;
  }else{
    previous->next=current->next;
    delete current;
    return head;
  }
} */

/* //Bubble sort
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Array before sorting: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"Array after sorting: ";
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }  
} */

/* //Selection sort
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Array before sorting: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"Array after sorting: ";
  for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if(arr[min]>arr[j]){
        min=j;
      }
    }
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }    
} */

/* //Insertion sort
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Array before sorting: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"Array after sorting: ";  
  for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
} */

void recursion(int n){
  if(n==0){
    return;
  }else{
    recursion(n-1);
    cout<<" "<<n;
    cout<<" "<<n+1;
  }
}
int main(){
  recursion(5);
}