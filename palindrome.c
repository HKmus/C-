#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//this recursive program says if a string is palindrome or not.

//function declaration
bool isPalRec(char str[],int s, int e);
bool isPalindrome(char str[]);

int main(){
    char str[20];
    printf("------[this recursive program says if a string is palindrome or not]------\n\n");
    printf("type a string: ");
    scanf("%s",str);
    printf("\n");

    if (isPalindrome(str))
    printf("this string is palindrome");
    else
    printf("this string is not palindrome");

    return 0;
}

// A recursive function that
// check a str[s..e] is
// palindrome or not.
bool isPalRec(char str[],int s, int e){
    // If there is only one character
    if (s == e)
    return true;

    // If first and last
    // characters do not match
    if (str[s] != str[e])
    return false;

    // If there are more than
    // two characters, check if
    // middle substring is also
    // palindrome or not.
    if (s < e + 1)
    return isPalRec(str, s + 1, e - 1);

    return true;
}

bool isPalindrome(char str[]){
int n = strlen(str);

// An empty string is
// considered as palindrome
if (n == 0)
    return true;

return isPalRec(str, 0, n - 1);
}
