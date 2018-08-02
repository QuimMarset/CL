function main
  vars
    x 1
    y 1
    z 1
  endvars

   %1 = 2
   %2 = 3
   %3 = 4
   %4 = %2 * %3
   %5 = 2
   %6 = %4 / %5
   %7 = %1 + %6
   %8 = float %7
   x = %8
   %9 = 1.5
   y = %9
   %10 = 5
   z = %10
   %11 = 2
   %13 = float z
   %12 = y +. %13
   %15 = float %11
   %14 = %15 *. %12
   y = %14
   writef x
   %16 = ' '
   writec %16
   writef y
   %17 = ' '
   writec %17
   writei z
   %18 = ' '
   writec %18
   writeln
   return
endfunction


