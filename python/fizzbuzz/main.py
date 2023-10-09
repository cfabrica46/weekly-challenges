def main():
    for i in range (101):
        result = ""

        if i % 3 == 0 and i % 5 == 0:
            result = "fizzbuzz"

        elif i%3 == 0:
            result += "fizz"

        elif i%5 == 0:
            result += "buzz"
        else:
            result = i

        print(result)

if __name__ == "__main__":
    main()