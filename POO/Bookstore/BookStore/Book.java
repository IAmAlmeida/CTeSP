
/**
 * Escreva a descrição da classe Book aqui.
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public class Book
{
   private String title;
   private String author;
   private int editionYear;
   private double preco;
   
   public void Book(){
       title="";
       author="";
       editionYear=2018;
       preco=0.00;
    }
   public Book(String newtitle, String newauthor, int neweditionYear,double newpreco){
       title = newtitle;
       author= newauthor;
       editionYear = neweditionYear;
       preco=newpreco;
   }
   public void setTitle(String newtitle){
       title = newtitle;
   }
   public void setAuthor(String newauthor){
       author = newauthor;
   }
   public void seteditionYear(int neweditionYear){
       editionYear = neweditionYear;
   }
    public void setPreco(double newpreco){
      preco = newpreco;
   }
   
   public String getTitle(){
    return title;
   }
   public String getAuthor(){
    return author;
   }
   public int geteditionYear(){
    return editionYear;
   }
   
   public void print(){
       System.out.println("Titulo:"+title);
       System.out.println("Autor:"+author);
       System.out.println("Data de Edição:"+editionYear);
       System.out.println("Preço:"+preco);
    }
}
