# jacklyn_trinh_proj2
Run this code:

make
./machine
Purpose: This program simulates a basic machine language operation with addition. It reads input from a file containing commands then performs addition with the given hexadecimal values. It also detects whether or not an overflow has occurred and then displays the results.

Working Process:

The input is read line by line.
Each line is split into an operation and two hexadecimal values.
The two hexadecimal values are then stored using uint32_t.
The two values are added.
The sum is checked for overflow, which occurs when the sum is smaller than a value being added.
The inputs and results are then displayed in hexadecimal format following the example format. The detection of overflow is also displayed.
Results:

Prints the operation (ADD).
Prints the two input numbers in hexadecimal format.
Prints the results of the addition in hexadecimal format.
Prints whether or not an overflow occurred.
Correct Output: Yes, the output is correct based on the provided commands. The results match the expected outcomes, and the overflow is correctly detected when it occurs.