my_name = 'ashritha'

print(my_name)
print(my_name.upper())
try:
    print(my_name.index(sub_string))
    print ('next stmt')
except TypeError:
    print ('may be you have not enter a string')
except ValueError:
    print(f'the sub-string\'tt\' not found in {my_name}')
except :
    print('okay')
print(my_name.capitalize)
print(my_name.find('tt'))


