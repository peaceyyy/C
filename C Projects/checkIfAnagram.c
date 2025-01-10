#include <stdio.h>
#include <stdbool.h>
#define CHAR_MAX 255

int getStrLen(char *c){

    int len;
    for (len = 0; c[len] != '\0'; len++);
    return len;
};

bool isAnagram(char* s, char* t) {

    int sLen, tLen;
    int chars[CHAR_MAX];

    for(int i = 0; i < CHAR_MAX; i++) chars[i] = 0; // set all chars in the array to 0 (initialize the array)

    sLen = getStrLen(s);
    tLen = getStrLen(t);

    for(int i = 0; i < sLen; i++) chars[s[i]]++; // count the occurrences of each char in the string
    for(int i = 0; i < tLen; i++) chars[t[i]]--; // cancel out the matches of the occurrences

    for(int i = 0; i < CHAR_MAX; i++){    //iterate through the chars array and check if all the chars are 0
        if(chars[i] != 0) return false;
    }

    return true;

} 



int main()
{
    printf("%d", isAnagram("anagram", "nagarm"));  
    return 0;

}