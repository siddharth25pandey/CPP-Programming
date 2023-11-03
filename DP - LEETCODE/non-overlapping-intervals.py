# 435. Non-overlapping Intervals
# https://leetcode.com/problems/non-overlapping-intervals

def eraseOverlapIntervals(intervals):
    if not intervals:
        return 0
    intervals.sort()
    count = 0

    new_interval = intervals[0]
    for i in range(1, len(intervals)):
        if intervals[i][0] < new_interval[1]:
            count += 1
            new_interval = [min(new_interval[0], intervals[i][0]),
                            min(new_interval[1], intervals[i][1])]
        else:
            new_interval = intervals[i]
    return count




list = [[1,2],[2,3],[3,4],[1,3]]
ans = eraseOverlapIntervals(list)
print(ans)



# Example 1:
#
# Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
# Output: 1
# Explanation: [1,3] can be removed and the rest of the intervals are non-overlapping.
# Example 2:
#
# Input: intervals = [[1,2],[1,2],[1,2]]
# Output: 2
# Explanation: You need to remove two [1,2] to make the rest of the intervals non-overlapping.
# Example 3:
#
# Input: intervals = [[1,2],[2,3]]
# Output: 0
# Explanation: You don't need to remove any of the intervals since they're already non-overlapping.
