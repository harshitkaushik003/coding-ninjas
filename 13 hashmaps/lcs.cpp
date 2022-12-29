#include <unordered_map>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    // Your Code goes here
    unordered_map <int , int>  mp;
    vector <int> ans;
    
    for(int i=0; i<n; i++){
        mp[arr[i]] = i;
    }
    
    for(int i=0; i<n; i++){
        vector<int> temp;
        if(mp.count(arr[i] - 1) == 0){
            temp.push_back(arr[i]);
            int t=0;
            while(mp.count(arr[i] + t)){
                temp.push_back(arr[i] +  t);
                t++;
            }if(temp.size() > ans.size()){
                ans = temp;
            }
        }
    }
    int n1 = ans[0];
    int n2 = ans[ans.size()-1];
    ans.clear();
    ans.push_back(n1);
    ans.push_back(n2);
    return ans;
}