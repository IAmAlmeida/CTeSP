/*start*/
use exemplo;
/*1.1*/
Select now();
/*1.2*/
Select date(now());
/*1.3*/
Select time(now());
/*1.4*/
Select * from alunos where year(alu_dnsc) = "1994";
/*1.5*/
Select upper(alu_nome) Nome  from alunos;
/*1.6*/
Select * from alunos where alu_nome like "joão%";
/*1.7*/
Select alu_id, alu_nome, alu_local, alu_dnsc, alu_sexo, case when alu_email is not null then alu_email else "Sem Email" end as alu_email, alu_cur_id from alunos ;
/*1.8*/
Select alu_nome, case when alu_cur_id = 1 then "EL" when alu_cur_id = 2 then "EEC" when 1 or 2 then alu_cur_id end from alunos;
/*1.9*/
Select alu_nome, upper(REPLACE(alu_nome,'ã','a')) as NOME from alunos;
/*1.10*/
Select LEFT(alu_nome, 3) as nome from alunos;
/*1.11*/
Select alu_nome,alu_dnsc,timestampdiff(YEAR,alu_dnsc,curdate()) as idade from alunos ;
/*1.12*/
Select alu_nome,alu_dnsc,timestampdiff(YEAR,alu_dnsc,curdate()) as idade from alunos where timestampdiff(YEAR,alu_dnsc,curdate()) > 22;
/*2.1*/
Select count(alu_id) as Número_de_Alunos from alunos;
/*2.2*/
Select count(alu_email) as Número_de_alunos_com_email from alunos;
/*R.: Como há emails nulos o count() não conta valores nulos!*/
/*2.3*/
Select count(distinct alu_local) from alunos;
/*2.4*/
Select MAX(alu_id) from alunos;
/*2.5*/
Select avg(timestampdiff(YEAR,alu_dnsc,now())) as AVG from alunos;
/*2.6*/
Select count(alu_id)-count(alu_email) as Número_de_alunos_sem_email from alunos;
/*2.7*/
Select count(alu_id) as LisboaM from alunos where alu_sexo='M' and alu_local = 'Lisboa';
/*3.1*/
Select count(alu_sexo) as Count, alu_sexo as Sexo  from alunos group by alu_sexo;  
/*3.2*/
Select count(alu_local) as Count, alu_local as Localidade  from alunos group by alu_local;  
/*3.3*/
Select max(cnt) as MNAlunos from (select alu_cur_id , count(*) as cnt from alunos group by alu_cur_id) x;
/*3.4*/
Select alu_cur_id,alu_sexo,count(*) as Count from alunos group by alu_cur_id , alu_sexo;
/*3.5*/
Select alu_local,alu_sexo,count(*) as Count from alunos group by alu_local , alu_sexo;
/*3.6*/
Select alu_cur_id, count(*) as count from alunos group by alu_cur_id having count(*)>2;
/*3.7*/
Select alu_local, count(*) as count from alunos group by alu_local having count(*)>2;
/*3.8*/
Select alu_cur_id, count(*) as count from alunos group by alu_cur_id, alu_sexo having count(*)>2 and alu_sexo = "F";
/*END*/
