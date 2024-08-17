def reverse_string(string):
    return ' '.join(string.split(" ")[::-1])

string = 'I am good'
reversed_string = reverse_string(string)
print(reversed_string)
