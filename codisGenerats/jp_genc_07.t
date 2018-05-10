function f
  params
    a
  endparams

   %4 = a
   %3 = 5
   %5 = %4[%3]
   %6 = 10
   %8 = float %6
   %7 = %5 *. %8
   %2 = a
   %1 = 5
   %2[%1] = %7
   return
endfunction

function main
  vars
    b 10
    c 10
  endvars

   %1 = 5
   readf %2
   b[%1] = %2
   %4 = 5
   %5 = b[%4]
   %6 = %5[%4]
   %3 = 7
   c[%3] = %6
   %7 = 5
   %8 = b[%7]
   writef %8
   writeln
   %10 = 7
   %11 = c[%10]
   writef %11
   writeln
   %13 = &b
   pushparam %13
   call f
   popparam 
   %14 = 5
   %15 = b[%14]
   writef %15
   writeln
   %17 = 7
   %18 = c[%17]
   writef %18
   writeln
   return
endfunction


