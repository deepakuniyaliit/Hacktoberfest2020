class Error(Exception):
    pass
class withdgreat(Error):
    pass


bal = 20000


try:
    withd = int(input("Enter Amount you want to withdraw"))
    if bal<withd:
        raise withdgreat
    else:
        bal = bal-withd
        print("New Balance is",bal)

except withdgreat:
    print("Not Enough Balance")
except ValueError as e:
    print("Invalid Input")
except Exception as e:
    pass
finally:
    print("Thanks...Good Bye!!!")
