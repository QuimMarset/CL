function main
  vars
    a 1
    y 1
    x 1
    z 1
    b 1
  endvars

     %1 = 3
     %2 = float %1
     x = %2
     %3 = 2
     y = %3
     %4 = 4
     a = %4
     %5 = 2
     %6 = y * %5
     %11 = x
     %12 = %6
     %8 = 0
     %10 = %12 < %8
     ifFalse %10 goto endif1
     %13 = 1.0
     %11 = %13 /. %11
     %12 = - %12
  label endif1 :
     %7 = 1.0
  label while1 :
     %10 = %8 < %12
     ifFalse %10 goto endwhile1
     %7 = %7 *. %11
     %9 = 1
     %12 = %12 - %9
     goto while1
  label endwhile1 :
     %14 = 3
     %19 = x
     %20 = %14
     %16 = 0
     %18 = %20 < %16
     ifFalse %18 goto endif2
     %21 = 1.0
     %19 = %21 /. %19
     %20 = - %20
  label endif2 :
     %15 = 1.0
  label while2 :
     %18 = %16 < %20
     ifFalse %18 goto endwhile2
     %15 = %15 *. %19
     %17 = 1
     %20 = %20 - %17
     goto while2
  label endwhile2 :
     %22 = %7 -. %15
     z = %22
     %23 = 2
     %24 = y * %23
     %29 = x
     %30 = %24
     %26 = 0
     %28 = %30 < %26
     ifFalse %28 goto endif3
     %31 = 1.0
     %29 = %31 /. %29
     %30 = - %30
  label endif3 :
     %25 = 1.0
  label while3 :
     %28 = %26 < %30
     ifFalse %28 goto endwhile3
     %25 = %25 *. %29
     %27 = 1
     %30 = %30 - %27
     goto while3
  label endwhile3 :
     %32 = 3
     %37 = x
     %38 = %32
     %34 = 0
     %36 = %38 < %34
     ifFalse %36 goto endif4
     %39 = 1.0
     %37 = %39 /. %37
     %38 = - %38
  label endif4 :
     %33 = 1.0
  label while4 :
     %36 = %34 < %38
     ifFalse %36 goto endwhile4
     %33 = %33 *. %37
     %35 = 1
     %38 = %38 - %35
     goto while4
  label endwhile4 :
     %40 = %25 -. %33
     %41 = 0
     %43 = float %41
     %42 = %43 <. %40
     ifFalse %42 goto else9
     %48 = x
     %49 = a
     %45 = 0
     %47 = %49 < %45
     ifFalse %47 goto endif5
     %50 = 1.0
     %48 = %50 /. %48
     %49 = - %49
  label endif5 :
     %44 = 1.0
  label while5 :
     %47 = %45 < %49
     ifFalse %47 goto endwhile5
     %44 = %44 *. %48
     %46 = 1
     %49 = %49 - %46
     goto while5
  label endwhile5 :
     %51 = 3
     %52 = 5
     %53 = %51 / %52
     %55 = float %53
     %54 = %44 +. %55
     z = %54
     goto endif9
  label else9 :
     %56 = 3
     %61 = x
     %62 = %56
     %58 = 0
     %60 = %62 < %58
     ifFalse %60 goto endif6
     %63 = 1.0
     %61 = %63 /. %61
     %62 = - %62
  label endif6 :
     %57 = 1.0
  label while6 :
     %60 = %58 < %62
     ifFalse %60 goto endwhile6
     %57 = %57 *. %61
     %59 = 1
     %62 = %62 - %59
     goto while6
  label endwhile6 :
     %68 = %57
     %69 = a
     %65 = 0
     %67 = %69 < %65
     ifFalse %67 goto endif7
     %70 = 1.0
     %68 = %70 /. %68
     %69 = - %69
  label endif7 :
     %64 = 1.0
  label while7 :
     %67 = %65 < %69
     ifFalse %67 goto endwhile7
     %64 = %64 *. %68
     %66 = 1
     %69 = %69 - %66
     goto while7
  label endwhile7 :
     %71 = 2
     %73 = float %71
     %72 = z -. %73
     %74 = 2
     %75 = a / %74
     %80 = %72
     %81 = %75
     %77 = 0
     %79 = %81 < %77
     ifFalse %79 goto endif8
     %82 = 1.0
     %80 = %82 /. %80
     %81 = - %81
  label endif8 :
     %76 = 1.0
  label while8 :
     %79 = %77 < %81
     ifFalse %79 goto endwhile8
     %76 = %76 *. %80
     %78 = 1
     %81 = %81 - %78
     goto while8
  label endwhile8 :
     %83 = %64 -. %76
     z = %83
  label endif9 :
     writef z
     %84 = '\n'
     writeln
     return
endfunction


