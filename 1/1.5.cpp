#include <cstdio>
#include <cstring>

char* compress(char* str) {
  int n = strlen(str);
  char* c_str = new char[n+2];
  int count=1, j=0, i=0;
  while (i < n) {
    if (str[i] == str[i+1]) {
      count++;
      i++;
    } else {
      c_str[j++] = str[i];
      sprintf(c_str+j, "%d", count);
      j += strlen(c_str+j);
      count = 1;
      i += 1;
      if (j >= n) {
	delete [] c_str;
	return str;
      }
    }
  }
  return c_str;
}

int main() {
  char str[] = "aabcccccaaa";
  printf("%s\n%s\n", str, compress(str));
}
