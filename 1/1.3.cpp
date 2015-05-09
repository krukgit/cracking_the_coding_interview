#include <cstdio>
#include <cstring>

bool is_permutation(char* a, char* b) {
  if (strlen(a) != strlen(b))
    return false;
  int count[128];
  for (int i=0; i<128; ++i) {
    count[i] = 0;
  }
  while (*a) {
    ++count[*a];
    ++a;
  }
  while (*b) {
    --count[*b];
    ++b;
  }
  for (int i=0; i<128; ++i)
    if (count[i] != 0)
      return false;
  return true;
}

int main() {
  char str1[256], str2[256];
  scanf("%s",str1);
  scanf("%s",str2);

  printf("%d\n", is_permutation(str1, str2));
}
