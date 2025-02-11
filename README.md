# 日日是好日

請撰寫一個程式，讀取輸入，判斷該日期是否為一個合法的西元後(Anno Domini, A.D.)日期。

### 輸入格式：
輸入只有一行(row)。合法的格式是：

- 以一個符號 `#` 區隔的 3 個數字 Y, M, D
- Y, M, D 分別代表西元的年，月，日
- Y 大於等於 0，且 M、D 都必須是超過 0 的數字（M > 0 且 D > 0）

測試資料中，無論格式是否合法，輸入資料的 Y，M，D 之間一定只有一個字元。

### 輸出格式：
根據輸入行數，每一行輸出整數 0 或 1。

- `1`：表示該輸入是合法的西元後日期
- `0`：表示該日期不是合法的西元後日期

程式必須（只需要）檢查以下幾個部分，以確認日期格式是否正確：

1. 分隔符號
2. 年、月、日範圍

### Input Example 1
```
1789#5#5
```
上述前兩行分別是一正確格式表示的西元 1789 年 5 月 5 日。

### Output Example 1

上述輸入格式正確。故輸出：
```
1
```
### Input Example 2
```
1789#-5 5
```

上述日期格式的分隔符號錯誤，且月份數值錯誤。

### Output Example 2

上述輸入格式錯誤。故輸出：
```
0
```

## 解題思路

1. 檢查分隔符號是否正確（`#`）。
2. 驗證年（Y）是否大於等於 0。
3. 驗證月（M）是否在 1 至 12 範圍內。
4. 驗證日（D）是否在有效範圍內（1 到該月的最大天數）。
5. 根據以上條件判斷是否為合法的日期，並輸出 1 或 0。
