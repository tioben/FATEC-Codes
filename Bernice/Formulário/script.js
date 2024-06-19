const array = []
class cadastro {
    constructor(nome, idade, celular, sexo, notificacao, email){
        this.nome = nome;
        this.idade = idade;
        this.celular = celular;
        this.sexo = sexo;
        this.notificacao = notificacao
        this.email = email
    }

    guardarDado(){
        array.push(this)
    }
}

function buttonClick(){
    const inputNome = document.getElementById("name")
    const inputEmail = document.getElementById("email")
    const inputIdade = document.getElementById("idade")
    const inputCelular = document.getElementById("tel")
    const inputSexo = document.querySelector('input[name="sexo"]:checked');
    const inputNotificacao = document.getElementById("notificacao")

    const inputNomeValue = inputNome.value
    const inputEmailValue = inputEmail.value
    const inputIdadeValue = inputIdade.value
    const inputCelularValue = inputCelular.value
    const inputSexoValue = inputSexo.value
    const inputNotificacaoValue = inputNotificacao.value

    const pessoa = new cadastro(inputNomeValue, inputIdadeValue, inputCelularValue, inputSexoValue, inputNotificacaoValue, inputEmailValue)
    pessoa.guardarDado()
    console.log(array)
    resetForm()
}

function resetForm() {
    document.getElementById("name").value = '';
    document.getElementById("email").value = '';
    document.getElementById("idade").value = '';
    document.getElementById("tel").value = '';
    document.querySelectorAll('input[name="sexo"]').forEach(input => input.checked = false);
    document.getElementById("notificacao").checked = false;
}

const button = document.getElementById("send_button")
button.addEventListener('click', buttonClick)
