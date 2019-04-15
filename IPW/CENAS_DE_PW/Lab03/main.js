function dados(nome, valor) {
    this.nome = nome;
    this.valor = valor;
  }
  window.onload=function(){
      dados.preencher();
      oldformat = document.getElementById("informacao");
    };

  dados.preencher = function(){
    let div =  document.getElementById("informacao");
    let txt;
    let i;
    let k = 0;
    pessoas = [];
    for (i = 0; i < div.childNodes.length; i++) {
        txt = txt + div.childNodes[i].textContent + "\n";
        if(i%2!=0){
            let vals =div.childNodes[i].textContent
            let res = vals.split("\n");
            pessoas[k] = new dados(res[1].trim(),res[2].trim());
            k++;
        }
    }
  }
  
  dados.emTabela = function(){
      let div = document.getElementById("informacao");
      div.textContent = "";
      let table = document.createElement("table");
      table.id="table1"
        div.appendChild(table);

        let tr1 = document.createElement("tr");
        tr1.id="thr1";
        table.appendChild(tr1);

        let th1 = document.createElement("th");
        th1.id="th1";
        th1.textContent = "Nome";
        table.appendChild(th1);

        let th2 = document.createElement("th");
        th2.id="th2";
        th2.textContent = "Valor";
        table.appendChild(th2);
        let i=0;
       for(i=0;i<=pessoas.length;i++){
            let tr = document.createElement("tr");
            table.appendChild(tr);

            let td1 = document.createElement("td");
            td1.textContent = pessoas[i].nome;
            tr.appendChild(td1);
    
            let td2 = document.createElement("td");
            td2.textContent = pessoas[i].valor;
            tr.appendChild(td2);
        }
      
  }
  dados.emLista = function(){
    let div = document.getElementById("informacao");
    div.textContent = "";
    let i = 0;
    for(i=0;i<=pessoas.length;i++){
        let li = document.createElement("li");
        li.id=pessoas[i].nome+i;
        div.appendChild(li);

        let li2 = document.createElement("li");
        li2.id=pessoas[i].valor+i;
        div.appendChild(li2);
    }
}