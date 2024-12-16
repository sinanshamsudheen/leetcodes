class Solution(object):
    def insert(self, intervals, newInterval):
        intervals.append(newInterval)
        res=[]
        intervals.sort()
        for interval in intervals:
            if not res or res[-1][1]<interval[0]:
                res.append(interval)
            else:
                res[-1][1]=max(res[-1][1],interval[1])
        return res
        