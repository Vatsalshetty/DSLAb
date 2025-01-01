void processString(const char* str, char* result)
{
int top = 0;
for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] != '#') { result[top++] = str[i];
} else if (top > 0) { top--;
}
}
result[top] = '\0';
}

bool backspaceCompare(const char *s, const char *t) { char processedS[1000];
char processedT[1000];

processString(s, processedS); processString(t, processedT);

return strcmp(processedS, processedT) == 0;
}
