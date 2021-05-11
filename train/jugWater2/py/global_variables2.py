def foo():
    i = 100
    def bar():
        #global i
        i -= 1
        return i
    bar()
    return i


if __name__ == "__main__":
    print(f"foo() = {foo()}")

