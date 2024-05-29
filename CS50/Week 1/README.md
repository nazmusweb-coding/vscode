<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<section>
    <h2>Commands used in codespace to compile the code:</h2>
    <ul>
        <li><code>code hello.c</code> <!-- opens file --></li>
        <li><code>make hello</code> <!-- compiles source code --></li>
        <li><code>./hello</code> <!-- runs executable file --></li>
    </ul>
</section>

<section>
    <h2>Commands that I used to compile code for this week:</h2>
    <ul>
        <li><code>g++ -c implementation_file.cpp -o implementation_file.o</code> <!-- opens file --></li>
        <li><code>g++ -std=c++17 driver_file.cpp implementation_file.o -o driver_file.exe</code> <!-- compiles source code --></li>
        <li><code>./driver</code> <!-- runs executable file --></li>
    </ul>
</section>

<section>
    <h2>Linux commands:</h2>
    <ul>
        <li><code>cd</code> <!-- (change directory) --></li>
        <li><code>cp</code> <!-- (copy a file) --></li>
        <li><code>ls</code> <!-- (list) --></li>
        <li><code>mkdir</code> <!-- (make a directory) --></li>
        <li><code>mv</code> <!-- (move) or rename --><br>example: <code>mv hello hello.c</code> <!-- shown in video (3:47:03) --></li>
        <li><code>rm</code> <!-- (remove) --></li>
        <li><code>rmdir</code> <!-- (remove directory) --></li>
    </ul>
</section>

<section>
    <h2>Advise:</h2>
    <p>Using prototypes are recommended (4:17:10)</p>
    <p>Correctness, design, style (2:11:12)</p>
</section>

<section>
    <h2>Concepts:</h2>
    <ul>
        <li>Integer overflow (4:21:50) <!-- More bigger value than the type can store, int 32, long 64 --></li>
        <li>Truncation (4:25:08) <!-- After mathematical operations some decimal value might be lost. like division, result should be 0.33333 but showing 0.00000 --></li>
        <li>Type casting (4:27:40) <!-- Explicitly convert one type to another --></li>
        <li>Floating-point imprecision (4:29:00) <!-- decimal values in float are not most accurate, solution is double more accurate then float --></li>
    </ul>
</section>

<section>
    <h2>CS50 Manual Pages (link):</h2>
    <a href="https://manual.cs50.io/">CS50 Manual Pages</a>
</section>

</body>
</html>
