input_value = input('Enter the input string: ')

digits = []
for char in input_value:
    if char.isdigit():
        digits.append(char)

digits = list(set(digits))
digits.sort(reverse=True)
even_digits = [d for d in digits if int(d) % 2 == 0]
if not even_digits:
    print(-1)
else:
    even_digits.sort(reverse=True)  
    largest_even_number = ''.join(even_digits)
    
    print(largest_even_number)
