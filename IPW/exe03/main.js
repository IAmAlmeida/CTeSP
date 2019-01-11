var cleaner 
function caption(obj)
{   
    if(!obj.parentElement.caption){
        obj.parentElement.caption = document.createElement("p");
        obj.parentElement.caption.setAttribute("id", "cap");
        obj.parentElement.parentElement.appendChild(obj.parentElement.caption);
        cleaner =  obj.parentElement.caption;
    }else{
        
        obj.parentElement.parentElement.removeChild(obj.parentElement.caption);
        delete obj.parentElement.parentElement["caption"];
    }
        obj.parentElement.caption.textContent = "bla"
}

