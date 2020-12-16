## [https://codelearn.io/training/detail/4538](https://codelearn.io/training/detail/4538)

A contiguous subarray of array A is a subset of array A consecutive elements.

Given an array of integers inputArray, find the contiguous subarray which has the maximum sum. Return that sum.

Example

For inputArray = [-1, 7, -2, 3, 4, 0, 1, -1], the output should be maxSubarray(inputArray) = 13.
It is the sum of the subarray [7, -2, 3, 4, 0, 1] and no other contiguous subarray has a larger sum.

For inputArray = [-1, -2, -5, -1], the output should be
maxSubarray(inputArray) = 0.
The contiguous subarray with the largest sum is [], because all others will have negative sum.

Input/Output

[execution time limit] 0.5 seconds 

[input] array.integer inputArray

Guaranteed constraints:
1 ≤ inputArray.length ≤ 10000,
-10000 ≤ inputArray[i] ≤ 10000.

[output] integer

The maximum contiguous subarray sum.


