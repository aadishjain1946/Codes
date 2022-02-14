class bankAccount:
    def __init__(self, accountNo, balance, interestRate):
        self.accountNo = accountNo
        self.balance = balance
        self.interestRate = interestRate

    def print(self):
        print("Account Number: ", self.accountNo)
        print("Balance: ", self.balance)
        print("Interest Rate: ", self.interestRate)


class bank:
    def __init__(self, accounts):
        self.accounts = accounts

    def sortAccount(self):
        sortedAccountList = sorted(self.accounts, key=lambda x: x.accountNo)
        for i in sortedAccountList:
            i.print()
            print()


def main():
    bnk = bank([
        bankAccount(1, 1000, 5),
        bankAccount(3, 2000, 5.5),
        bankAccount(10, 50000, 4.4),
        bankAccount(9, 4450, 57)
    ])
    bnk.sortAccount()


if __name__ == "__main__":
    main()
