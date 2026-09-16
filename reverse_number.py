class solution:
    def reverseNumber(self, N):
        #Write your code here...
        rev=0
        while N>0:
            dig=N%10
            rev=rev*10+dig
            N=N//10
        return rev
        
        pass
