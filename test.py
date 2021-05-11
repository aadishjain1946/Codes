# class to store book data
class Book:
    # constructor to initialize book class object
    def __init__(self, bookId, bookName, bookAuthor):
        self.bookId = bookId
        self.bookName = bookName
        self.bookAuthor = bookAuthor
        self.next = None
        self.prev = None

# booklist class to implement stack using doubly linked list
class BookLists:
    # constructor to initialize bookList class object
    def __init__(self):
        self.head = None
        self.size = 0
    # function to add book to bookList class

    def addBook(self, bookId, bookName, bookAuthor):

        if self.head is None:
            self.head = Book(bookId, bookName, bookAuthor)
        else:
            currNode = Book(bookId, bookName, bookAuthor)
            self.head.prev = currNode
            currNode.next = self.head
            currNode.prev = None
            self.head = currNode
        self.size += 1
    # function to remove book from bookList class

    def removeBook(self):

        if self.head is None:
            return None
        elif self.head.next is None:
            sudo = (self.head.bookId, self.head.bookName, self.head.bookAuthor)
            self.head = None
            return sudo
        else:
            sudo = (self.head.bookId, self.head.bookName, self.head.bookAuthor)
            self.head = self.head.next
            self.head.prev = None
            return sudo
    # function to return size of bookList

    def getListSize(self):
        return self.size
    # function to check if bookList is empty or not

    def isEmpty(self):
        if self.head is None:
            return True
        else:
            return False
    # function to print all books in the bookList

    def displayAllBooks(self):

        print("stack elements are:")
        print("TOP -> ", end="")
        sudo = self.head
        while sudo is not None:
            print("[", sudo.bookId, "-", sudo.bookName, "-",
                  sudo.bookAuthor, "]", end="<-->")
            sudo = sudo.next
        print(" NULL")
    # function to sort all book present in bookList by bookId

    def insertSortByBookId(self):
        temp = 0
        ptrLeft = None
        if (self.head == None):
            return
        while True:
            temp = 0
            currPtr = self.head
            while (currPtr.next != ptrLeft):
                if (currPtr.bookId > currPtr.next.bookId):
                    currPtr.bookId, currPtr.next.bookId = currPtr.next.bookId, currPtr.bookId
                    currPtr.bookName, currPtr.next.bookName = currPtr.next.bookName, currPtr.bookName
                    currPtr.bookAuthor, currPtr.next.bookAuthor = currPtr.next.bookAuthor, currPtr.bookAuthor
                    temp = 1
                currPtr = currPtr.next
            ptrLeft = currPtr
            if temp == 0:
                break
    # function to find book according to the book ID

    def findByBookId(self, id):
        sudo = self.head
        index = -1
        while sudo != None:
            index += 1
            if sudo.bookId == id:
                return (index, sudo.bookId, sudo.bookName, sudo.bookAuthor)
            sudo = sudo.next
    # function to find book according to the book Name

    def findByBookName(self, name):
        sudo = self.head
        index = -1
        while sudo != None:
            index += 1
            if sudo.bookName == name:
                return (index, sudo.bookId, sudo.bookName, sudo.bookAuthor)
            sudo = sudo.next


if __name__ == '__main__':
    # creating bookList object
    booksData = BookLists()
    # inserting book to booklist object
    booksData.addBook(4, "Book1", "Author1")
    booksData.addBook(5, "Book2", "Author2")
    booksData.addBook(6, "Book3", "Author3")
    booksData.addBook(7, "Book4", "Author4")

    booksData.displayAllBooks()
    print("\n* Sorting BookList elements")
    booksData.insertSortByBookId()
    print("\n* Elements of BookList after sorting\n")
    booksData.displayAllBooks()

    print("\n* Size of the Stack is ", booksData.getListSize())

    serch1 = booksData.findByBookId(6)
    print("\n* Book with bookId '6' found at index",
          serch1[0], "in bookList", "[", serch1[1], serch1[2], serch1[3], "]")
    serch2 = booksData.findByBookName("Book4")
    print("\n* Book with bookName 'Book4' found at index",
          serch2[0], "in bookList", "[", serch2[1], serch2[2], serch2[3], "]")

    print("\n* Removing element from BookList")
    print("* Removing element from BookList\n")
    booksData.removeBook()
    booksData.removeBook()
    booksData.displayAllBooks()
