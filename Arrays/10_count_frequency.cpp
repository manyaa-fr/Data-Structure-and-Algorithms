// Count Frequency of Each Element
// Count how many times each element appears.
// Example:
// Input: [1,2,2,3,3,3]
// Output:
// 1 → 1
// 2 → 2
// 3 → 3

int main(){
    vector<int> nums;
    int n;
    while(cin >> n){
        nums.push_back(n);
    }

    unordered_map<int, int> map;

    for (int i=0; i<nums.size(); i++){
        map[nums[i]]++;
    }

    for (auto& i : map){
        cout << i.first << " -> " << i.second << endl;
    }

    return 0; 
}