class Solution:
    def searchRange(self, nums, target):
        first = -1  # Initialize first occurrence to -1
        last = -1   # Initialize last occurrence to -1
        
        # Iterate through the array
        for i in range(len(nums)):
            if nums[i] == target:
                if first == -1:
                    first = i  # Found the first occurrence
                last = i  # Update last occurrence
        
        # Return the result as a list
        return [first, last]
