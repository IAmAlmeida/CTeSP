function multbyalg(){
    var num1 = tempn1 = parseInt(document.getElementById("num1").value);
    var num2 = tempn2 = parseInt(document.getElementById("num2").value);
    var num1array = [];
    var num2array = [];
    var i=k=j=l=0;
    do{
        num1array[i] = tempn1%10;
        tempn1=Math.floor(tempn1/10);
        i++;
    }while(num1.toString().length != i);
    do{
        num2array[k] = tempn2%10;
        tempn2=Math.floor(tempn2/10);
        k++;
    }while(num2.toString().length != k);

    var soma=[k+i];
    
    for(j=i-1;j>=0;j--)
        for(l=k-1;l>=0;l--){
            soma[l]=num2array[l]*num1array[j];
           
        }
        console.log(soma);
        
   

}
