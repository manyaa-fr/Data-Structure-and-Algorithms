// Find Second Largest Element
// Find the second largest number in the array.
// Example:
// Input: [10,5,20,8]
// Output: 10

int main (){
	vector<int> nums;
	int n;
	while(cin >> n){
		nums.push_back(n);
    }
    int largest = 0;
    int secondLargest = 0;
    for (int i : nums){
        if (i >= largest) {
        largest = i;
        }
    }
    for (int i : nums){
        if (i<largest && i>=secondLargest){
            secondLargest = i;
        }
    }

    cout << secondLargest;

    return 0;
}