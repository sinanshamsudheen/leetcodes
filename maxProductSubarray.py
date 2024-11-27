n = len(arr)
        max_end = arr[0]  # Maximum product ending at the current position
        min_end = arr[0]  # Minimum product ending at the current position
        result = arr[0]   # Overall maximum product

        for i in range(1, n):
            # If current element is negative, swap max_end and min_end
            if arr[i] < 0:
                max_end, min_end = min_end, max_end

            # Update max_end and min_end
            max_end = max(arr[i], max_end * arr[i])
            min_end = min(arr[i], min_end * arr[i])

            # Update the overall result
            result = max(result, max_end)

        return result