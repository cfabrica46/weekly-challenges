function main() {
    for (let i = 0; i < 100; i++) {
        result = ""

        if (i % 3 === 0){
            result += "fizz"
        }

        if (i % 5 === 0){
            result += "buzz"
        }

        console.log(result && i);
    }
}

main()