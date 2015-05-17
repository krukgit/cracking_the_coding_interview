#include <cstdio>
#include <cstring>

bool isRotation(char* s1, char* s2) {
  int n = strlen(s1);
  int m = strlen(s2);
  if (n != m)
    return false;
  char* tmp = new char[n*2+1];
  for (int i=0; i<n; i++)
    tmp[i] = tmp[i+n] = s2[i];
  bool result = isSubstring(s1, tmp);
  delete [] tmp;
  return result;
}
