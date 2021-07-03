# parent/super class
class parent():
    def __init__(self, parentAttr):
        self.parentAttr = parentAttr

    def method1(self):
        print("This is method 1 of parent class")


# child class 1
class child1(parent):
    def __init__(self, parentAttr, child1Attr1, child1Attr2, child1Attr3, child1Attr4):
        super().__init__(parentAttr)
        self._child1Attr1 = child1Attr1  # hidden property
        self.child1Attr2 = child1Attr2
        self.child1Attr3 = child1Attr3
        self.child1Attr4 = child1Attr4

    # overridden function
    @classmethod
    def method1(self):
        print("This is method 1 of child class 1")

    @classmethod
    def method2(self):
        print("This is method 2 of child class 1")

    @staticmethod
    def method3():
        print("This is method 3 of child class 1")

    @staticmethod
    def method4():
        print("This is method 4 of child class 1")


# child class 2
class child2(parent):
    def __init__(self, parentAttr, child2Attr1, child2Attr2, child2Attr3, child2Attr4):
        super().__init__(parentAttr)
        self._child2Attr1 = child2Attr1  # hidden property
        self.child2Attr2 = child2Attr2
        self.child2Attr3 = child2Attr3
        self.child2Attr4 = child2Attr4

    # overridden function
    @classmethod
    def method1(self):
        print("This is method 1 of child class 2")

    @classmethod
    def method2(self):
        print("This is method 2 of child class 2")

    @staticmethod
    def method3():
        print("This is method 3 of child class 2")

    @staticmethod
    def method4():
        print("This is method 4 of child class 2")


def main():
    child1Obj = child1(1, 2, 3, 4, 5)
    child1Obj.method1()
    child1Obj.method2()
    child1Obj.method3()
    child1Obj.method4()

    child2Obj = child2(6, 7, 8, 9, 10)
    child2Obj.method1()
    child2Obj.method2()
    child2Obj.method3()
    child2Obj.method4()


if __name__ == "__main__":
    main()

