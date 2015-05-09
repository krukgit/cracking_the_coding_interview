#include <cstring>
#include <algorithm>

void reverse(char* str) {
  int n = std::strlen(str), a;
  for (int i=n/2-1; i>=0; --i) {
    a = str[i];
    str[i] = str[n-i-1];
    str[n-i-1] = a;
  }
}

void reverse2(char* str) {
  int n = std::strlen(str);
  for (int i=0, j=n-1; i<j; ++i, --j)
    std::swap(str[i], str[j]);
}

int main()
{
  char str1[] = "ala ma kota a kot ma ale ala go kocha a kot ja wcale";
  char str2[] = "1234567890";
  char str3[] = "";
  char str4[] = "a";
  reverse(str1);
  reverse(str2);
  reverse(str3);
  reverse(str4);
  printf("%s\n%s\n%s\n%s\n", str1, str2, str3, str4);
  reverse2(str1);
  reverse2(str2);
  reverse2(str3);
  reverse2(str4);
  printf("%s\n%s\n%s\n%s\n", str1, str2, str3, str4);
}
