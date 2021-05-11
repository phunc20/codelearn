def foo():
    i = 100
    def bar():
        i -= 1
        return i
    return bar()


def f():
    ii = 100
    def g():
        ii -= 1
    g()
    return ii

if __name__ == "__main__":
    print(f"foo() = {foo()}")
    print(f"f() = {f()}")

