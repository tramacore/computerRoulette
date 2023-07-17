#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int kill = rand() % 7;
    printf("%d\n", kill);
    if (kill == 0) {
        system("delete.bat");
    } else {
        system("complete.bat");
    }
    return 0;
}