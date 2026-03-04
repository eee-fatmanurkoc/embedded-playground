
#include <stdio.h>
#define VERSION "1.0"

void print_message(void)
{
    printf("Hello, Embedded World!\n");
}
void print_version(void)
{
    printf("Version %s\n", VERSION);
}
int main(void)
{
    print_message();
    return 0;
}
