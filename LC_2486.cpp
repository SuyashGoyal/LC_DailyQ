/*
Leetcode : #2486 {https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/}

    i   
s = c o a c h i n g
t = c o d i n g
    j
Working Logic: 
Step 1: take iterator i on 's' and j on 't' 
Step 2: when the pointer i & j point to the same character       :: match      :: increment both
Step 3: when the pointer i & j don't point to the same character :: mis-match  :: increment only 'i',
Step 4: check in the whole string if the character being pointed by 'j' exists in the rest of the string 's'

                  i   (7)
s = c o a c h i n g
t = c o d i n g
        j (2)
we can see that, number of characters needed to make 't' as a subsequence of 's' is :
    length of string 't' [n]- index at which 'j' is present since till that index, subsequence is present [j]
    i.e. n - j        
Step 5:  
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*append characters to s, to make t a subsequence of s
    s = c o a c h i n g
    t = c o d i n g
    s = c o a c h i n g d i n g // okay since appending at the end
    s = c o d i n g a c h i n g // cannot apppend in the middle
    */
    int appendCharacters(string s, string t) {
        int m = s.length();
        int n = t.length();

        int i=0, j = 0;
        while(i < m && j < n) {//i in s | j in t
            if(s[i] == t[j])
                j++;
            i++;
        }
        return n-j;
    }
};;