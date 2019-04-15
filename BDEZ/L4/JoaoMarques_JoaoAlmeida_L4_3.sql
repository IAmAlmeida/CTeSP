select dis_nome,dis_creditos
from disciplinas
group by dis_nome
having dis_creditos = (select max(dis_creditos) from disciplinas)