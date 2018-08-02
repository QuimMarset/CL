function main
  vars
    x 1
  endvars

     %1 = 2
     x = %1
     %2 = 3
     %3 = 4
     %4 = %3 < %2
     %8 = %4
     ifFalse %4 goto false1
     %5 = 5
     %6 = 5
     %7 = %5 == %6
     %8 = %7
  label false1 :
     ifFalse %8 goto endif2
     %9 = 3
     x = %9
  label endif2 :
     writei x
     writeln
     return
endfunction


