def main():
    word1, word2 = input("Enter words: ").split(" ")
    if word1 == word2:
        print("Super Anagram!")
    else:
        print("Huh?")


if __name__ == "__main__":
    main()
