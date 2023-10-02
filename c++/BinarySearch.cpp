/*
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
 
Constraints:

1 <= nums.length <= 104
-104 < nums[i], target < 104
All the integers in nums are unique.
nums is sorted in ascending order.

*/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int target, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
      return mid;
    if (arr[mid] > target)
      return binarySearch(arr, target, low, mid - 1);
    else
    return binarySearch(arr, target, mid + 1, high);
  }
  return -1;
}

int main() {
  int arr[] = {3, 4, 5, 6, 7, 8, 9};
  int target = 8;
  int high = sizeof(arr)/sizeof(arr[0]);
  int result = binarySearch(arr, target, 0, high-1);
  if (result == -1)
    printf("Element not found");
  else
    printf("Element is found in %d position", result);
  return 0;
}