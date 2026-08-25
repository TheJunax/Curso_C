#include <stdio.h>

int main() {
    char message[200];
    int n;
    fgets(message, 200, stdin);
    // Remove newline
    for (int i = 0; message[i]; i++) { if (message[i] == '\n') { message[i] = 0; break; } }
    scanf("%d", &n);

    for(int j=0; j<n; j++){
        printf("%s\n",message);
    }
    return 0;
}
