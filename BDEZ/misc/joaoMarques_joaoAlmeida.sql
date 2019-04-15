/*start*/
use exemplo;
/*1.1 e 1.2*/
select alu_email Email,alu_nome Nome,alu_sexo Sexo from alunos;
/*1.3*/
select alu_id*1000+alu_cur_id Número,alu_nome Nome from alunos;
/*1.4*/
select concat("O aluno ",a.alu_nome," é do curso ",a.alu_cur_id," - ",c.cur_nome) frase from alunos a inner join cursos c on a.alu_cur_id = c.cur_id;
/*2.1*/
select distinct a.alu_local Localidade, a.alu_sexo Sexo from alunos a;
/*3.1*/
select * from alunos order by alu_dnsc desc;
/*3.2*/
select * from alunos order by alu_sexo asc,alu_nome desc;
/*3.3*/
select alu_nome Nome, alu_email Email from alunos order by alu_dnsc;
/*3.4*/
select alu_id*1000+alu_cur_id Número,alu_nome Nome from alunos order by Número desc;
/*4.1*/
select * from alunos where alu_sexo='F';
/*4.2*/
select * from alunos where date(alu_dnsc) between "1996-01-01" and "1998-12-31";
/*4.3*/
select * from alunos where date(alu_dnsc) < "1996-01-01" or alu_cur_id = 2;
/*4.4*/
select * from alunos where (alu_sexo = "M" and alu_cur_id = 1) or (alu_sexo="F" and alu_cur_id=2);
/*5.1*/
select * from alunos where (date(alu_dnsc) between "1996-01-01" and "1998-12-31") and alu_cur_id in(1,2,4);
/*5.2*/
select * from alunos where (date(alu_dnsc) NOT between "1996-01-01" and "1998-12-31");
/*5.3*/
select * from alunos where alu_nome like "j%";
/*5.4*/
select * from alunos where alu_nome like "% _____";
/*5.5*/
select * from alunos where alu_email like "%sapo.pt";
/*5.6*/  
select * from alunos where alu_email is not null;
/*end*/