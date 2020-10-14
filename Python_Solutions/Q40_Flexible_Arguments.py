def sum(a, *b):
    c = a
    for i in b:
        c += i

    print(c)


sum(1, 2, 3, 4, 5, 6)


# with a single parameter


def add(*a):
    c = 0
    for i in a:
        c += i

    print(c)


add(3, 4, 5, 6, 7)
