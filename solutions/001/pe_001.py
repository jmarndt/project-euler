MAX = 1000


def pe_001():
    answer = 0
    count = 1
    while count < MAX:
        if count % 3 == 0 or count % 5 == 0:
            answer += count
        count += 1
    return answer


if __name__ == '__main__':
    print(pe_001())
