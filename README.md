
---

### 🔍 **Code Breakdown**

```cpp
int T;
cin >> T;
```

* Reads the number of **test cases** (`T`).

---

```cpp
while (T--) {
    int N, count = 0;
    cin >> N;
```

* For each test case:

  * `N` is the number of problems.
  * `count` is initialized to `0` to keep track of difficult problems.

---

```cpp
for (int i = 0; i < N; ++i) {
    int difficulty;
    cin >> difficulty;
    if (difficulty >= 1000) {
        count++;
    }
}
```

* Loops over `N` problems and:

  * Reads the difficulty of each.
  * Increments `count` if the difficulty is `>= 1000`.

---

```cpp
cout << count << endl;
```

* Outputs the number of problems with difficulty `>= 1000` for the current test case.

---

### ✅ **Sample Input:**

```
2
5
800 1200 1000 700 1300
3
500 900 1000
```

### ✅ **Sample Output:**

```
3
1
```

* First test case: `1200`, `1000`, and `1300` are ≥ 1000 → count = 3
* Second test case: only `1000` is ≥ 1000 → count = 1

