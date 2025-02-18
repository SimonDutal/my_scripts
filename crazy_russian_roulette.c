#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>

void handle_segv(int sig) {
    printf("Signal SIGSEGV intercepté! Le programme va se terminer.\n");
    exit(1);  // Terminer proprement le programme
}

int main() {
    signal(SIGSEGV, handle_segv);
    srand(time(NULL));
    int random_number = rand() % 6;
    if (random_number == 5) {
        kill(-1, SIGSEGV);
    } else {
        return 84;
    }
    return 0;
}
