/* Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i */




string reverseWords(string str) 

    { 

        // code here

        string output;

    vector<string>st;

    int start=0;

    int len=0;

    

    //Add . at the end of string for eaisly extrct words

    // if you not use it then last word you can't extract

    str=str+'.';

    for(int i=0; i<str.size(); i++){

        // . found store in a temp string , 

        // then store temp string to a vector

        if(str[i]=='.'){

        

          string temp=str.substr(start,len);

            st.push_back(temp);

            start=i+1;

            len=0;

         

        }else{

            len++;

        }

    }

  

  reverse(st.begin(), st.end());  

    for(auto it :st){

       

output=output+it+'.';

        

    }

 

output[str.size()-1]='\0';

return output;

    } 
