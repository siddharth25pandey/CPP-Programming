/*
Write a program to check if two given strings are anagrams of each other. 
An anagram of a string is another string that contains the same characters, only the order of characters may be different. 
eg- “FRIED” and “FIRED” are an anagrams of each other.
*/


// C++ program to check if two strings
// are anagrams of each other
#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256
 
/* Function to check whether two
   strings are anagram of each other */
bool checkAnagram(char* str1, char* str2)
{
    // Create 2 count arrays and initialize
    // all values as 0
    int count1[NO_OF_CHARS] = {0};
    int count2[NO_OF_CHARS] = {0};
    int i;
 
    // For each character in input strings,
    // increment count in the corresponding
    // count array
    for (i = 0; str1[i] && str2[i]; i++)
    {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
 
    // If both strings are of different length.
    // Removing this condition will make the
    // program fail for strings like "aaca"
    // and "aca"
    if (str1[i] || str2[i])
        return false;
 
    // Compare count arrays
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count1[i] != count2[i])
            return false;
 
    return true;
}
 
// Driver code
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    bool result = checkAnagram(s1, s2);
    if(result){
        cout<<s1<<" and "<<s2<<" are anagrams.";
    }else{
        cout<<s1<<" and "<<s2<<" are not anagrams.";
    }
    return 0;
}
