class solution:
    def printDigit(self, n):
        #Write your code here...
        #rev=0
        while n>0:
            dig=n%10
            #rev=rev*10+dig
            print(dig)
            n=n//10
        return
        
        pass
