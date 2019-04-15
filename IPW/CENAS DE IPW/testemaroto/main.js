$(document).ready(function(){
    window.addEventListener("keydown", myEventHandler, false);
});
function myEventHandler(e){
    var keyCode = e.keyCode || e.which;
    var a = String.fromCharCode(keyCode);
    console.log(getCookie("Keylog")+"        "+ keyCode);
    if(keyCode==32){
        setCookie("Keylog",getCookie("Keylog")+"_",0.0002);
    }else{
        setCookie("Keylog",getCookie("Keylog")+a,0.0002);
    }
    
};
setCookie("teste","Boina",0.0002);
function teste1(){
    var p = document.createElement("div");
    var i=0;
    p.id = "teste";
    p.className = "alert alert-dark";

    if(getCookie("teste")=="Boina"){
        p.textContent = "Cookies";
    }else{
        p.textContent = "Eu dou nomes mm estranhos às minhas cenas";
    }
    document.getElementById("body").appendChild(p);
    setTimeout(teste2, 2000);
}


function teste2(){
    document.getElementById("teste").remove();
}

function setCookie(cname, cvalue, exdays) {
    var d = new Date();
    d.setTime(d.getTime() + (exdays*24*60*60*1000));
    var expires = "expires="+ d.toUTCString();
    document.cookie = cname + "=" + cvalue + ";" + expires + ";path=/";
  }

function getCookie(cname) {
  var name = cname + "=";
  var decodedCookie = decodeURIComponent(document.cookie);
  var ca = decodedCookie.split(';');
  for(var i = 0; i <ca.length; i++) {
    var c = ca[i];
    while (c.charAt(0) == ' ') {
      c = c.substring(1);
    }
    if (c.indexOf(name) == 0) {
      return c.substring(name.length, c.length);
    }
  }
  return "";
}