
var lista = [];
var contador = 1;

function initialize()
{
    if(localStorage["listaArtigos"])
        lista = JSON.parse(localStorage["listaArtigos"]);
    if(localStorage["listaArtigosContador"])
        contador = parseInt(localStorage["listaArtigosContador"]);

    for( var i = 0; i < lista.length; i++)
        addLineToTable( lista[i] );
}

window.onload = initialize;

function adicionar()
{
    var nomeArtigo = document.getElementById("fldNome").value;
    var tipoArtigo = document.getElementById("fldTipo").value;
    var custoArtigo = document.getElementById("fldCusto").value;

    var artigo = {
        id: contador,
        nome: nomeArtigo,
        tipo: tipoArtigo,
        custo: custoArtigo
    }
    contador++;
    addLineToTable( artigo );
    lista.push(artigo);
    saveLista();
}

function addLineToTable(artigo)
{
    var tabela = document.getElementById("tblOferta");
    var linha = document.createElement("tr");
    linha.id = "linha" + artigo.id;
    // Adicionar a linha à tabela
    tabela.appendChild(linha);
    var colNome = document.createElement("td");
    var colImagem = document.createElement("td");
    var colCusto = document.createElement("td");
    var colDelete = document.createElement("td");
    // Adicionar colunas à linha
    linha.appendChild(colNome);
    linha.appendChild(colImagem);
    linha.appendChild(colCusto);
    linha.appendChild(colDelete);
    // Adicionar o texto às colunas NOme e Custo
    colNome.textContent = artigo.id + "-" + artigo.nome;
    colCusto.textContent = artigo.custo + " €";

    // Criar Imagem
    var img = document.createElement("img");
    // Adicionar à coluna imagem
    colImagem.appendChild(img);
    // propriedades da imagem
    img.src = artigo.tipo + ".jpg";
    img.width = "50";
    img.height = "50";

    // criar o icon de delete
    var imgDelete = document.createElement("img");
    imgDelete.src = "delete.png";
    imgDelete.width = "24";
    imgDelete.height = "24";
    imgDelete.onclick = function() {
        apagarArtigo(artigo.id);
    }

    colDelete.appendChild(imgDelete);
}

function apagarArtigo(id)
{
    var idxApagar = -1;
    for( var i=0; i < lista.length; i++)
        if( lista[i].id == id )
            {
                idxApagar = i;
                break;
            }
    lista.splice(idxApagar, 1);
//    var tabela = document.getElementById("tblOferta");
//    var linha = document.getElementById("linha" + id);
//    tabela.removeChild(linha);
    var linha = document.getElementById("linha" + id);
    linha.parentElement.removeChild(linha);
    
    saveLista();
}

function saveLista()
{
    localStorage["listaArtigos"] = JSON.stringify(lista);
    localStorage["listaArtigosContador"] = contador + "";
}