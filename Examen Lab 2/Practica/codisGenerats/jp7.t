function main
  vars
    x 1
    y 1
    z 1
  endvars

   %1 = 1
   %2 = not %1
   %3 = not %2
   %4 = not %3
   %5 = not %4
   %6 = 0
   %7 = %5 or %6
   x = %7
   writei x
   writeln
   return
endfunction


