#include<stdio.h>

int main(){

    printf("Content-type:text/html\n\n");
    printf("<html><head><title>Hello Progam</title></head><body>\n");
    printf("Dynamic Page\nFrom a CGI program");
    printf("</body>\n");
    printf("</html>\n");

    return 0;
}