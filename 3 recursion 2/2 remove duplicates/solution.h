void removeConsecutiveDuplicates(char *input) {
	
    if (input[0] == '\0')
    {
        return;
    }
    
    removeConsecutiveDuplicates(input + 1);
    
    if (input[0] == input[1])
    {
        int i = 0;
        for(;input[i] != '\0'; i++)
        {
            input[i] = input[i+1];
        }
        
        //removeConsecutiveDuplicates(input);
    }
}