def pe_002():
    fib = [1, 2]
    while True:
        add = fib[-1] + fib[-2]
        if add > 4000000:
            return sum(filter(lambda n: n % 2 == 0, fib))
        fib.append(add)


if __name__ == '__main__':
    print(pe_002())
