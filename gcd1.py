class solution:
    def gcd(self, A, B):
        #Write your code here
        g=1
        for i in range(1,min(A,B)+1):
            if A%i==0 and B%i==0:
                g=i
        return g
pass        
