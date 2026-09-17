class solution:
    def printDivisors(self, n):
        #Write your code here...
        lst=[]
        for i in range(1,(int(n**0.5))+1):
            if n%i==0:
                lst.append(i)
                if (i!=n//i):
                    lst.append(n//i)
            lst.sort()
        
        return lst
        
        pass
