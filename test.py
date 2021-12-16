operators = ["+", "-", "*", "/"]


def validatExpression(inputExp):
    exp = []
    countOp = 0
    countEx = 0
    for i in range(len(inputExp)):
        if len(exp) == 0 or inputExp[i] not in operators:
            if len(exp) == 0 or exp[-1] in operators:
                exp.append(inputExp[i])
                countEx += 1
            else:
                return False
        elif len(exp) != 0 and inputExp[i] in operators:
            if len(exp) != 0 and exp[-1] in operators:
                return False
            else:
                exp.append(inputExp[i])
                countOp += 1
    if countEx > countOp:
        return True
    else:
        return False


def main():
    inputExp = input()
    isvalid = validatExpression(inputExp)
    if isvalid == False:
        print(inputExp, "is a mathematical false expression.")
    else:
        print(inputExp, "is a mathematical true expression.")


main()
