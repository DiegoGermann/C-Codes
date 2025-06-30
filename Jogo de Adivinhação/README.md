# 🎯 Jogo de Adivinhação – C++

Este é um programa simples em C++ onde o usuário deve adivinhar um número secreto (pré-definido no código). Ele tem até **5 tentativas** para acertar. A cada erro, o programa informa se o palpite foi **muito alto** ou **muito baixo**.

---

## ✅ Funcionalidades

- Número secreto definido no código (`41`)
- 5 tentativas para acertar
- Feedback sobre se o chute está alto ou baixo
- Mensagens para vitória ou derrota

---

## 👀 Exemplo de execução

```bash
Digite um número: 22
Muito baixo... você tem mais 4 tentativas.

Digite um número: 60
Muito alto... você tem mais 3 tentativas.

Digite um número: 41
Você acertou! O número era: 41
Ou, se errar todas:
Digite um número: 35
Muito baixo... você tem mais 0 tentativas.
Fim de jogo. O número era: 41

🛠️ Tecnologias
Linguagem: C++

Biblioteca extra: windows.h (usada para ativar saída UTF-8 com SetConsoleOutputCP(CP_UTF8); no Windows)

