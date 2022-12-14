#include"stdio.h"
void main()
{
    char c;
     printf("Enter any alphabet=");
     scanf("%c",&c);
     if (c=='e'||c=='E'||c=='A'||c=='a'||c=='u'||c=='U'||c=='i'||c=='I'||c=='u'||c=='U')
     {
     printf("Character is vowel");
     }
     else
     {
         printf("Character is consonant");
     }
}