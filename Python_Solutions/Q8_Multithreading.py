from threading import *
from time import sleep
class A(Thread):
    def run(self):
        for i in range(5):
            print("Hello")
            sleep(1)


class B(Thread):
    def run(self):
        for i in range(5):
            print("World")
            sleep(1)

a=A()
b=B()

a.start()
sleep(0.5)
b.start()
a.join()
b.join()
print("Bye")
