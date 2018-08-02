func fact(x : int) : int
    var f : int
    if x == 1 then
        f = 1;
    else
        f= x * fact(x - 1);
    endif
    return f;
endfunc

func main()
    var x, y : int
    var z : float
    x = 3;
    [x, y, z] = [fact(x), fact(x+1), fact(x+2)];
    write x;
    write '\n';
    write y;
    write '\n';
    write z;
    write '\n';
    [z, y] = [2*x + z, x + 1];
    write x;
    write '\n';
    write y;
    write '\n';
    write z;
    write '\n';
    [z, y] = [2*y + z, y + 1];
    write x;
    write '\n';
    write y;
    write '\n';
    write z;
    write '\n';
endfunc
