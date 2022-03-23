N = int(input("Enter n: "))


def printNQueenSolution(chessBoard):
    for i in range(N):
        for j in range(N):
            print(chessBoard[i][j], end=" ")
        print()


def safeMoveCheck(chessBoard, numRow, numCol):

    for i in range(numCol):
        if chessBoard[numRow][i] == 1:
            return False

    for i, j in zip(range(numRow, -1, -1), range(numCol, -1, -1)):
        if chessBoard[i][j] == 1:
            return False

    for i, j in zip(range(numRow, N, 1), range(numCol, -1, -1)):
        if chessBoard[i][j] == 1:
            return False

    return True


def nQueenProblemUtil(chessBoard, numCol):

    if numCol >= N:
        return True

    for i in range(N):

        if safeMoveCheck(chessBoard, i, numCol):

            chessBoard[i][numCol] = 1

            if nQueenProblemUtil(chessBoard, numCol + 1) == True:
                return True

            chessBoard[i][numCol] = 0

    return False


def main():
    chessBoard = [[0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0]]

    if nQueenProblemUtil(chessBoard, 0) == False:
        print("No Solution!!")
        return

    printNQueenSolution(chessBoard)


if __name__ == "__main__":
    main()
