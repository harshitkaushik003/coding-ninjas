#include <unordered_map>
string uniqueChar(string str) {
	// Write your code here
    unordered_map<char, int> mp;
    string temp;
    for(int i=0; i<str.length(); i++){
        if(mp.count(str[i]) == 0){
            mp[str[i]]++;
            temp += str[i];
        }
    }
    return temp;
}