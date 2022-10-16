//palindrome program by Deepak Khatri

//initialise palindrome
class Solt {
public:
    string breakPalin(string palin) {
      int n = palin.size();
        if(n <= 1) return "";
        
        for(int i=0; i<n/2; i++)
		{
            if(palin[i] != 'a')
			{
                palin[i] = 'a';
                return palin;
            }
        }
//palindrome last line
        palin[n-1] = 'b';
        return palin;
    }
};
