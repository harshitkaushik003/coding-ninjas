#include<string>
using namespace std;
int editDistance(string s1, string s2,  int **output){
	int m = s1.size();
	int n = s2.size();
	if(m==0 || n==0){
		return max(m,n);
	}
	int ans;
	if(output[m][n]!=-1){
		return output[m][n];
	}

	if(s1[0] == s2[0]){
		ans = editDistance(s1.substr(1), s2.substr(1),output);
	}else{
		int a = editDistance(s1, s2.substr(1), output);
		int b = editDistance(s1.substr(1), s2, output);
		int c = editDistance(s1.substr(1), s2.substr(1), output);
		ans = 1 + min(a, min(b,c));
	}
	output[m][n] = ans;
	return ans;

	
}
int editDistance(string s1, string s2)
{
	//Write your code here
	int m = s1.size();
	int n = s2.size();
	int **output = new int*[m+1];
	for(int i=0; i<m+1; i++){
		output[i] = new int[n+1];
		for(int j=0; j<n+1; j++){
			output[i][j] = -1;
		}
	}

	return editDistance(s1, s2,output);
}