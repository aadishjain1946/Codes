def replaceFile(id, image):
    fileName = image.split(".")
    outputFileName = id + "." + fileName[1]
    return (fileName[0], outputFileName)


def main():
    output = replaceFile("dog", "hibiscus.bmp")
    print("Id:", output[0], "Image:", output[1])


if __name__ == "__main__":
    main()
