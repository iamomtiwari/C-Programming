#include <stdio.h>
#include <string.h>
int get_string_length(char * str){
    int offset=0;
    while (str[offset]!=0){
        offset++;
    }
    return offset;
}

int main(int argc, char **argv){
    char *str1="Hello World!";
    char str2[]="Hello World!";
    printf("Hello World!\n");
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%s has length %d bytes\n",str1, get_string_length(str1));
    printf("%s has length %lu bytes\n",str1, strlen(str1));
}
