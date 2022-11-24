# c_compiler_implementation2022
C컴파일러 구현  
*2022 하반기*  
> 프로그램은 'C언어와 컴파일러' 책을 참고해 작성하였다. 

1. syntax analysis
Lex는 어휘분석기 프로그램을 자동 생성하기 위해 만들어진 유용한 도구로 어휘 분석을 위한 명세서를 입력으로 하여 c 언어로 된 어휘 분석기 프로그램을 생성한다. yacc은 BNF와 같은 형식의 문법으로부터 파서를 만들어내는 프로그램으로 언어의 문법을 포함하는 yacc 명세서를 입력으로 하여 c 언어로 된 LR 파서 프로그램을 생성한다. lex와 yacc을 이용해 작성한 kim.l (어휘 분석을 위한 명세서)와 kim.y (c언어로 된 LR 파서 프로그램 제작을 위한 yacc 명세서)를 만들어 실제 발생할 action들을 추가한다. syntax.c에 action 추가 시 호출 또는 사용하는 함수들을 정의한다. 이때, 여러가지 타입 선언을 위해 type.h를 작성한다. syntax

2. semantic analysis
//
