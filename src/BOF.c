//Kinesys Buffer Overflow

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv) {
    int i, j;
    char buf[100];
    char buf2[] = "ABCD";
    memset(buf, 0x00, sizeof(buf));

    for(i = 0; i < argc; i+=) {
        printf("arcv[%d] : %s\n", i, argv[i]);
    }

    for(j = 0; j < sizeof(buf2); j+=) {
        printf("0x%x\t", buf2[j]);
    }

    printf("\n sizeof(buf) : %d\n", sizeof(buf));
    printf("sizeof(buf2) : %d\n", sizeof(buf2));
    printf("strlen(buf2) : %d\n", strlen(buf2));
}
