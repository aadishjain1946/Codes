from cmath import sqrt


class quadrilateral:
    def __init__(self):
        self.points = [(0, 0), (0, 0), (0, 0), (0, 0)]

    def setPoints(self, i, point):
        self.points[i] = point

    def getPoints(self, i):
        return self.points[i]

    def distanceTwoPoint(self, i, j):
        distance = sqrt((self.points[i][0] - self.points[j][0])**2 +
                        (self.points[i][1] - self.points[j][1])**2)
        return distance.real


def main():
    q1 = quadrilateral()
    q1.setPoints(0, (10, 0))
    q1.setPoints(1, (40, 0))
    q1.setPoints(2, (0, 10))
    q1.setPoints(3, (0, 40))
    print("Point 1:", q1.getPoints(0))
    print("Point 2:", q1.getPoints(1))
    print("Point 3:", q1.getPoints(2))
    print("Point 4:", q1.getPoints(3))
    print("Distance between point 1 and 2:", q1.distanceTwoPoint(0, 1))


if __name__ == "__main__":
    main()
