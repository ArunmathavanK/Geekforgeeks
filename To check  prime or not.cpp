class Solution:
    def isPrime (self, N):
        # code here
        if N<=1:
            return 0
        for i in range(2,N):
            if N%i==0:
                return 0
        return 1
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        ob = Solution()
        print(ob.isPrime(N))
