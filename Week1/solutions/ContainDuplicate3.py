#hashmap
hashmap = {}
for num in nums:
    if(num in hashmap.keys()):
        return True
    hashmap[num] = True
return False
        