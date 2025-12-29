#include <string.h>
char* removeDuplicates(char* s) {
    int n = strlen(s);
    int top = -1;
    for (int i = 0; i < n; i++) {
        if (top != -1 && s[top] == s[i]) {
            top--;
        } else {
            s[++top] = s[i];
        }
    }
    s[top + 1] = '\0';
    return s;
}
