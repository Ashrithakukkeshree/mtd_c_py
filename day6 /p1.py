
n = int(input('Enter a number less than 20: '))

for i in range(1, n + 1):
    print(' ' * (n - i) + '#' * i)  

