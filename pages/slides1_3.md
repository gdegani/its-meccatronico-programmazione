---
level: 3
---

# CONVERSIONE IN ESADECIMALE

- La stessa procedura usata per la conversione in binario può essere applicata anche alla conversione in base 16.
- Considerato che 16 è una potenza di 2, solitamente si converte prima in binario e poi si raggruppano i bit in gruppi di quattro (16 = 2⁴).

$${all}
255_{10} = 1111;1111_2 = FF_{16}
$$

---
level: 3
---

# unità di misura

- In binario, l’unità di misura fondamentale è l’informazione rappresentabile con una sola cifra binaria, zero o uno, detta bit (Binary digIT).
- Una sequenza di 8 bit è definita Byte.

|Multipli|Valore|	
|---|---|
|Kilobyte - KB|2^10|1 024|
|Megabyte - MB|(2^10)^2|1 048 576|
|Gigabyte - GB|(2^10)^3|1 073 741 824|
|Terabyte - TB|(2^10)^4|1 099 511 627 776|

---
level: 3
---

# Rappresentazione di interi in modulo e segno

- Supponiamo di avere un registro di 4 byte = 32 bit.
- I bit sono convenzionalmente numerati da 0 a 31 da destra verso sinistra, dove un indice maggiore corrisponde a un peso maggiore.
- Si utilizza il primo bit a sinistra per rappresentare il segno:
  - 0: numero positivo
  - 1: numero negativo
- I bit da 0 a 30 rappresentano il valore assoluto del numero.

---
level: 3
---

# Rappresentazione di interi in modulo e segno

Si possono rappresentare i seguenti numeri:
- Positivi: da +0 a +2^31-1 = 2.147.483.647
- Negativi: da -0 a -(2^31-1) = -2.147.483.647

|Cifra|1|0|1|…|0|1|1|0|
|---|---|---|---|---|---|---|---|---|
|Indice|31|30|29|…|3|2|1|0|

---
level: 3
---

# Il complemento a due

- Metodo per rappresentare numeri interi con segno nei computer.
- Calcolo del complemento a due:
  - Rappresentare il numero in forma binaria: 0000 0101 (5).
  - Invertire tutti i bit (sostituendo 0 con 1 e viceversa): 1111 1010 (questa operazione è chiamata complemento a uno).
  - Aggiungere il valore 1: 1111 1011 (che rappresenta -5).

---
level: 3
---

# Rappresentazione di interi in complemento a 2

- Nella codifica in complemento a due:
  - I numeri positivi sono rappresentati in modulo e segno.
  - I numeri negativi sono rappresentati in complemento a due.
- Con n bit si possono rappresentare numeri da -2^n-1 a 2^n-1-1. (Con 8 bit, ad esempio, si possono rappresentare i numeri da -128 a +127.)

---
level: 3
---

# Codifica di caratteri

- La prima codifica utilizzata fu lo standard ASCII (American Standard Code for Information Technology).
- Prevedeva l’uso di 7 bit per rappresentare caratteri alfabetici, simboli grafici e alcuni caratteri speciali.
- Successivamente fu estesa a 8 bit.

---
layout: image
image: /ascii.png
backgroundSize: contain
level: 3
title: Tabella ASCII
---

---
level: 3
---

# UNICODE

- Unicode è uno standard per la rappresentazione e gestione di testi di ogni lingua e simboli utilizzati in tutto il mondo. È stato creato per risolvere i problemi di compatibilità tra i diversi sistemi di codifica (come ASCII o Latin-1).
- Ogni carattere in Unicode è identificato da un numero unico chiamato code-point. Questi numeri possono essere rappresentati nel computer con varie codifiche, tra cui le più comuni sono UTF-8, UTF-16 e UTF-32.
- Supporta anche la rappresentazione di alfabeti complessi come il cinese, il giapponese e il coreano.

---
level: 3
---

# UNICODE

- Gestisce simboli matematici, emoticon e caratteri speciali.
- È essenziale per l’internazionalizzazione e lo sviluppo di applicazioni moderne, soprattutto con la diffusione di Internet.
- Esempi di code-point:
  - Carattere “A” → U+0041
  - Carattere “😊” → U+1F60A

---
layout: center

level: 3

---

# “Algoritmi + Strutture Dati = Programmi”

## Niklaus Wirth

---
level: 3

---

# Programmazione

- Il programma è una sequenza di istruzioni che produce un obiettivo desiderato in un tempo finito, implementando un algoritmo.
- La programmazione è il processo che porta alla realizzazione di un programma o software.

---
layout: image-right

image: /pancake.png
level: 3
---

# Ricetta

- Input:
  - Lista di ingredienti
  - Procedimento da eseguire
- Output:
  - Pancake

---
level: 3
---

# Problema

- Per fornire istruzioni a un computer è necessario utilizzare un linguaggio comune.
- Il computer comprende solo sequenze di 0 e 1, ovvero sequenze binarie.
- Il programmatore comprende il linguaggio naturale: “fai, leggi, scrivi.”

---
level: 3
---

# Programma

- Il computer mette a disposizione delle istruzioni elementari.
- Il programma è una sequenza di istruzioni elementari scritta da un programmatore per risolvere un problema.
- Il programmatore utilizza un linguaggio di programmazione per fornire la sequenza di istruzioni al computer, ovvero per scrivere il programma.
- Il linguaggio di programmazione è un linguaggio compreso sia dal computer che dal programmatore.

---
level: 3
---

# Traduttori in linguaggio macchina

- Interprete: Le istruzioni vengono tradotte una alla volta ed eseguite immediatamente dal calcolatore.
- Compilatore: Tutte le istruzioni vengono tradotte in linguaggio macchina e memorizzate in un file eseguibile dal calcolatore (programma).

---
level: 3
---

# Pro e contro

Velocità di esecuzione:
- L’interprete deve tradurre il programma ogni volta che lo esegue.
- Il programma compilato viene tradotto solo una volta.
- Il compilatore è più efficiente ed ottimizza il codice tradotto.

---
level: 3
---

# Pro e contro

Prerequisiti:
- L’interprete deve essere installato su ogni macchina che userà il programma.
- Il compilatore viene acquistato ed usato solo dal programmatore.

---
level: 3
---

# Pro e contro

Proprietà intellettuale:
- L’interprete richiede la distribuzione del codice sorgente in chiaro.
- Il programma compilato può essere distribuito in linguaggio macchina, senza il codice sorgente.

---
level: 3
---

# Linguaggi di programmazione

Calcolatore e programmatore, per comprendersi, devono avere un linguaggio comune:
- Linguaggi a basso livello: (es. Assembly)
- Linguaggi ad alto livello: (es. JavaScript, Python)
- Linguaggi compilati: (es. TypeScript, Java)
- Linguaggi interpretati: (es. JavaScript, Python)

Il documento contenente le istruzioni scritte in un linguaggio di programmazione si chiama codice sorgente.

---
layout: image-right

image: /binary.png
level: 3
---

# Linguaggio macchina

Sequenza binaria comprensibile solo da uno specifico microprocessore o da una famiglia di microprocessori.

---
layout: two-cols
level: 3
---

# Linguaggio assembly

Stampa la scritta “hello world” in linguaggio assembly per microprocessore Intel 8086.

::right::

<<< @/examples/example00/HelloWorld.asm asm {all}{lines:true}

---
layout: two-cols
level: 3
---

# Linguaggio C

Stampa la scritta “hello world”.

::right::

<<< @/examples/example01/main.c c {all}{lines:true}

---
layout: two-cols
level: 3
---

# Linguaggio Python

Stampa la scritta “hello world” in Python.

::right::

<<< @/examples/example00/hello.py py {all}{lines:true}
