print("Select operation:")
print("1: Addition")
print("2: Subtraction")
print("3: Multiplication")
print("4: Division")

choice = int(input("Enter choice (1-4): "))

a = float(input("Enter first number: "))
b = float(input("Enter second number: "))

if choice == 1:
    print("Result =", a + b)
elif choice == 2:
    print("Result =", a - b)
elif choice == 3:
    print("Result =", a * b)
elif choice == 4:
    if b != 0:
        print("Result =", a / b)
    else:
        print("Error! Division by zero")
else:
    print("Invalid choice")