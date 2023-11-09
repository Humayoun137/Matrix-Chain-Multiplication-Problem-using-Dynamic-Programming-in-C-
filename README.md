# Matrix-Chain-Multiplication-Problem-using-Dynamic-Programming-in-C++

The Matrix Chain Multiplication Problem is a classic optimization problem in dynamic programming where the goal is to find the most efficient way to multiply a given sequence of matrices. Matrix multiplication is associative but not commutative, meaning that the order in which matrices are multiplied affects the final result. The goal is to find the optimal parenthesization of the matrices, which minimizes the number of scalar multiplications required to compute the product.
To solve the Matrix Chain Multiplication Problem using dynamic programming in C/C++, you can create a 2D array, say dp[i][j], where dp[i][j] represents the minimum number of scalar multiplications needed to compute the product of matrices from the i-th matrix to the j-th matrix in the given sequence. The diagonal elements of the dp array (dp[i][i]) are initialized to 0, as a single matrix does not require any multiplication.
You then iterate over the chain length from 2 to the total number of matrices. For each chain length, iterate through the matrices and calculate the minimum cost of parenthesization by considering all possible splits. The formula for updating the dp array looks like this:
dp[i][j] = min(dp[i][k] + dp[k+1][j] + dimensions[i-1] * dimensions[k] * dimensions[j])

Here, dimensions[i-1] represents the number of rows of the i-th matrix, dimensions[k] represents the number of columns of the k-th matrix, and dimensions[j] represents the number of columns of the j-th matrix.
After filling up the dp array, the minimum number of scalar multiplications required to compute the product of all matrices is stored in dp[1][n], where n is the total number of matrices in the given sequence.
This dynamic programming approach ensures an optimal solution to the Matrix Chain Multiplication Problem by breaking down the problem into smaller subproblems and storing their solutions, avoiding redundant calculations and providing an efficient way to find the minimum number of scalar multiplications needed for matrix multiplication.


