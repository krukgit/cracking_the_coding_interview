#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <algorithm>

using namespace std;

bool all_unique(const char* str) {
  if (str == 0 || strlen(str) == 0)
    return true;
  if (strlen(str) > 128)
    return false;

  bool arr[128];
  for (int i=0; i<128; ++i)
    arr[i] = false;

  while (*str != '\0') {
    if (arr[*str])
      return false;
    else
      arr[*str] = true;
    str++;
  }
  return true;
}

bool all_unique2(char* str) {
  int n = strlen(str);
  sort(str, str+n);
  for (int i=1; i<n; ++i)
    if (str[i] == str[i-1])
      return false;
  return true;
}

int main() {
  char str[] = "";
  char str2[] = "alqwerty";
  char str3[] = "ala";
  char str4[] = "zcl_A@#$%12~`k";

  assert( all_unique(str) == true );
  assert( all_unique(str2) == true );
  assert( all_unique(str3) == false );
  assert( all_unique(str4) == true );

  assert( all_unique2(str) == true );
  assert( all_unique2(str2) == true );
  assert( all_unique2(str3) == false );
  assert( all_unique2(str4) == true );
}
