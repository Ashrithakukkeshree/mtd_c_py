intput_value= input('enter the input string')

digits = []
for char in intput_value:
    if char.isdigit():
        digits.append(char)

digits = list(set(digits))

digits.sort(reverse=True)

even_digits = [d for d in digits if int(d) % 2 == 0]

if not even_digits:
    print(-1)
else:
    last_even_digit = even_digits[-1]
    digits.remove(last_even_digit)
    digits.append(last_even_digit)

    print(''.join(digits))
