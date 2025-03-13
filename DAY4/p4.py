
m = int(input('Enter the m value (start value): '))
n = int(input('Enter the value of n (end value): '))
p = int(input('Enter the value of p (increment): '))

if m > n:
    print('Value of m is greater than n')
else:
    i = m
    while i <= n:
        print(i, end=' ')
        i = i + p
