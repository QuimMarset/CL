function f
  vars
    x 1
    y 1
  endvars

   %1 = 3
   x = %1
   %2 = 2
   %3 = x + %2
   y = %3
   writei y
   writeln
   return
endfunction

function g
  params
    _result
    x
  endparams

  vars
    y 1
    z 1
  endvars

   %1 = 4
   y = %1
   %2 = y * x
   z = %2
   _result = z
   return
endfunction

function main
  vars
    x 1
    y 1
    z 1
  endvars

   %1 = 2
   x = %1
   %2 = 1
   y = %2
   %3 = 5
   z = %3
   pushparam 
   pushparam x
   call g
   popparam 
   popparam 
   pushparam 
   pushparam x
   call g
   popparam 
   popparam %4
   y = %4
   writei y
   writeln
   return
endfunction


