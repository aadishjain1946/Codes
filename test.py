class processStirng:
    def __init__(self, str):
        self.str = str

    def getCharCount(self):
        result = {'b': 0, 'c': 0, 'd': 0, 'f': 0, 'g': 0, 'h': 0, 'z': 0}
        for i in self.str:
            if i in result:
                result[i] += 1
        return result


def main():
    p = processStirng(input("Enter a string: "))
    print(p.getCharCount())


if __name__ == "__main__":
    main()
