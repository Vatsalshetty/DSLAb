char* removeDigit(char* number, char digit)
{
int len = strlen(number);
for (int i = 0; i < len - 1; i++)
{
if (number[i] == digit && number[i] < number[i + 1])
{
for (int j = i; j < len - 1; j++)
{
number[j] = number[j + 1];
}
number[len - 1] = '\0'; return number;
}
}
for (int i = len - 1; i >= 0; i--)
{
if (number[i] == digit)
{
for (int j = i; j < len - 1; j++)
{
number[j] = number[j + 1];
}
number[len - 1] = '\0'; return number;
}
}

return number;
}
