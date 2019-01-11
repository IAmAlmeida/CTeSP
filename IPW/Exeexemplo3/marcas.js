var select = document.getElementById("selectNumber");
var options = [
    {
        id: 1, nome: "BMW",
        modelos: [
            { id: 1, nome: "Série A",
                versoes: [
                    { id: 1, nome: "116 D" },
                    { id: 2, nome: "136 D" }
                ]
            },
            { id: 2, nome: "Série S",
                versoes: [
                    { id: 1, nome: "222 A" },
                    { id: 2, nome: "250 B" }
                ]
            }
        ]
    },
    {
        id: 2, nome: "Mercedes",
        modelos: [
            { id: 1, nome: "Série E",
                versoes: [
                    { id: 1, nome: "220 Roadster" },
                    { id: 2, nome: "432 SUV" }
                ]
            },
            { id: 2, nome: "Série F",
                versoes: [
                    { id: 1, nome: "325 Coupé" },
                    { id: 2, nome: "420 Sport" }
                ]
            }
        ]
    }
];

function fnPopulateDropDown(id,options){ 
        var el = document.createElement("option");
        el.textContent = options[id].nome;
        el.value = options[id].id;
        select.appendChild(el);
}
fnPopulateDropDown(1,options);
fnPopulateDropDown(2,options);


a = 3;

