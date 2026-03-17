// Print All Prime Numbers in an Array
// Given an array, print only the prime numbers.
// Example:
// Input: [4,5,6,7,8,11]
// Output: [5,7,11]

bool isPrime (int n){
    if (n<=1) return false;
    for (int i=2; i<n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main () {
	vector<int> nums;
	int n;
	while(cin >> n){
		nums.push_back(n);
    }
    for (int i : nums){
        if (isPrime(i)) {
        cout << i << " ";
        }
    }

    return 0;
}