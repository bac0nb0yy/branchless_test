Test to see if branchless programming is optimal for some functions in C

To see the difference with and without branch :
```make && ./diff```

<strong><h1>TO_UPPER (branch is better, the compilator optimize it better)</h1></strong>

From this :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/ae9f7a56-a234-4ff5-914a-892809e15bc6)

To this :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/06f3ebad-f4d9-4f41-b7f4-c0519c7cb2f7)

The branch version is faster, but compilator must optimize it better than my version without :(

You can edit the number of caracters to test in text.txt

Average difference :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/ca5da7fc-27ea-45a3-96f4-019501ed6d1c)


<strong><h1>LEAP_YEAR (branchless is better)</h1></strong>

From this :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/95c7c221-56cc-4ac7-984d-a5d5456c8fc2)

To this :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/90ca2fc3-2a6d-4666-b510-173898663c37)


The branchless version is faster

Average difference :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/089cc5d9-bc57-44ee-9ecf-d415edb1a2ac)
