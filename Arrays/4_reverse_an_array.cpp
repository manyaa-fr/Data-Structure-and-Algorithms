// Reverse an Array
// Reverse the elements of the array.
// Example:
// Input: [1,2,3,4,5]
// Output: [5,4,3,2,1]


int main () {
	vector<int> nums;
	int n;
	while(cin >> n){
		nums.push_back(n);
    }
    int temp = 0;
    int a = nums.size();
    for (int i=0; i<a/2; i++){
        temp = nums[i];
        nums[i] = nums[a-i-1];
        nums[a-i-1] = temp;
    }

    // OR reverse(nums.begin(), nums.end());

    for (int i=0; i<a; i++){
        cout << nums[i] << " ";
    }

    return 0;
}