#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char line[1001];
    if (fgets(line, sizeof(line), stdin) != NULL) 
    {
        line[strcspn(line, "\n")] = '\0';

        char* token = strtok(line, " ");
        char* longest = token;
        while (token != NULL) {
            if (strlen(token) > strlen(longest))
            {
                longest = token;
            }
            token = strtok(NULL, " ");
        }
        printf("%s\n%d\n", longest, (int)strlen(longest));
    }
    return 0;
}