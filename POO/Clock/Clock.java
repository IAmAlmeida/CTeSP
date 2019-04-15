
/**
 * Escreva a descrição da classe Clock aqui.
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public class Clock
{
    private int limite;
    private int valor;
    public Clock(int limite){
        valor = 0;
        this.limite = limite;
    }
    
    public void setValor(int valor){
        if(valor>=0 && valor < limite){
            this.valor=valor;
        }
    }
    
    public int getValor(){
        return valor;
    }
    
    public void tick(){
        valor++;
        if(valor==limite){
            valor=0;
        }
    }
    public String valorString(){
        String valorS="";
        if(valor<10)
        valorS+="0"+valor;
        else
        valorS=valor+"";
        return valorS;
    }
    
}
