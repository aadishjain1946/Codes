#include <stdio.h>
#include <string.h>
struct batsman
{
    char name[20];
} p;
char *foo(struct batsman *t)
{
    printf("@@@\n");
    strcpy(t->name, "rahul");
    return t->name;
}
int main()
{
    strcpy(p.name, "rohit");
    printf("%s %s", p.name, foo(&p));
    return 0;
}