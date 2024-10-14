#include<stdio.h>
#include<string.h>

int main()
{
    char s[101];
    fgets(s, sizeof(s), stdin);
    size_t len = strlen(s);
    if(s[len-1] == '\n') {
        s[len-1] = '\0';
        len--; 
    }
    
    int small = 0;

    for(int i = 0; i < len; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') small++;
    }
    
    if(small >= len - small) {
        for(int i = 0; i < len; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
    } else {
        for(int i = 0; i < len; i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;
            }
        }
    }
    
    printf("%s\n", s);
    return 0;
}
