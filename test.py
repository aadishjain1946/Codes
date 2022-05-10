def towards(li):
    output = []
    for i in range(len(li) - 1, -1, -1):
        output.append(li[i])
    return output


def main():
    output = towards(['a', 'b', 'c', 'd'])
    print("Output:", output)


if __name__ == '__main__':
    main()
    