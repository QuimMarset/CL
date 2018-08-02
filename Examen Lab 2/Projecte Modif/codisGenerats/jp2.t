function main
  vars
    x 1
  endvars

     %1 = 19
     x = %1
     %2 = 3
     %11 = x == %2
     ifFalse %11 goto SwitchCase2
     %3 = '3'
     writec %3
     writeln
     goto SwitchCaseEnd
  label SwitchCase2 :
     %4 = 2
     %11 = x == %4
     ifFalse %11 goto SwitchCase4
     %5 = '2'
     writec %5
     writeln
     goto SwitchCaseEnd
  label SwitchCase4 :
     %6 = 4
     %11 = x == %6
     ifFalse %11 goto SwitchCase7
     %7 = '4'
     writec %7
     writeln
     goto SwitchCaseEnd
  label SwitchCase7 :
     %8 = 7
     %11 = x == %8
     ifFalse %11 goto SwitchCaseDefault
     %9 = '7'
     writec %9
     writeln
     goto SwitchCaseEnd
  label SwitchCaseDefault :
     %10 = '0'
     writec %10
     writeln
  label SwitchCaseEnd :
     %12 = 'h'
     writec %12
     %12 = 'o'
     writec %12
     %12 = 'l'
     writec %12
     %12 = 'a'
     writec %12
     writeln
     return
endfunction


