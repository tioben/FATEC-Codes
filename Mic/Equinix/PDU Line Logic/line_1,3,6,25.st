!===Variaveis utilizadas===
!({#1.ActiveSource}==2)          (Escolha de source)

!({#1.CB1 (S1) Open} = 0)        (CB1 PASSANDO)
!({#1.CB4 (S1BYP) Closed} = 1)   (S1BYP PASSANDO)

!({#1.CB2 (S2) Open} = 0)         (CB2 PASSANDO)
!({#1.CB5 (S2BYP) Closed} = 1)    (S2BYP PASSANDO)

!({#1.CB3 Output Bkr Open} = 0)   (CB3 PASSANDO)

!({#1.Source2Volts B-C} > 0)     (Source2 B-C Alimentado)
!({#1.Source2Volts C-A} > 0)     (Source2 C-A Alimentado)
!({#1.Source2Volts A-B} > 0)     (Source2 A-B Alimentado)

!({#1.Source1Volts B-C} > 0)     (Source1 B-C Alimentado)
!({#1.Source1Volts C-A} > 0)     (Source1 C-A Alimentado)
!({#1.Source1Volts A-B} > 0)     (Source1 A-B Alimentado)


IF 
    ((({#1.Source2Volts B-C} > 0) OR ({#1.Source2Volts C-A} > 0) OR ({#1.Source2Volts A-B} > 0)) !Tem alimentacao na linha s2?
        AND (({#1.ActiveSource}==2) !E a linha s2 foi selecionada?
            AND (({#1.CB5 (S2BYP) Closed} = 1) !E (Bypass acionado? Ou (o caminho CB2, CB3?))
                OR (({#1.CB2 (S2) Open} = 0) AND ({#1.CB3 Output Bkr Open} = 0)) 
            )
        ) 
    )

    OR((({#1.Source1Volts B-C} > 0) OR ({#1.Source1Volts C-A} > 0) OR ({#1.Source1Volts A-B} > 0)) !Tem alimentacao na linha s1?
        AND (({#1.ActiveSource}==1) !E a linha s1 foi selecionada?
            AND (({#1.CB4 (S1BYP) Closed} = 1) !E (Bypass acionado? Ou (o caminho CB1, CB3?))
                OR (({#1.CB1 (S1) Open} = 0) AND ({#1.CB3 Output Bkr Open} = 0)) 
            )
        ) 
    )
THEN 1
ELSE 0