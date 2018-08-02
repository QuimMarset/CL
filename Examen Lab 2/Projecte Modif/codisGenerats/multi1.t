function main
  vars
    x 1
    y 1
    z 1
  endvars

   %1 = 1.345
   z = %1
   %2 = 1
   x = %2
   %3 = 3
   %4 = %3
   %5 = x
   %6 = z
   x = %4
   %7 = float %5
   z = %7
   y = %6
   writei x
   %8 = ' '
   writec %8
   writef z
   %9 = ' '
   writec %9
   writef y
   %10 = '\n'
   writeln
   return
endfunction


