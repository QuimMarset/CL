function main
  vars
    a 1
    y 1
    x 1
    z 1
    b 1
  endvars

     %1 = 3
     x = %1
     %2 = 2
     y = %2
     %3 = 4
     %4 = - %3
     a = %4
     %9 = float x
     %10 = %9
     %11 = a
     %6 = 0
     %8 = %11 < %6
     ifFalse %8 goto endif1
     %12 = 1.0
     %10 = %12 /. %10
     %11 = - %11
  label endif1 :
     %5 = 1.0
  label while1 :
     %8 = %6 < %11
     ifFalse %8 goto endwhile1
     %5 = %5 *. %10
     %7 = 1
     %11 = %11 - %7
     goto while1
  label endwhile1 :
     z = %5
     writef z
     %13 = '\n'
     writeln
     %20 = float x
     %14 = 2
     %15 = y * %14
     %21 = %20
     %22 = %15
     %17 = 0
     %19 = %22 < %17
     ifFalse %19 goto endif2
     %23 = 1.0
     %21 = %23 /. %21
     %22 = - %22
  label endif2 :
     %16 = 1.0
  label while2 :
     %19 = %17 < %22
     ifFalse %19 goto endwhile2
     %16 = %16 *. %21
     %18 = 1
     %22 = %22 - %18
     goto while2
  label endwhile2 :
     %29 = float x
     %24 = 3
     %30 = %29
     %31 = %24
     %26 = 0
     %28 = %31 < %26
     ifFalse %28 goto endif3
     %32 = 1.0
     %30 = %32 /. %30
     %31 = - %31
  label endif3 :
     %25 = 1.0
  label while3 :
     %28 = %26 < %31
     ifFalse %28 goto endwhile3
     %25 = %25 *. %30
     %27 = 1
     %31 = %31 - %27
     goto while3
  label endwhile3 :
     %33 = %16 -. %25
     %34 = 0
     %36 = float %34
     %35 = %33 <. %36
     ifFalse %35 goto else8
     %41 = float x
     %42 = %41
     %43 = a
     %38 = 0
     %40 = %43 < %38
     ifFalse %40 goto endif4
     %44 = 1.0
     %42 = %44 /. %42
     %43 = - %43
  label endif4 :
     %37 = 1.0
  label while4 :
     %40 = %38 < %43
     ifFalse %40 goto endwhile4
     %37 = %37 *. %42
     %39 = 1
     %43 = %43 - %39
     goto while4
  label endwhile4 :
     %45 = 3
     %46 = 5
     %47 = %45 / %46
     %49 = float %47
     %48 = %37 +. %49
     z = %48
     goto endif8
  label else8 :
     %55 = float x
     %50 = 3
     %56 = %55
     %57 = %50
     %52 = 0
     %54 = %57 < %52
     ifFalse %54 goto endif5
     %58 = 1.0
     %56 = %58 /. %56
     %57 = - %57
  label endif5 :
     %51 = 1.0
  label while5 :
     %54 = %52 < %57
     ifFalse %54 goto endwhile5
     %51 = %51 *. %56
     %53 = 1
     %57 = %57 - %53
     goto while5
  label endwhile5 :
     %63 = %51
     %64 = a
     %60 = 0
     %62 = %64 < %60
     ifFalse %62 goto endif6
     %65 = 1.0
     %63 = %65 /. %63
     %64 = - %64
  label endif6 :
     %59 = 1.0
  label while6 :
     %62 = %60 < %64
     ifFalse %62 goto endwhile6
     %59 = %59 *. %63
     %61 = 1
     %64 = %64 - %61
     goto while6
  label endwhile6 :
     %66 = 2
     %68 = float %66
     %67 = z -. %68
     %69 = 2
     %70 = a / %69
     %75 = %67
     %76 = %70
     %72 = 0
     %74 = %76 < %72
     ifFalse %74 goto endif7
     %77 = 1.0
     %75 = %77 /. %75
     %76 = - %76
  label endif7 :
     %71 = 1.0
  label while7 :
     %74 = %72 < %76
     ifFalse %74 goto endwhile7
     %71 = %71 *. %75
     %73 = 1
     %76 = %76 - %73
     goto while7
  label endwhile7 :
     %78 = %59 -. %71
     z = %78
  label endif8 :
     writef z
     %79 = '\n'
     writeln
     return
endfunction


