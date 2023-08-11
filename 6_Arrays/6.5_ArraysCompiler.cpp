// To access each element of an array, the address of
// that element must be known, but memory allocation
// happens only in run time. So there is a formula that
// the compilers use to access each address, based on
// the first address (Lo) of an array.

// A[m];
// Addr(A[i]) = Lo + i * w;
// This formula sums the first address of the array (Lo)
// with the multiplication of the index given (i) by the
// size of the data type (w). Resulting in the address
// of the given index.

// In 2D Arrays, each element can be stored by Row Major
// Mapping or by Column Major Mapping. In Row Major,
// the elements are stored linearly row by row. In Column
// Major they are stored column by column.
// Row -> A[0][0], A[0][1], A[0][2], A[0][3]
// Column -> A[0][0], A[1][0], A[2][0]

// A[m][n];
// Addr(A[i][j]) = Lo + (i*n + j) * w;
// Formula to calculate the address of Row Major Mapping
// where (n) is the number of columns.

// A[m][n];
// Addr(A[i][j]) = Lo + (j*m + i) * w;
// Formula to calculate the address of Row Major Mapping
// where (m) is the number of rows.

// A[d1][d2][d3];
// Addr(A[i1][i2][i3]) = Lo + (i1*d2*d3 + i2*d3 + i3) * w;
// 3D Arrays formula.