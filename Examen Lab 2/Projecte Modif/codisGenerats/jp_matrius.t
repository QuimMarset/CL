function main
  vars
    x 100
    y 1
  endvars

   %1 = 3
   y = %1
   %4 = 0
   %2 = 1
   %5 = %2
   %6 = 10
   %5 = %5 * %6
   %4 = %4 + %5
   %3 = 2
   %5 = %3
   %4 = %4 + %5
   x[%4] = y
   %9 = 0
   %7 = 1
   %10 = %7
   %11 = 10
   %10 = %10 * %11
   %9 = %9 + %10
   %8 = 2
   %10 = %8
   %9 = %9 + %10
   %12 = x[%9]
   writei %12
   writeln
   return
endfunction

