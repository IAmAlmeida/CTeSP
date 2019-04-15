select count(*), timestampdiff(YEAR,alu_dnsc,sysdate())
from alunos
group by timestampdiff(YEAR,alu_dnsc,sysdate())
; 
