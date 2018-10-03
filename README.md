# act_icma
* Date difference in years according to the **Actual/Actual ICMA** daycount method
* Synonyms: Act/Act ICMA, Actual/Actual ICMA, ISMA-99, Act/Act ISMA


## ISO 20022 -- A006

    "Method whereby interest is calculated based on the actual number of accrued days and the assumed number of days in a year, that is, the actual number of days in the coupon period multiplied by the number of interest payments in the year. If the coupon period is irregular (first or last coupon), it is extended or split into quasi interest periods that have the length of a regular coupon period and the computation is operated separately on each quasi interest period and the intermediate results are summed up."

[link](https://www.iso20022.org/15022/uhb/mt565-16-field-22f.htm)

## Links
* https://www.isda.org/a/NIJEE/ICMA-Rule-Book-Rule-251-reproduced-by-permission-of-ICMA.pdf

### Installation
```
clib install hcnn/act_icma
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/act_icma": "0.1.0"
        ...
```

### Test and Demo
Download, compile, and run [test.c](https://github.com/hcnn/act_icma/blob/master/test.c) and [demo.c](https://github.com/hcnn/act_icma/blob/master/demo.c)

```
git clone git@github.com:hcnn/act_icma.git
cd act_icma
make deps
make validate
make showcase
```
