function fact
  params
    _result
    x
  endparams

  vars
    f 1
  endvars

     %1 = 1
     %2 = x == %1
     ifFalse %2 goto else1
     %3 = 1
     f = %3
     goto endif1
  label else1 :
     pushparam 
     %4 = 1
     %5 = x - %4
     pushparam %5
     call fact
     popparam 
     popparam %6
     %7 = x * %6
     f = %7
  label endif1 :
     _result = f
     return
endfunction

function main
  vars
    x 1
    y 1
    z 1
  endvars

   %1 = 3
   x = %1
   pushparam 
   pushparam x
   call fact
   popparam 
   popparam %2
   %9 = %2
   pushparam 
   %3 = 1
   %4 = x + %3
   pushparam %4
   call fact
   popparam 
   popparam %5
   %10 = %5
   pushparam 
   %6 = 2
   %7 = x + %6
   pushparam %7
   call fact
   popparam 
   popparam %8
   %11 = %8
   x = %9
   y = %10
   %12 = float %11
   z = %12
   writei x
   %13 = '\n'
   writeln
   writei y
   %14 = '\n'
   writeln
   writef z
   %15 = '\n'
   writeln
   %16 = 2
   %17 = %16 * x
   %19 = float %17
   %18 = %19 +. z
   %22 = %18
   %20 = 1
   %21 = x + %20
   %23 = %21
   z = %22
   y = %23
   writei x
   %24 = '\n'
   writeln
   writei y
   %25 = '\n'
   writeln
   writef z
   %26 = '\n'
   writeln
   %27 = 2
   %28 = %27 * y
   %30 = float %28
   %29 = %30 +. z
   %33 = %29
   %31 = 1
   %32 = y + %31
   %34 = %32
   z = %33
   y = %34
   writei x
   %35 = '\n'
   writeln
   writei y
   %36 = '\n'
   writeln
   writef z
   %37 = '\n'
   writeln
   return
endfunction


