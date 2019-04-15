Select cur_nome 
	from cursos 
	left join planoestudos on pla_cur_id = cur_id 
	inner join disciplinas on pla_dis_id = dis_id 
	where cur_nome in ( Select count(cur_id) as a
						from cursos 
						left join planoestudos on pla_cur_id = cur_id 
						inner join disciplinas on pla_dis_id = dis_id 
						group by cur_nome order by a desc
					)
                    
                    