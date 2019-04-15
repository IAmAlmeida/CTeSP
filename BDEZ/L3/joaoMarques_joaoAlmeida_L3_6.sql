use exemplo;

select dis_nome from disciplinas 

inner join planoestudos on dis_id=pla_dis_id

where pla_semestre=1;