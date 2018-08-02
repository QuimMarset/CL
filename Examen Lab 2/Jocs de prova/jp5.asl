func f(x : array [10] of int, y : int) : int
    var a : int
    a = x[5];
    return a;
endfunc

func main()
    var x : array [10] of int
    var y : int
    var z : int
    var h : float
    h = f(x, y);
endfunc
