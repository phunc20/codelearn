def upper_case(string):
    import os
    #cmd = f"echo {string} | sed 's/^\([a-z]\)/\U\1/;s/ \+\([a-zA-Z]\)/\U\1/g'"
    cmd = rf"echo {string} | sed 's/^\([a-z]\)/\U\1/;s/ \+\([a-z]\)/\U\1/g'"
    ## Note. We have to use the r"" to escape the "\U" unicode syntax.
    stdout = os.popen(cmd).read().rstrip()
    return  stdout

if __name__ == "__main__":
    for string in ["test case",
                   "camel case method",
                   "say hello ",
                   " camel case word",
                   "",
    ]:
        print(f"upper_case(\"{string}\") = \"{upper_case(string)}\"")
