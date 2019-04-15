SELECT * from alunos;
SELECT alu_nome from alunos where timestampdiff(month,alu_dnsc,"29-10-2019" + interval 1 month)=timestampdiff(month,alu_dnsc,"29-10-2019")