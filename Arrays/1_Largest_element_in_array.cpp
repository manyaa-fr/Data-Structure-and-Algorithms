// Find the Largest Element in an Array
// Given an array of integers, find the largest number.
// Example:
// Input: [3, 7, 2, 9, 5]
// Output: 9


int main (){
	vector<int> nums;
	int n;
	while(cin >> n){
		nums.push_back(n);
    }
    int largest = INT_MIN;
    for (int i=0; i<nums.size(); i++){
        if (nums[i] > largest){
            largest = nums[i];
        }

        //OR largest = max(largest, nums[i]);
    }
    cout << largest;

    return 0;
}