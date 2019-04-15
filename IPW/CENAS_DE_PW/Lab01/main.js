function matchRuleShort(str, rule) {
    return new RegExp("^" + rule.split("*").join(".*") + "$").test(str);
  }
  
  //Explanation code
  function matchRuleExpl(str, rule) {
    // "."  => Find a single character, except newline or line terminator
    // ".*" => Matches any string that contains zero or more characters
    rule = rule.split("*").join(".*");
  
    // "^"  => Matches any string with the following at the beginning of it
    // "$"  => Matches any string with that in front at the end of it
    rule = "^" + rule + "$"
  
    //Create a regular expression object for matching string
    var regex = new RegExp(rule);
  
    //Returns true if it finds a match, otherwise it returns false
    return regex.test(str);
  }

function format(Datef,form){
    var dateformated,formexcess;
    var delimiter = "%";
    var y=m=d=cy=cm=cd=i=k=0;
    formexcess=form.split("%");
    console.log(formexcess);
    for(i=1;i<formexcess.length;i++){
        if(matchRuleShort(formexcess[i].toLowerCase() , "*aaaa*") || matchRuleShort(formexcess[i].toLowerCase() , "*aa*")){
            y=formexcess[i];
            cy=i;
        }else if(matchRuleShort(formexcess[i].toLowerCase() , "*m*") || matchRuleShort(formexcess[i].toLowerCase() , "*mm*")){
            m=formexcess[i];
            cm=i;
        }else if(matchRuleShort(formexcess[i].toLowerCase() , "*d*") || matchRuleShort(formexcess[i].toLowerCase() , "*dd*")){
            d=formexcess[i];
            cd=i;
        }
        console.log(cy+"\t"+cm+"\t"+cd+"\t");
    }

        if(y.length>3){
            var ysplit = y.split("aaaa");
            var tempdate = Datef.getFullYear()
            ysplit[0]=tempdate;
        }else{
            var ysplit = y.split("aa");
            var tempdate = Datef.getFullYear()
            ysplit[0]=(tempdate%100)
        }
        ysplit=ysplit.join();
        ysplit.replace(",","");
        if(m.length>2){
            var msplit = m.split("mm");
            var tempdate = Datef.getMonth()+1
            if(tempdate<10)
            msplit[0]="0"+tempdate;
            else
            msplit[0]=tempdate;
        }else{
            var msplit = m.split("m");
            var tempdate = Datef.getMonth()+1
            msplit[0]=tempdate
        }

        if(d.length>1){
            var dsplit = d.split("dd");
            var tempdate = Datef.getDate()
            if(tempdate<10)
            dsplit[0]="0"+tempdate;
            else
            dsplit[0]=tempdate;
        }else{
            var dsplit = d.split("d");
            var tempdate = Datef.getDate()
            dsplit[0]=(tempdate)
        }
        
        alert(+"\n"+msplit+"\n"+dsplit+"\n");
    return dateformated
} 

format(new Date(),"Teste de texto: %aaaa-%mm-%dd iydasdhu");