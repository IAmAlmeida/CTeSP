function decode(){
    let str = document.getElementById("text").value;
    let acronym = str.split(/\s/).reduce((response,word)=> response+=word.slice(document.getElementById("placement").value-1,document.getElementById("placement").value),'');
    document.getElementById("display").textContent="";
    document.getElementById("display").textContent=acronym;
}
var number = document.getElementById('placement');

// Listen for input event on numInput.
number.onkeydown = function(e) {
    if(!((e.keyCode > 95 && e.keyCode < 106)
      || (e.keyCode > 47 && e.keyCode < 58) 
      || e.keyCode == 8)) {
        return false;
    }
}

function smd(){
    var almeida;
    let smd;
    almeida=smd;
    smd=almeida;
    return (smd+almeida);
}

function lma(){
    var lma;
    var almeida;
    
    if(almeida=="smd"){
        return lma;
    }
    else if(almeida=="lma"){
        return smd;
    }
    else{
        return "200 IQ";
    }

    return smd;
}