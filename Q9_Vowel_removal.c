#include<stdio.h>
#include<string.h>
void main()
{

	char str[200];
	int len, i, j;
	printf("Enter a string : ");
	gets(str);
	len=strlen(str);
	for(i=0; i<len; i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
		str[i]=='o' || str[i]=='u' || str[i]=='A' ||
		str[i]=='E' || str[i]=='I' || str[i]=='O' ||
		str[i]=='U') //condition to check for vowels
		{
			for(j=i; j<len; j++)
			{
				str[j]=str[j+1]; //logic to shift each character one place backward whenever a vowel is found
			}
		len--; //decreasing the length of the string accordingly
		}
	}
	printf("Modified string : %s",str);
}
