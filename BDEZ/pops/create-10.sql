use exemplo;
create table alunos (alu_id int not null auto_increment,
					 alu_nome varchar(60) not null,
					 alu_local varchar(30),
					 alu_dnsc date not null,
					 alu_sexo char(1) not null,
					 alu_email varchar(30),
					 alu_cur_id int,
					 primary key (alu_id));
		     		     
create table cursos (cur_id int not null auto_increment,
					 cur_nome varchar(40) not null,
					 primary key (cur_id));
		           
-- Chaves estrangeiras
alter table alunos add constraint alunos_fk_cursos
            foreign key (alu_cur_id) references cursos(cur_id) 
			ON DELETE NO ACTION ON UPDATE NO ACTION;
            
