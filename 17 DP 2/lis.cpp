int longestIncreasingSubsequence(int* input, int n) {
	// Write your code here
	int *output = new int [n];
	output[0] = 1;
	
	for(int i=1; i<n; i++){
		output[i] = 1;
		for(int j=i-1; j>=0; j--){
			if(input[j] >= input[i]){
				continue;
			}
			int possibleans = output[j] + 1;
			if(output[i] < possibleans){
				output[i] = possibleans;
			}
		}
	}

	int best = 0;
	for(int i=0; i<n; i++){
		if(output[i] > best){
			best = output[i];
		}
	}
	return best;
}