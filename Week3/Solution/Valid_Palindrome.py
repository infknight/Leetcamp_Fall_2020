        #125 solution 1
        l = 0
        r = len(s)-1
        while l<r:
            while(not s[l].isalnum() and l<r):
                l+=1
            while(not s[r].isalnum() and l<r):
                r-=1
            if(s[l].lower() != s[r].lower()):
                return False
            l+=1
            r-=1
        return True
        
        #125 solution 2
        if len(s) == 0:
            return True
        l = 0
        r = len(s)-1
        while l<r:
            if not s[l].isalnum():
                l+=1
            elif not s[r].isalnum():        #ensure that everytime we do l++/r++, we return to the beginning of the while loop to check condition
                r-=1
            else:
                if(s[l].lower() != s[r].lower()):
                    return False
                else:
                    l+=1
                    r-=1
        return True