func f()
    var x : int
    var y : int
    x = 3;
    y = x + 2;
    write y;
    write "\n";
    return;
endfunc

func g(x : int) : int
    var y : int
    var z : int
    y = 4;
    z = y * x;
    return z;
endfunc

func main()
    var x : int
    var y : int
    var z : int
    x = 2;
    y = 1;
    z = 5;
    g(x);
    y = g(x);
    write y;
    write "\n";
endfunc
