!===Variaveis utilizadas===
!({#1.ActiveSource}==2)          (Escolha de source)

!({#1.Source2Volts B-C} > 0)     (Source2 B-C Alimentado)
!({#1.Source2Volts C-A} > 0)     (Source2 C-A Alimentado)
!({#1.Source2Volts A-B} > 0)     (Source2 A-B Alimentado)


IF (!Se a linha s2 estiver selecionada E houver DPP entre duas de suas fases
    ({#1.ActiveSource}==2) AND (
        ({#1.Source2Volts B-C} > 0) OR ({#1.Source2Volts C-A} > 0) OR ({#1.Source2Volts A-B} > 0)
    )
)
THEN 1
ELSE 0