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
   %3 = 7
   c[%3] = %5
   %6 = 5
   %7 = b[%6]
   writef %7
   writeln
   %9 = 7
   %10 = c[%9]
   writef %10
   writeln
   %12 = &b
   pushparam %12
   call f
   popparam 
   %13 = 5
   %14 = b[%13]
   writef %14
   writeln
   %16 = 7
   %17 = c[%16]
   writef %17
   writeln
   return
endfunction


