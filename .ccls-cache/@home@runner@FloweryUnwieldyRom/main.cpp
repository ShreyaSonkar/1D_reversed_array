#include <iostream>
using namespace std;

int main() {
  int n;
  cout << " Enter size number: ";
  cin >> n;
  int arr[n], i;
  for(i = 0; i < n; i++){
	cout << "Enter element: ";
	cin >> arr[i]; 
	}
  for(i = n; i > 0; i--){
	cout << arr[i] << ' ';
	}
	return 0; 
}