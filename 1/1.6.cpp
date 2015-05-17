#include <cstdio>

int** rotate2(int** matrix, int n) {
  for (int col=0; col<n/2; col++)
    for (int row=col; row<n-col-1; row++) {
      int tmp = matrix[row][col];
      matrix[row][col] = matrix[col][n-row-1];
      matrix[col][n-row-1] = matrix[n-row-1][n-col-1];
      matrix[n-row-1][n-col-1] = matrix[n-col-1][row];
      matrix[n-col-1][row] = tmp;
    }
  return matrix;
}

int** rotate1(int** matrix, int n) {
  int** matrix2 = new int*[n];
  for (int i=0; i<n; i++)
    matrix2[i] = new int[n];

  for (int col=0; col<n; col++)
    for (int row=0; row<n; row++)
      matrix2[row][col] = matrix[col][n-row-1];

  return matrix2;
}

void print(int** matrix, int n) {
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++)
      printf("%d", matrix[i][j]);
    printf("\n");
  }
}

int main() {

  int n, **matrix;
  scanf("%d",&n);
  matrix = new int*[n];
  for (int i=0; i<n; i++)
    matrix[i] = new int[n];

  for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
      scanf("%d",&matrix[i][j]);

  int** matrix2 = rotate1(matrix, n);

  print(matrix, n);
  print(matrix2, n);

  rotate2(matrix, n);
  print(matrix, n);

  for (int i=0; i<n; i++) {
    delete [] matrix[i];
    delete [] matrix2[i];
  }
  delete [] matrix;
  delete [] matrix2;
}
