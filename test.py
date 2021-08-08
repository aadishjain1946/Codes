def checkBracketRedundant(givenStr):

    st = []

    for ch in givenStr:

        if (ch == ')'):
            top = st[-1]
            st.pop()
            flag = True
            while (top != '('):

                if (top == '+' or top == '-' or top == '*' or top == '/'):
                    flag = False

                top = st[-1]
                st.pop()

            if (flag == True):
                return True

        else:
            st.append(ch)

    return False


def findRedundant(givenStr):
    ans = checkBracketRedundant(givenStr)
    if (ans == True):
        print("Yes")
    else:
        print("No")


if __name__ == '__main__':
    givenStr = "((a+b))"
    findRedundant(givenStr)

    givenStr = "(a+(b)/c)"
    findRedundant(givenStr)

    givenStr = "(a+b*(c-d))"
    findRedundant(givenStr)
