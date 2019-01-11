function supports_html5_storage() {
  try {
    return 'localStorage' in window && window['localStorage'] !== null;
  } catch (e) {
    return false;
  }
}

if ( ! supports_html5_storage() )
	alert('Não consegue utilizar a aplicação neste browser, pois não suporta armazenamento local');

var lista;

// localStorage.removeItem("lista")

if ( localStorage["lista"] )
	{
	lista = JSON.parse( localStorage["lista"] );
	alert("Lista from Storage");
	}
else
	{
	lista = 
		[
			{"nome":"Fraldas", "quantidade":2},
			{"nome":"Cerveja", "quantidade":24}, 
			{"nome":"Pão", "quantidade": 10},
			{"nome":"Café", "quantidade": 30}
		];
	saveLista();
	alert("Lista from initializer");
	}

function mostrarLista ()
{
    // Aceder div
    var divZonaLista = document.getElementById("zona_lista");

    // Apagar todos os nós filho que eventualmente existam
    while (divZonaLista.firstChild) 
    {
        divZonaLista.removeChild(divZonaLista.firstChild);
    }

    // Criar elemento tabela
    var tabela = document.createElement("table");

    // Para cada produto criar uma linha com o conteúdo
    for (let i = 0; i < lista.length; i++) 
    {
        var linha = document.createElement("tr");  
        tabela.appendChild(linha);

        // Mostrar o nome do produto
        var celula = document.createElement("td");
        celula.textContent = lista[i]["nome"];
        linha.appendChild(celula);
        
        // Mostrar a quantidade
        var celula = document.createElement("td");
        celula.textContent = lista[i]["quantidade"];
        linha.appendChild(celula);
        
        
        // Mostrar o botão de aumentar quantidade
        celula = document.createElement("td");
        linha.appendChild(celula);
        var imagem = document.createElement ("img");
        imagem.src = "https://img.icons8.com/metro/1600/plus.png";
        imagem.width = "16";
        imagem.height = "16";
        celula.appendChild(imagem);
        // Associa um evento de click a chamar incrementarProduto(i)
        imagem.addEventListener("click", function(){incrementarProduto(i);});        

        // Mostrar o botão de diminuir quantidade
        celula = document.createElement("td");
        linha.appendChild(celula);
        var imagem = document.createElement ("img");
        imagem.src = "https://img.icons8.com/metro/1600/minus.png";
        imagem.width = "16";
        imagem.height = "16";
        celula.appendChild(imagem);
        // Associa um evento de click a chamar decrementarProduto(i)
        imagem.addEventListener("click", function(){decrementarProduto(i);});
        
        // Mostrar o botão de remover
        celula = document.createElement("td");
        linha.appendChild(celula);
        var imagem = document.createElement ("img");
        imagem.src = "https://cdn3.iconfinder.com/data/icons/musthave/256/Remove.png";
        imagem.width = "16";
        imagem.height = "16";
        celula.appendChild(imagem);
        // Associa um evento de click a chamar apagarProduto(i)
        imagem.addEventListener("click", function(){apagarProduto(i);});

    }
    
    // Adiciona a tabela à div
    divZonaLista.appendChild(tabela);
}

function saveLista()
{
    alert( JSON.stringify( lista ) );
	localStorage["lista"] = JSON.stringify( lista );
}

function adicionarProduto ()
{
    // Obter o que está na caixa de texto
    var produto = document.getElementById("novo_produto").value;
    
    // Adiciona à lista
    lista.push({"nome": produto, "quantidade":1});
    saveLista();
	
    // Manda redesenhar a lista
    mostrarLista();

    // Limpa o produto da caixa de texto
    document.getElementById("novo_produto").value = "";
}


function apagarProduto (posicao)
{
    // Apaga
    lista.splice(posicao, 1);
    saveLista();
    // Manda mostrar a lista (já atualizada)
    mostrarLista();
}


function incrementarProduto (posicao)
{
    lista[posicao]["quantidade"]++;
    saveLista();
    mostrarLista();
}

function decrementarProduto (posicao)
{
    lista[posicao]["quantidade"]--;
    saveLista();
    mostrarLista();
}