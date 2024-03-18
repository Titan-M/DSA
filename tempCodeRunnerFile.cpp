// Butterfly pattern  
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
    for (int i = n - 2; i >= 0; i--) {
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
  }