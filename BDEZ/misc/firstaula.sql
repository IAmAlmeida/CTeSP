drop database if exists teste;
create database teste;
use teste;

create table norm(
no_id int unique not null auto_increment,
no_nome varchar(100) not null,
no_data_n date,
no_sexo varchar(1) not null,
no_localidade varchar(30),
no_nacionalidade varchar(30),
no_pais varchar(20),
no_postal varchar(8)
);

insert into norm(no_nome,no_data_n,no_sexo,no_localidade,no_nacionalidade,no_pais,no_postal) 
values
("Laura",now(),'F',"Ericeira","Portuguesa","Portugal","2655-070"),
("Jaime",now(),'M',"Ericeira","Portuguesa","Portugal","2655-070"),
("Sandro",now(),'M',"Ericeira","Portuguesa","Portugal","2655-070"),
("Miguel",now(),'M',"Ericeira","Portuguesa","Portugal","2655-070"),
("Conan",now(),'F',"Ericeira","Portuguesa","Portugal","2655-070"),
("Joaquim",now(),'M',"Ericeira","Portuguesa","Portugal","2655-070"),
("Laura",now(),'F',"Ericeira","Portuguesa","Portugal","2655-070"),
("Laura",now(),'F',"Ericeira","Portuguesa","Portugal","2655-070");