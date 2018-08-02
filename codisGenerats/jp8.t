function f
  params
    _result
    x
    y
  endparams

  vars
    a 1
  endvars

   %2 = x
   %1 = 5
   %3 = %2[%1]
   a = %3
   _result = a
   return
endfunction

function main
  vars
    x 10
    y 1
    z 1
    h 1
  endvars

   pushparam 
   %1 = &x
   pushparam %1
   pushparam y
   call f
   popparam 
   popparam 
   popparam %2
   %3 = float %2
   h = %3
   return
endfunction


