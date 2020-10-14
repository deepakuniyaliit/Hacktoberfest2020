binary = input("Enter a binary number:")
def BinaryToDecimal(binary):
    decimal = 0
    for digit in binary:
        decimal = decimal*2 + int(digit)
    print(f'The decimal value is: {decimal}')

BinaryToDecimal(binary)
