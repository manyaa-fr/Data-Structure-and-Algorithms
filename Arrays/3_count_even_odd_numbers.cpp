// Count Even and Odd Numbers
// Given an array, count how many even and odd numbers are present.
// Example:
// Input: [1,2,3,4,5,6]
// Output:
// Even = 3
// Odd = 3


int main () {
	vector<int> nums;
	int n;
	while(cin >> n){
		nums.push_back(n);
    }
    int even = 0;
    int odd = 0;
    for (int i : nums){
        if (i%2 ==0){
            even++;
        } else {
            odd++;
        }
    }

    cout << "Even = " << even;
    cout << endl;
    cout << "Odd = " << odd;

    return 0;
}