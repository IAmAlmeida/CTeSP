function namevalidation(obj){
    
    if(obj.value == "" && obj.name=='pnome'){
        obj.parentElement.children[2].setAttribute("class","hidden");
        obj.parentElement.children[1].setAttribute("class","error");
        obj.parentElement.children[2].value = "";
        return false;
    }else{
        obj.parentElement.children[2].removeAttribute("class");
        obj.parentElement.children[1].removeAttribute("class");
    }

    if(obj.value == "" && obj.name=='apld'){
        obj.parentElement.children[2].setAttribute("class","error");
        return false;
    }else{
        obj.parentElement.children[2].removeAttribute("class");
    }

};  
function emailvalidation(obj){
    email=obj.value;
    if (validateEmail(email)) {
        obj.parentElement.children[4].removeAttribute("class");
    } else {
        obj.parentElement.children[4].setAttribute("class","error");
        return false;
    }
}

function agevalidation(obj){
    idade = obj.value;
    if(validateAge(idade)){
        obj.parentElement.children[8].removeAttribute("class");
        if(idade<11){
            obj.parentElement.children[8].setAttribute("class","error");
            return false;
        }else{
            obj.parentElement.children[8].removeAttribute("class");
        }
    }else{
        obj.parentElement.children[8].setAttribute("class","error");
        return false;
    }
}

function validateAge(age){
    var re = /^\d+$/;
    return re.test(age);
}

function validateEmail(email) {
    var re = /^(([^<>()[\]\\.,;:\s@\"]+(\.[^<>()[\]\\.,;:\s@\"]+)*)|(\".+\"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    return re.test(email);

}


function validateall(formobj){

    if(namevalidation(formobj.elements["pnome"])==0){
        alert("PRIMEIRO NOME VAZIO!");
    }
    if(namevalidation(formobj.elements["apld"])==0){
        alert("APELIDO VAZIO!");
    }
    if(emailvalidation(formobj.elements["email"])==0){
        alert("EMAIL INCORRETO!");
    }
    if(agevalidation(formobj.elements["idade"])==0){
        alert("IDADE VAZIA OU < 11 OU COM CARACTERES!");
    }
   
    
}


  