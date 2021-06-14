def pe_001():
    return sum(filter(lambda n: (n % 3 == 0 or n % 5 == 0), range(1, 1000)))


if __name__ == '__main__':
    print(pe_001())
