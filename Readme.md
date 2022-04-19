# Let's dig deeper into the C patterns

- nested loop
- i loop and j loop
- if start value is common then j = common value; unless j = i; j>= / J<=; j++ / j--
- if the last value is common then j>= / J<= "that common value"

<details>
    <summary><h3>Pattern 1</h3></summary>
    <p>9 x 9 (1 - 9)</p>
    <img src="./patterns/1.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print 1 - 9 with a for loop</li>
    <li>Step 2: repeat it for 9 times</li>
    </ul>
</details>

<details>
    <summary><h3>Pattern 2</h3></summary>
    <p>9 x 9 (1, 9 times then 2, 9 times and so on)</p>
    <img src="./patterns/2.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print 1, 9 times with a for loop (this time print outer loop (i))</li>
    <li>Step 2: repeat it for 9 times</li>
    </ul>
</details>

<details>
    <summary><h3>Pattern 3</h3></summary>
    <p>9 x 9 (filled with *)</p>
    <img src="./patterns/3.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print 9 * with a for loop</li>
    <li>Step 2: repeat it for 9 times</li>
    </ul>
</details>

<details>
    <summary><h3>Pattern 4</h3></summary>
    <p>9 x 9 ( A - I)</p>
    <img src="./patterns/4.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print A - I with a for loop</li>
    <li>Step 2: repeat it for 9 times</li>
    <li>Step 3: solved it using array of Alphabets as well as ASCII codes</li>
    </ul>
</details>

<details>
    <summary><h3>Pattern 5</h3></summary>
    <p>9 x 9 (9 - 1)</p>
    <img src="./patterns/5.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print 9 - 1 with a for loop</li>
    <li>Step 2: repeat it for 9 times</li>
    </ul>
</details>

<details>
    <summary><h3>Pattern 6</h3></summary>
    <p>9 x 9 (9, 9 times then 8, 9 times and so on)</p>
    <img src="./patterns/6.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print 9, 9 times with a for loop</li>
    <li>Step 2: repeat it for 9 times</li>
    </ul>
</details>

<details>
    <summary><h3>Pattern 7</h3></summary>
    <p>Right angle triangle (1 - 9)</p>
    <img src="./patterns/7.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print 1 - 9 with a for loop</li>
    <li>Step 2: assign j <= i and continue the loop</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 8</h3></summary>
    <p>Right angle triangle (1, 1 time, 2, 2 time and so on)</p>
    <img src="./patterns/8.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print 1 - 9 with a for loop</li>
    <li>Step 2: assign j <= i and continue the loop</li>
    <li>Step 3: print i instead of j</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 9</h3></summary>
    <p>Right angle triangle (All filled with *)</p>
    <img src="./patterns/9.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print 1 - 9 with a for loop</li>
    <li>Step 2: assign j <= i and continue the loop</li>
    <li>Step 3: print * instead of i/j</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 10</h3></summary>
    <p>Right angle triangle (All filled with Alphabets (A - I))</p>
    <img src="./patterns/10.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print A - I with a for loop</li>
    <li>Step 2: assign j <= i and continue the loop</li>
    <li>Step 3: print j + 64 (ASCII) instead of j</li>
    <li>Step 4: change "%d" = > "%c"</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 11</h3></summary>
    <p>Right angle triangle (All filled with Alphabets (A - I, A, ALl B and so on))</p>
    <img src="./patterns/11.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print A - I with a for loop</li>
    <li>Step 2: assign j <= i and continue the loop</li>
    <li>Step 3: print i + 64 (ASCII) instead of j</li>
    <li>Step 4: change "%d" = > "%c"</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 12</h3></summary>
    <p>Right angle triangle (9 - 1 backward)</p>
    <img src="./patterns/12.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print 9 - 1 with a for loop</li>
    <li>Step 2: assign j <= i and continue the loop</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 13</h3></summary>
    <p>Right angle triangle (9 - 1 backward)</p>
    <img src="./patterns/13.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print 9 - 1 with a for loop</li>
    <li>Step 2: assign j <= i and continue the loop</li>
    <li>Step 3: print i instead of j</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 14</h3></summary>
    <p>Reversed Right angle triangle (9 - 1 backward)</p>
    <img src="./patterns/14.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: Print 9 - 1 with a for loop i incremental and j decremantal</li>
    <li>Step 2: assign j <= i and continue the loop</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 15</h3></summary>
    <p>Right angle triangle (1 21 321 4321 ....)</p>
    <img src="./patterns/15.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: first items varies so j =i</li>
    <li>Step 2: Row decremental so j will be decramental</li>
    <li>Step 3: Column incremental so i will be incremental</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 16</h3></summary>
    <p>Right angle triangle (123456789 12345678 123467 ......)</p>
    <img src="./patterns/16.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: first item doesn't varie so j =1</li>
    <li>Step 2: Row incremental so j will be incramental</li>
    <li>Step 3: Column decremental so i will be decremental</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 17</h3></summary>
    <p>Right angle triangle (123456789 12345678 123467 ......)</p>
    <img src="./patterns/17.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: first item varies so j = i</li>
    <li>Step 2: Row incremental so j will be incramental</li>
    <li>Step 3: Column incremental so i will be incremental</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 18</h3></summary>
    <p>Right angle triangle (123456789 12345678 123467 ......)</p>
    <img src="./patterns/18.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: first item doesn't varie so j =1</li>
    <li>Step 2: Row incremental so j will be incramental</li>
    <li>Step 3: Column decremental so i will be decremental</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 19</h3></summary>
    <p>Right angle triangle (123456789 12345678 123467 ......)</p>
    <img src="./patterns/19.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: first item doesn't varie so j =1</li>
    <li>Step 2: Row incremental so j will be incramental</li>
    <li>Step 3: Column decremental so i will be decremental</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 20</h3></summary>
    <p>Right angle triangle (123456789 12345678 123467 ......)</p>
    <img src="./patterns/20.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: first item doesn't varie so j =1</li>
    <li>Step 2: Row incremental so j will be incramental</li>
    <li>Step 3: Column decremental so i will be decremental</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 21</h3></summary>
    <p>Right angle triangle (All filled with *)</p>
    <img src="./patterns/21.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: first item doesn't varie so j =1</li>
    <li>Step 2: Row incremental so j will be incramental</li>
    <li>Step 3: Column decremental so i will be decremental</li>
    </ul>
</details>

<details>
<summary><h3>Pattern 22</h3></summary>
    <p>Right angle triangle (All filled with *)</p>
    <img src="./patterns/22.JPG" textAllign="center"  alt="Alt text" title="Optional title">
    <h4>Steps:</h4>
    <ul>
    <li>Step 1: first item doesn't varie so j =1</li>
    <li>Step 2: Row incremental so j will be incramental</li>
    <li>Step 3: Column decremental so i will be decremental</li>
    </ul>
</details>
