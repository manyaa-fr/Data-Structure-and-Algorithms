// Remove Duplicate Elements
// Remove duplicate values from the array.
// Example:
// Input: [1,2,2,2,3,4,4,5]
// Output: [1,2,3,4,5]

int main () {
	vector<int> nums;
	int n;
	while(cin >> n){
		nums.push_back(n);
    }

    vector<int> newnums;
    
    for (int i=0; i<nums.size(); i++){
        if (find(newnums.begin(), newnums.end(), nums[i]) != newnums.end()){
            continue;
        } else {
            newnums.push_back(nums[i]);
        }
    }

    for (int i: newnums){
        cout << i << " ";
    }

    return 0;
}

// Time Complexity: O(n^2) due to the find function inside the loop.
// Optimization: 
// We can use an unordered_set to keep track of seen elements, so as to reduce time complexity to O(n).

int main () {
	vector<int> nums;
	int n;
	while(cin >> n){
		nums.push_back(n);
    }

    unordered_set<int> set;
    vector<int> newnums;
    
    for (int i=0; i<nums.size(); i++){
        if (set.insert[nums[i]].second){
            newnums.push_back(nums[i]);
        }
    }
    
    for (int i : newnums){
        cout << i << " ";
    }

    return 0;
}