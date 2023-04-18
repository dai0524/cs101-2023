#include <stdio.h>
#include <time.h>

void hanoi(int n, char from, char to, char aux, FILE *fp) {
    if (n == 1) {
        time_t now = time(NULL);
        fprintf(fp, "%d (%s) : 1P from %c to %c\n", (int)now, ctime(&now), from, to);
        return;
    }
    hanoi(n-1, from, aux, to, fp);
    time_t now = time(NULL);
    fprintf(fp, "%d (%s) : %dP from %c to %c\n", (int)now, ctime(&now), n, from, to);
    hanoi(n-1, aux, to, from, fp);
}

int main() {
    int n = 20;
    char from = 'A', to = 'C', aux = 'B';
    FILE *fp = fopen("hanoi.txt", "w");
    if (fp == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }
    time_t start_time = time(NULL);
    fprintf(fp, "Start time: %s", ctime(&start_time));
    hanoi(n, from, to, aux, fp);
    time_t end_time = time(NULL);
    fprintf(fp, "End time: %s", ctime(&end_time));
    fclose(fp);
    return 0;
}
