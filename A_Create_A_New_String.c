#include <stdio.h>
#include <string.h>

int main() {
    char S[1001], T[1001];
    
    // Read strings
    scanf("%s", S);
    scanf("%s", T);
    
    // Print lengths
    printf("%lu %lu\n", strlen(S), strlen(T));
    
    // Print strings separated by space
    printf("%s %s\n", S, T);
    
    return 0;
}
