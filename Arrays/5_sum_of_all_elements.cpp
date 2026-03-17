// Find Sum of All Elements
// Calculate the sum of all elements in the array.
// Example:
// Input: [2,4,6,8]
// Output: 20


int main () {
	vector<int> nums;
	int n;
	while(cin >> n){
		nums.push_back(n);
    }
    int sum = 0;
    for (int i : nums){
        sum += i;
    }
    
    cout << sum;

    return 0;
}