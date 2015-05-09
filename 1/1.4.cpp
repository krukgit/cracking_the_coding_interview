#include <cstdio>
#include <cstring>

void url_safe(char* str, int n) {
  int spaces = 0;
  for (int i=0; i<n; ++i)
    if (str[i] == ' ')
      spaces++;
  for (int i=n-1, j=strlen(str)-1; i>=0; i--) {
    if (str[i] == ' ') {
      str[j--] = '0';
      str[j--] = '2';
      str[j--] = '%';
    } else {
      str[j--] = str[i];
    }
  }
}

int main() {
  char str[] = "Mr John Smith    ";
  url_safe(str, 13);
  printf("|%s|\n",str);
}
