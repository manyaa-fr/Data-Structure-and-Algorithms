// Find the Smallest Element in an Array
// Write a program to find the minimum element in an array.
// Example:
// Input: [8, 4, 6, 2, 10]
// Output: 2


int main (){
	vector<int> nums;
	int n;
	while(cin >> n){
		nums.push_back(n);
    }
    int smallest = INT_MAX;
    for (int i=0; i<nums.size(); i++){
        if (nums[i] < smallest){
        smallest = nums[i];
    }

    //OR smallest = min(smallest, nums[i]);
    
    }
    cout << smallest;

    return 0;
}
