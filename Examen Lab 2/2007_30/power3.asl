func main ()
var a, y : int
var x, z : float
var b : bool
x = 3;
y = 2;
a = 4;
z = x^(y*2) - x^3;
if x^(y*2) - x^3 > 0 then
    z = x^a + 3/5;
else
    z = x^3^a - (z-2)^(a/2);
endif
write z;
write '\n';
endfunc
