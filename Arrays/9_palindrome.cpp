// Check if Array is Palindrome
// Check if the array reads the same forward and backward.
// Example:
// Input: [1,2,3,2,1]
// Output: Palindrome


int main () {
    vector<int> nums;
    int n;
    while(cin >> n){
        nums.push_back(n);
    }
    int a = nums.size();
    bool isPalindrome = true;
    for (int i=0; i<a/2; i++){
        if (nums[i] != nums[a-i-1]){
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome){
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}