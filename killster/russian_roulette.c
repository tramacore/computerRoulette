#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int kill = rand() % 7;
    printf("Тебе выпало : %d\n", kill);
    if (kill == 0) {
        printf("Тебе не повезло ((( \n");
        system("./delete.sh");
    } else {
        printf("Норм, тебе повезло\n");
        system("./complete.sh");
    }
    return 0;
}