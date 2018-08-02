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
     a = %3
     %10 = float x
     %4 = 2
     %5 = y * %4
     %11 = %10
     %12 = %5
     %7 = 0
     %9 = %12 < %7
     ifFalse %9 goto endif1
     %13 = 1.0
     %11 = %13 /. %11
     %12 = - %12
  label endif1 :
     %6 = 1.0
  label while1 :
     %9 = %7 < %12
     ifFalse %9 goto endwhile1
     %6 = %6 *. %11
     %8 = 1
     %12 = %12 - %8
     goto while1
  label endwhile1 :
     %19 = float x
     %14 = 3
     %20 = %19
     %21 = %14
     %16 = 0
     %18 = %21 < %16
     ifFalse %18 goto endif2
     %22 = 1.0
     %20 = %22 /. %20
     %21 = - %21
  label endif2 :
     %15 = 1.0
  label while2 :
     %18 = %16 < %21
     ifFalse %18 goto endwhile2
     %15 = %15 *. %20
     %17 = 1
     %21 = %21 - %17
     goto while2
  label endwhile2 :
     %23 = %6 -. %15
     z = %23
     %30 = float x
     %24 = 2
     %25 = y * %24
     %31 = %30
     %32 = %25
     %27 = 0
     %29 = %32 < %27
     ifFalse %29 goto endif3
     %33 = 1.0
     %31 = %33 /. %31
     %32 = - %32
  label endif3 :
     %26 = 1.0
  label while3 :
     %29 = %27 < %32
     ifFalse %29 goto endwhile3
     %26 = %26 *. %31
     %28 = 1
     %32 = %32 - %28
     goto while3
  label endwhile3 :
     %39 = float x
     %34 = 3
     %40 = %39
     %41 = %34
     %36 = 0
     %38 = %41 < %36
     ifFalse %38 goto endif4
     %42 = 1.0
     %40 = %42 /. %40
     %41 = - %41
  label endif4 :
     %35 = 1.0
  label while4 :
     %38 = %36 < %41
     ifFalse %38 goto endwhile4
     %35 = %35 *. %40
     %37 = 1
     %41 = %41 - %37
     goto while4
  label endwhile4 :
     %43 = %26 -. %35
     %44 = 0
     %46 = float %44
     %45 = %46 <. %43
     ifFalse %45 goto else9
     %51 = float x
     %52 = %51
     %53 = a
     %48 = 0
     %50 = %53 < %48
     ifFalse %50 goto endif5
     %54 = 1.0
     %52 = %54 /. %52
     %53 = - %53
  label endif5 :
     %47 = 1.0
  label while5 :
     %50 = %48 < %53
     ifFalse %50 goto endwhile5
     %47 = %47 *. %52
     %49 = 1
     %53 = %53 - %49
     goto while5
  label endwhile5 :
     %55 = 3
     %56 = 5
     %57 = %55 / %56
     %59 = float %57
     %58 = %47 +. %59
     z = %58
     goto endif9
  label else9 :
     %65 = float x
     %60 = 3
     %66 = %65
     %67 = %60
     %62 = 0
     %64 = %67 < %62
     ifFalse %64 goto endif6
     %68 = 1.0
     %66 = %68 /. %66
     %67 = - %67
  label endif6 :
     %61 = 1.0
  label while6 :
     %64 = %62 < %67
     ifFalse %64 goto endwhile6
     %61 = %61 *. %66
     %63 = 1
     %67 = %67 - %63
     goto while6
  label endwhile6 :
     %73 = %61
     %74 = a
     %70 = 0
     %72 = %74 < %70
     ifFalse %72 goto endif7
     %75 = 1.0
     %73 = %75 /. %73
     %74 = - %74
  label endif7 :
     %69 = 1.0
  label while7 :
     %72 = %70 < %74
     ifFalse %72 goto endwhile7
     %69 = %69 *. %73
     %71 = 1
     %74 = %74 - %71
     goto while7
  label endwhile7 :
     %76 = 2
     %78 = float %76
     %77 = z -. %78
     %79 = 2
     %80 = a / %79
     %85 = %77
     %86 = %80
     %82 = 0
     %84 = %86 < %82
     ifFalse %84 goto endif8
     %87 = 1.0
     %85 = %87 /. %85
     %86 = - %86
  label endif8 :
     %81 = 1.0
  label while8 :
     %84 = %82 < %86
     ifFalse %84 goto endwhile8
     %81 = %81 *. %85
     %83 = 1
     %86 = %86 - %83
     goto while8
  label endwhile8 :
     %88 = %69 -. %81
     z = %88
  label endif9 :
     writef z
     %89 = '\n'
     writeln
     return
endfunction


