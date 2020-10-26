        #65 solution 
        if len(intervals)==0:
            return []
        intervals = sorted(intervals, key = lambda x: x[0])
        
        mergedIntervals=[intervals[0]]
        for cur in intervals[1:]:
            last = mergedIntervals[-1] #last interval in the merged list
            if cur[0] <= last[1]:
                last[1] = max(cur[1], last[1])
            else:
                mergedIntervals.append(cur)
        return mergedIntervals