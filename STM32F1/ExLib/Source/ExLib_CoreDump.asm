;;AREA CODE, READONLY
;IMPORT   ExLib_CoreDumpBuffer

;ExLib_CoreDump
;    PUSH {SP, LR, R0}
;    MOV R0, R13 ;当前栈的地址
;	MOV R3, R13
;    LDR R2, ExLib_CoreDumpBuffer
;    SUB R0, R0, #64

;ExLib_CoreDumpStrLoop
;    LDR R1, [R0, #0]
;    STR R1, [R2, #0]
;    ADD R0, #4
;    ADD R2, #4
;    CMP R0, S3
;    BEQ ExLib_CoreDumpStrLoop
;    POP {SP, LR, R0}
;    END
;		
;EXPORT   ExLib_CoreDump

