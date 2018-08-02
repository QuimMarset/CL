func f(x : int, y : float) : int
    return 3;
endfunc

func main()
    var x, z, t : int
    var y : float
    [z, x, t] = [x + f(x, 3.1), 1, x];
    [x, z] = [1];
    [x, x] = [x, 1, x*x+5];
endfunc
