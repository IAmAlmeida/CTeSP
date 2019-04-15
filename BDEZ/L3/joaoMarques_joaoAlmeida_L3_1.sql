USE exemplo;
select alu_nome, cur_nome from alunos, cursos
where alu_cur_id = cur_id;