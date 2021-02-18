#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int n = strlen(s);
    int i, temp=0;
    for(i=0; i<n-2; i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C')
            {
                temp--;
                break;
            }
        else if(s[i]=='A' && s[i+2]=='B' && s[i+1]=='C')
            {
                temp--;
                break;
            }
        else if(s[i+1]=='A' && s[i]=='B' && s[i+2]=='C')
            {
                temp--;
                break;
            }
        else if(s[i+1]=='A' && s[i+2]=='B' && s[i]=='C')
            {
                temp--;
                break;
            }
        else if(s[i+2]=='A' && s[i]=='B' && s[i+1]=='C')
            {
                temp--;
                break;
            }
        else if(s[i+2]=='A' && s[i+1]=='B' && s[i]=='C')
            {
                temp--;
                break;
            }
    }
    if(temp!=0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;

}