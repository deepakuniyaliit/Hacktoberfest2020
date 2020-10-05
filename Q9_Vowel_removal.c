#include <stdio.h>
int check_vowel(char);
int main()
{
char s[200], t[200];
int c, d = 0;
printf("Enter string:");
gets(s);  // taking input of string
for(c = 0; s[c] != '\0'; c++)
{
	if(check_vowel(s[c]) == 0) // true if the current iteration is not a vowel
	{
		t[d] = s[c]; // copying everything except vowels in another string
		d++; // increementing the siize of second string
	}
}
t[d] = '\0'; //placing a NULL character at the end of the second string
strcpy(s, t);
printf("Modified string: %s\n", t); // printing modified string
return 0;
}

// function to check if the passed character is a vowel or not
int check_vowel(char ch) 
{
if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch== 'O' || ch == 'u' || ch == 'U')
return 1;
else
return 0;
}