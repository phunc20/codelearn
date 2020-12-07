## Have to give the link `-lm`
For the `sqrt` function and `<math.h>` to work, one has to compile with the option **`-lm`**.

```bash
~/.../train/redundancy-number/c ❯❯❯ gcc 04_sol.c
/usr/bin/ld: /tmp/ccFnm9z8.o: in function `is_redundant':
04_sol.c:(.text+0x12a): undefined reference to `sqrt'
collect2: error: ld returned 1 exit status
~/.../train/redundancy-number/c ❯❯❯ gcc 03_sqrt.c
~/.../train/redundancy-number/c ❯❯❯ ./a.out
sqrt(4) = 1164310776
sqrt(4) = 2.000000
sqrt(3) = -1815829856
~/.../train/redundancy-number/c ❯❯❯ gcc 04_sol.c -lm
~/.../train/redundancy-number/c ❯❯❯ ./a.out
redundancy_number(6) = 12 (should be 12)
redundancy_number(65) = 66 (should be 66)
redundancy_number(858) = 858 (should be 858)
redundancy_number(90) = 90 (should be 90)
redundancy_number(8664239) = 8664240 (should be 8664240)
redundancy_number(9124812) = 9124812 (should be 9124812)
~/.../train/redundancy-number/c ❯❯❯
```

**(?)** Why `03_sqrt.c` doesn't require `-lm`?
```bash
~/.../train/redundancy-number/c ❯❯❯ gcc 03_sqrt.c
~/.../train/redundancy-number/c ❯❯❯ ./a.out
sqrt(4) = 1195159928
sqrt(4) = 2.000000
sqrt(3) = -1805139296
~/.../train/redundancy-number/c ❯❯❯
```



