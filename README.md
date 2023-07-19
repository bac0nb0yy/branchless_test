Test to see if branchless programming was optimal for a function like to_upper in C

To see the difference with and without branch :
make && ./diff

From this :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/ae9f7a56-a234-4ff5-914a-892809e15bc6)

To this :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/06f3ebad-f4d9-4f41-b7f4-c0519c7cb2f7)

The branch version is faster, but compilator must optimize it better than my version without :(

You can edit the number of caracters to test in text.txt

Average difference :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/ca5da7fc-27ea-45a3-96f4-019501ed6d1c)
