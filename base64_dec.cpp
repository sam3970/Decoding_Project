#include<stdio.h>
#include<string.h>
 
#define BAD     -1
#define DECODE64(c)  (isascii(c) ? base64val[c] : BAD)
 
static const char base64digits[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
char base64val[128];
 
void main()
{
    char    in_password[20+1], out_password[100+1];
    int    i;
 
    for (i=0; i<128; i++) {
        base64val[i] = BAD;
    }
 
    for (i=0; i<64; i++) {
        base64val[base64digits[i]] = i;
    }
 
    strcpy(in_password, "ABCDEFGHIJKL1234");
    memset(out_password, 0x00, sizeof(out_password));
    encode_base64(out_password, in_password, strlen(in_password));
    printf("in=(%s), %d, out=(%s), %dn", 
    in_password, strlen(in_password), out_password, strlen(out_password));
 
    exit(1);
}
