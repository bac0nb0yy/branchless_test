Test to see if branchless programming is optimal for some functions in C

To see the difference with and without branch :
```make && ./diff```

<strong><h1>TO_UPPER (one if)</h1></strong>

From this :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/c6474f0b-d287-47c9-b652-1c553b4b732c)

To this :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/93c1d7f0-5166-45c8-a763-037c56c8cfd9)


You can edit the number of caracters to test in text.txt

Average difference :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/e27831d1-47e8-4ca5-9fd4-eb7b530a6f71)



<strong><h1>LEAP_YEAR (nested if)</h1></strong>

From this :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/95c7c221-56cc-4ac7-984d-a5d5456c8fc2)

To this :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/90ca2fc3-2a6d-4666-b510-173898663c37)


Average difference :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/089cc5d9-bc57-44ee-9ecf-d415edb1a2ac)


<strong><h1>ROT13 (if and else if)</h1></strong>

From this :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/69f4d934-bef2-4483-b748-2ba49adfbcc1)

To this :

![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/7a240c8f-2d6f-4c5c-b6fe-f7876a4e0c13)


Average difference :


![image](https://github.com/bac0nb0yy/branchless_test/assets/85128494/1257af03-6f5d-4368-8026-1e786c963c1e)
