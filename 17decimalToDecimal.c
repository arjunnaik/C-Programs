
#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char s[10];
    
    scanf("%s",&s);
int ans=0;
int j=0;
    for (int i=strlen(s)-1; i>=0; i--)
    {int val;
        if (s[i]>='0' && s[i]<='9')
        {
            val=s[i]-'0';
        }
        
        
        if (s[i]>='a' && s[i]<='g')
        val=s[i]-'a'+10;
        
        ans+=val*pow(17,j++);
        
        
        
    }
    printf("%d",ans);

 
     return 0;
}
