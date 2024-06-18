const array = []
class cadastro {
    constructor(nome, idade, celular, sexo, notificacao){
        this.nome = nome;
        this.idade = idade;
        this.celular = celular;
        this.sexo = sexo;
        this.notificacao = notificacao
    }

    guardarDado(){
        array.push(this)
    }
}

function buttonClick(nome, idade, celular, sexo, notificacao){
    const inputNome = document.getElementById("name")
    const inputEmail = document.getElementById("email")
    const inputIdade = document.getElementById("idade")
    const inputCelular = document.getElementById("tel")
    const inputSexo = document.getElementById("name")
    const inputNotificacao = document.getElementById("name")

    const inputNomeValue = inputNome.value
    const inputEmailValue = inputEmail.value
    const inputIdadeValue = inputIdade.value
    const inputCelularValue = inputCelular.value
    const inputSexoValue = inputSexo.value
    const inputNotificacaoValue = inputNotificacao.value

    const pessoa = new cadastro(inputNomeValue, inputIdadeValue, inputCelularValue, inputSexoValue, inputNotificacaoValue)
    pessoa.guardarDado()
}

buttonClick('gustavo', 24, '1212890814','Masculino', true )

console.log(array)

