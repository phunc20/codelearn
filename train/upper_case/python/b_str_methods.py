def upper_case(string):
    return  ''.join(s.capitalize() for s in string.split())

if __name__ == "__main__":
    for string in ["test case",
                   "camel case method",
                   "say hello ",
                   " camel case word",
                   "",
    ]:
        print(f"upper_case(\"{string}\") = \"{upper_case(string)}\"")

