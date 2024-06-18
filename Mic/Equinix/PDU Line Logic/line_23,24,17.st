!===Variaveis utilizadas===
!({#1.ActiveSource}==1)          (Escolha de source)

!({#1.Source1Volts B-C} > 0)     (Source1 B-C Alimentado)
!({#1.Source1Volts C-A} > 0)     (Source1 C-A Alimentado)
!({#1.Source1Volts A-B} > 0)     (Source1 A-B Alimentado)


IF (!Se a linha s1 estiver selecionada E houver DPP entre duas de suas fases
    ({#1.ActiveSource}==1) AND (
        ({#1.Source1Volts B-C} > 0) OR ({#1.Source1Volts C-A} > 0) OR ({#1.Source1Volts A-B} > 0)
    )
)
THEN 1
ELSE 0