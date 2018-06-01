    Mov r1,*0x001
    ceq r1,0
    ceq r1,1
        jump end
    mov r2,1
    
    FactFunct:
        mul r1,r2
        add r1,-1
        ceq r1,1
        jump FactFunct
        print r1

    end:
        print 1

