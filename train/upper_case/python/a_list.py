def upper_case(string):
    string = string.lstrip().rstrip()
    if len(string) == 0:
        return ''

    L_char = [string[0].upper()]
    i = 1
    #L_char = []
    #i = 0
    while True:
        if i >= len(string):
            break
        if string[i] != ' ':
            L_char.append(string[i])
            i += 1
        else:
            try:
                if str.isalpha(string[i+1]):
                    L_char.append(string[i+1].upper())
                elif string[i+1] == ' ':
                    pass
                else:
                    L_char.append(string[i+1])
                i += 2
            except:
                pass

    return ''.join(L_char)


if __name__ == "__main__":
    for string in ["test case",
                   "camel case method",
                   "say hello ",
                   " camel case word",
                   "",
    ]:
        print(f"upper_case(\"{string}\") = \"{upper_case(string)}\"")

