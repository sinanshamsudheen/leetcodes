
def maxSumSubarray(arr):
    res = arr[0]
    maxEnd = arr[0]
    for i in range(1, len(arr)):
        maxEnd = max(maxEnd + arr[i], arr[i])
        res = max(maxEnd, res)
    return res

arr = [2, 3, -8, 5, 7, 1]
print(maxSumSubarray(arr))