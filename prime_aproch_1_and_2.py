#approch 1 ------ O(n)
class solution:
    def isPrime(self, n):
        # Write Your Code Here...
        count=0
        for i in range(2,n):
            if n%i==0:
                count+=1
        return count==0
        pass

  #approch 2 ------- O(root(n))
  class solution:
    def isPrime(self, n):
        # Write Your Code Here...
        count=0
        for i in range(1,int(n**0.5)+1):
            if n%i==0:
                count+=1
                if (i!=n//i):
                    count+=1
        return count==2
        pass
