#include <stdio.h>
#include <stdio.h>

int main() {
    char str1[100],str2[100];
    printf("Enter a string : ");
    gets(str1);
    strcpy(str2,str1);
    printf("Copied string : %s\n", str2);
    return 0;
    
}
