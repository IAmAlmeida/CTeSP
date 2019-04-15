
/**
 * Escreva a descrição da classe Digital aqui.
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public class Digital
{
    private Clock horas;
    private Clock minutos;
    
    public void setHoras(int h){
        horas.setValor(h);
    } 
    public void setMinutos(int m){
        minutos.setValor(m);
    }    
    public int getHoras(){
        return horas.getValor();
    } 
    public int getMinutos(){
        return minutos.getValor();
    }
}
