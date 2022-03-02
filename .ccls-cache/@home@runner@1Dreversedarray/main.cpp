#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter size number: ";
  cin >> n;
  int arr[n], i;
  for(i = 0; i < n; i++){
	cout << "Enter element: ";
	cin >> arr[i]; 
	}
    cout << "The reversed array: ";
  for(i = n-1; i >= 0; i--){
	cout << arr[i] << ' ';
	  }
	return 0; 
}