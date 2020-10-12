# Python program to convert binary to decimal


#Function to convert binary to decimal
def binaryToDecimal(n):
    num=n;
    decimal=0;
    #Initializing base value to 1, i.e 2^0
    base = 1;
    temp = num;
    while temp:
        last_digit=temp%10;
        temp//= 10;
        decimal += last_digit * base;
        base *=  2;
    return decimal;


#Driver program to test above function
if __name__=="__main__":
    num=int(input("Enter binary number: "))
    print("Number in Decimal form: ",binaryToDecimal(num))
