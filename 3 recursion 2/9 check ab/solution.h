bool checkAB(char input[]) {
	// Write your code here
    
    if (input[0] == '\0')
    {
        return true;
    }
    
    if (input[0] == 'a')
    {
        if (input[1] == 'b' && input[2] == 'b')
        {
            return checkAB(input+3);
        }
        else if(input[1] == 'a')
        {
            return checkAB(input+1);
        }
        
        else{
            return checkAB(input+1);
        }
    }
    
    
    return false;

}



