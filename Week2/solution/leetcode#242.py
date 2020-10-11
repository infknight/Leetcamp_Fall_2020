        #sort
        if(len(s) != len(t)):
            return False
        return sorted(s) == sorted(t)
        
        #hashmap
        if(len(s) != len(t)):
             return False
        dic = {}
        for i in s:
            if i not in dic:
                dic[i] = 1
            else:
                dic[i] += 1
        
        for j in t:
            if j not in dic:
                return False
            else:
                dic[j] -= 1
                if dic[j] <0:
                    return False
                
        for val in dic.values():
            if val != 0:
                return False
        
        return True
		
		#Alternative hashmap method
        if(len(s) != len(t)):
             return False
        dic = collections.defaultdict(int)
        for i in s:
            dic[i] += 1
        
        for j in t:
                dic[j] -= 1
                if dic[j] <0:
                    return False
                
        for val in dic.values():
            if val != 0:
                return False
        
        return True