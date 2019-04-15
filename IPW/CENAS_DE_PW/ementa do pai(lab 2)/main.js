/**
* Classe Prato
*/
/**
* @constructs Prato
* @param {string} nome - nome do prato.
* @param {TipoPrato} tipo - tipo do prato.
* @param {number} preco - preço do prato.
*/

function Prato(nome, tipo, preco) {
    this.nome = nome;
    this.tipo = tipo;
    this.preco = preco;
    
   }

   /** Propriedades e Métodos de Classe */
   /**
   * @memberof Prato
   * @property {string} cabecalhoTabela - String com código HTML para construir uma linha de
   cabeçalho de tabela com a informação dos pratos (será acedida como "propriedade de classe").
   * @readonly
   */
   Prato.cabecalhoTabela = (function () {
    return "<tr><th>Nome</th><th>Tipo</th><th>Preço</th></tr>";
   } ());
   /** Métodos de Instância */
   /**
   * Representação da informação de um prato sob a forma do código HTML para construir uma linha de
   tabela
   * @returns {string} representação da informação de um prato sob a forma do código HTML para
   construir uma linha de tabela.
   */

   Prato.prototype.toString = function () {
    
    return "<tr><td>"+this.nome+"</td>"+"<td>"+this.tipo+"</td>"+"<td>"+this.preco+"</td></tr>"

   };

   /**
   * Classe Ementa
   */
   /**
   * @constructs Ementa
   */

   function Ementa() {
   this.pratos = [];
   }

   /** Métodos de Instância */
   /** 
   * Cria uma string com código HTML para construir uma tabela com a informação de todos os pratos
   * @returns {string} código HTML para construir uma tabela com a informação de todos os pratos
   da ementa.
   */
   Ementa.prototype.listarPratos = function () {
   if (this.pratos.length === 0) {
   return "";
    } else {
    var resultado = `<table><thead>${Prato.cabecalhoTabela}</thead>`;
   
   this.pratos.forEach(function (currentValue, index, array) {
   resultado += currentValue; //toString implicito
    });
    resultado += "</table>";
   return resultado;
    }
   };

   /**
   * Acrescenta um prato à ementa. Se ele já existir (mesmo nome e tipo) então apenas atualiza o
   seu preço
   * @param {Prato} prato - prato para acrescentar à ementa.
   * @returns {object} o próprio objeto Ementa: permite a realização de "Method Chaining".
   */

   Ementa.prototype.acrescentarPrato = function (prato) {
    
    this.pratos.push(prato);

   };

   /**
   * Acrescenta diversos pratos à ementa
   * @param {...Prato} pratos - pratos para acrescentar à ementa.
   * @returns {object} o próprio objeto Ementa: permite a realização de "Method Chaining".
   */

   Ementa.prototype.acrescentarPratos = function (pratos) {
    pratos = Array.prototype.slice.call(arguments); 
    //Transformar o "arguments" num array para poder usar o forEach
    pratos.forEach(function (currentValue, index, array) {this.acrescentarPrato(currentValue);},this); 
    //Indicar que a ementa atual será o this dentro de cada chamada à função anterior
   return this;
   };


   /**
   * Remove pratos à ementa
   * @param {string} nome - parte de um nome de prato que servirá como padrão para selecionar os
   pratos a remover.
   * @returns {object} o próprio objeto Ementa: permite a realização de "Method Chaining".
   */

   Ementa.prototype.removerPrato = function (nome) {
    
    

   };

   /**
   * Apresenta, via alert, a informação (nome e preço) dos pratos da ementa
   * @param {string} nome - parte de um nome de prato que servirá como padrão para selecionar os
   pratos a apresentar.
   * @returns {object} o próprio objeto Ementa: permite a realização de "Method Chaining".
   */

   Ementa.prototype.procurarPrato = function (nome) {
   var quantos = this.pratos.length; var padrao = new RegExp(nome, "gi"); for (var i = 0; i < quantos; i++) {
       padrao.lastIndex = 0; //Reset ao emparelhamento
   if (padrao.test(this.pratos[i].nome))
    alert("O preço de " + this.pratos[i].nome + " é " + this.pratos[i].preco + "€");
    }
    return this;
   };

   /**
   * Ordena os pratos da ementa utilizando a função de comparação indicada
   * @param {function} comparacao - função de comparação entre pratos que servirá de base para a
   ordenação.
   * @returns {object} o próprio objeto Ementa: permite a realização de "Method Chaining". */

   Ementa.prototype.ordenar = function (comparacao) {
    
    

   };

   /** Métodos de Classe */
   /**
   * Coloca a informação da ementa, em formato de tabela, no div com id="pratos"
   * @memberof Ementa
   * @param {Ementa} [ementa=Ementa.omissao] - ementa para apresentar a informação.
   */

   Ementa.apresentar = function (ementa) {
   ementa = ementa || Ementa.omissao;
    document.getElementById("pratos").innerHTML = ementa.listarPratos();
   };

   /**
   * Acrescenta um prato à ementa. A informação do prato será pedida ao utilizador através de
   "prompt"
   * @memberof Ementa
   * @param {Ementa} [ementa=Ementa.omissao] - ementa para apresentar a informação.
   */

   Ementa.acrescentar = function (ementa) {
   ementa = ementa || Ementa.omissao;
    var informacao = prompt("Indique os dados do prato a adicionar:", "<nome>|<tipo: EEntrada/B-Bebida/P-Prato Principal/S-Sobremesa>|<preço>");
    if (informacao) {
    var campos = informacao.split("|");
   if (campos.length !== 3)
    alert("Dados mal introduzidos. Devia ser '<nome>|<tipo: E-Entrada/B-Bebida/P-PratoPrincipal/S-Sobremesa>|<preço>'!");
   else {
       if(validar(campos)){
            ementa.acrescentarPrato(new Prato(campos[0], campos[1].toUpperCase(), campos[2]));
        }
    Ementa.apresentar(ementa);
    }
    }
   };

   /**
   * Remove pratos à ementa. A informação dos nome dos pratos a remover será pedida ao utilizador
   através de "prompt"
   * @memberof Ementa
   * @param {Ementa} [ementa=Ementa.omissao] - ementa para apresentar a informação.
   */

   Ementa.remover = function (ementa) {
    
    

   }; 
   
   /**
   * Apresenta, via alert, a informação (nome e preço) dos pratos da ementa. A informação dos nome
   dos pratos a apresentar será pedida ao utilizador através de "prompt"
   * @memberof Ementa
   * @param {Ementa} [ementa=Ementa.omissao] - ementa para apresentar a informação.
   */

   Ementa.procurar = function (ementa) {
    
    

   };

   /**
   * Ordena os pratos da ementa utilizando a comparação da propriedade indicada
   * @memberof Ementa
   * @param {string} propriedade - propriedade do prato que servirá de comparação na ordenação.
   * @param {Ementa} [ementa=Ementa.omissao] - ementa para apresentar a informação.
   */

   Ementa.ordenar = function (propriedade, ementa) {
    
    

   };

   /**
   * @memberof Ementa
   * @property {object} omissao - Ementa por omissão: contém os dados de teste.
   */
 function validar(campos){
     if(campos[0]!==""||campos[1]!==""||campos[2]!==""){
         if(isFloat(parseFloat(campos[2]))||isInt(parseInt(campos[2]))){
             if(campos[1].toUpperCase()==='E'||campos[1].toUpperCase()==='B'||campos[1].toUpperCase()==='P'||campos[1].toUpperCase()==='S'){
                 return 1;
             }else
             return 0;
         }else
         return 0;
     }else
     return 0; 
 }
  Ementa.omissao = (new Ementa()).acrescentarPratos(
    new Prato("Arroz de Marisco", "P", 15.0), new
    Prato("Choco Frito", "P", 10.0), new
    Prato("Arroz Doce", "S", 2.5), new
    Prato("Pão", "E", 0.8), new Prato("Água", "B", 1.2) ); 


    function isInt(n){
        return Number(n) === n && n % 1 === 0;
    }
    
    function isFloat(n){
        return Number(n) === n && n % 1 !== 0;
    }