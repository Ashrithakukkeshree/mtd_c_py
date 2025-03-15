def max_earning(n, p, prices):
    prices.sort() 
    earnings = sum(abs(prices[i]) for i in range(min(p, n)) if prices[i] < 0)
    print(earnings)

n, p = map(int, input().split()) 
prices = list(map(int, input().split()))  
max_earning(n, p, prices)
