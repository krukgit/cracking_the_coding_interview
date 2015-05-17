#include <cstdio>

void zero(int **matrix, int m, int n) {
  bool *rows = new bool[n];
  bool *cols = new bool[m];
  for (int i=0; i<n; i++)
    rows[i] = true;
  for (int i=0; i<m; i++)
    cols[i] = true;

  for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
      if (matrix[i][j] == 0)
	rows[i] = cols[j] = false;

  for (int i=0; i<n; i++)
    if (!rows[i])
      for (int j=0; j<m; j++)
	matrix[i][j] = 0;

  for (int j=0; j<m; j++)
    if (!cols[j])
      for (int i=0; i<n; i++)
	matrix[i][j] = 0;
}

void print(int** matrix, int m, int n) {
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++)
      printf("%d ", matrix[i][j]);
    printf("\n");
  }
}

int main() {
  int n, m, **matrix;
  scanf("%d %d",&n, &m);
  matrix = new int*[n];
  for (int i=0; i<n; i++)
    matrix[i] = new int[m];

  for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
      scanf("%d",&matrix[i][j]);

  print(matrix, m, n);

  zero(matrix, m, n);

  print(matrix, m, n);
}
