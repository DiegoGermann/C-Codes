# 🔐 Validador de Senha em C++

Este é um projeto simples feito em C++ que simula a validação de uma senha com número limitado de tentativas. O objetivo é treinar estruturas de repetição, condicionais e controle de fluxo.

---

## 💡 Como funciona

- O programa define uma senha fixa (`9090`)
- O usuário tem até **3 tentativas** para digitar a senha correta
- Se acertar, vê a mensagem **"Bem-vindo! Acesso permitido."**
- Se errar 3 vezes, o acesso é **bloqueado**

---

## 🎯 Exemplo de execução

```bash
Digite sua senha: 1234
Senha incorreta. Tentativas restantes: 2

Digite sua senha: 0000
Senha incorreta. Tentativas restantes: 1

Digite sua senha: 9090
Bem-vindo! Acesso permitido.
ou
Digite sua senha: 1111
Senha incorreta. Tentativas restantes: 0
Usuário bloqueado!!
