class solution:
    def isPalindrome(self, n):
        # Write Your Code Here...
        n1=n
        rev=0
        while n1!=0:
            dig=n1%10
            rev=rev*10+dig
            n1=n1//10
        #print(rev)
        #print(n)
        if(n==rev):
            return True
        else:
            return False
        
        
        pass
