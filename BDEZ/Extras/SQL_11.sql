select alu_nome, timestampdiff(YEAR,alu_dnsc,sysdate())
from alunos
where timestampdiff(YEAR,alu_dnsc,sysdate()) = (select  Max(timestampdiff(YEAR,alu_dnsc,sysdate())) from alunos where alu_sexo like "F%") 
; 
