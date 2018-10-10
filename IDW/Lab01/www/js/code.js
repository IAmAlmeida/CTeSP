function somadig(num){
    var num,somadig = 0;

    do{
        somadig += num%10;
        console.log(num+"--");
        console.log(somadig);
        num = Math.floor(num/10,0);
        
    }while(num!=0);
    document.getElementById("result").innerHTML = "O resultado é: " + somadig;
}
function testenter(e,num){
    var code = (e.keyCode ? e.keyCode : e.which);
    if(code == 13) {
        somadig(num);
    }
}