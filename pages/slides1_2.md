---
layout: two-cols-header
level: 3

---

# Operatori logici

::left::

## Negazione

|A|**NOT** A|
|---|---|
|0|1|
|1|0|

::right::

## Moltiplicazione

|A|B|A **AND** B|
|---|---|---|
|0|0|0|
|0|1|0|
|1|0|0|
|1|1|1|

---
layout: two-cols-header
level: 3

---

# Operatori logici

::left::

## Somma

|A|B|A **OR** B|
|---|---|---|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|1|

::right::

## Disuguaglianza

|A|B|A **XOR** B|
|---|---|---|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

---
level: 3
---

# DIAGRAMMA DI FLUSSO/FLOW CHART

- Consentono di rappresentare visivamente un algoritmo.
- Sono indipendenti dal linguaggio di programmazione.
- Esistono diversi standard grafici.

---
layout: image
image: /flowchart.png
backgroundSize: contain
title: Simboli flowchart
level: 3
---

---
level: 3
---

# Esempio di flowchart

```mermaid {scale: 1, alt: 'A diagram'}
flowchart LR
  
    Start([Inizio]) --> Input[/Input/]
    Input --> Process1[Elaborazione]
    Process1 --> Decision{Decisione}
    Decision -- Sì --> Process2[Elaborazione<br> Successiva]
    Decision -- No --> End([Fine])
    Process2 --> End([Fine])
```

---
layout: two-cols
level: 3
---

# Esempio: area di un rettangolo

- Calcolo dell’area di un rettangolo
- Input: base ed altezza
- Algoritmo: Area = base * altezza

::right::

```mermaid {scale: 0.9, alt: 'A diagram'}
flowchart TD
    Start([Inizio]) --> InputBase[/Inserisci la base/]
    InputBase --> InputAltezza[/Inserisci l'altezza/]
    InputAltezza --> CalcoloArea[Calcola Area = base * altezza]
    CalcoloArea --> OutputArea[/Visualizza l'area/]
    OutputArea --> End([Fine])
```

---
layout: two-cols
level: 3
---

# Selezione - IF THEN ELSE

- Viene valutata una condizione.
- Se la condizione è vera, l’elaborazione prosegue con il ramo di sinistra.
- Se la condizione è falsa, l’elaborazione prosegue con il ramo di destra.

::right::

```mermaid {scale: 1, alt: 'A diagram'}
flowchart TD
    Start([Start]) --> Condition{Is condition verified?}
    Condition -- Yes --> Action1[Action if True]
    Condition -- No --> Action2[Action if False]
    Action1 --> End([End])
    Action2 --> End([End])
```

---
layout: two-cols
level: 3
---

# Ciclo While

- Viene valutata una condizione.
- Se la condizione è vera, viene eseguita l’azione e poi viene rivalutata la condizione.
- Si esce dal ciclo quando la condizione diventa falsa.

::right::

```mermaid {scale: 1, alt: 'A diagram'}
flowchart TD
    J1@{ shape: f-circ, label: ""}
    Start([Inizio]) --> J1 
    J1 --> Controllo{Condizione Vera?}
    Controllo -- Sì --> Azione[Azioni da Eseguire]
    Azione --> J1
    Controllo -- No --> End([Fine])
```

---
layout: two-cols
level: 3
---

# Ciclo do while

- Viene eseguita l’azione.
- Se la condizione è vera, l’azione viene eseguita nuovamente e poi viene rivalutata la condizione.
- Si esce dal ciclo quando la condizione diventa falsa.
- Nel ciclo do-while l’azione viene eseguita almeno una volta.

::right::

```mermaid {scale: 0.9, alt: 'A diagram'}
flowchart TD
    J1@{ shape: f-circ, label: ""}
    Start([Inizio]) --> J1 
    J1 --> Azione[Azioni da Eseguire]
    Azione --> Controllo{Condizione Vera?}
    Controllo -- Sì --> J1
    Controllo -- No --> End([Fine])
```

---
layout: two-cols
level: 3
---

# Ciclo for

- Viene valutata la condizione e, se vera, si esegue l’azione.
- L’azione viene eseguita un numero finito di volte.

::right::

```mermaid {scale: 0.7, alt: 'A diagram'}
flowchart TD
    J1@{ shape: f-circ, label: ""}
    Start([Inizio]) --> Inizializzazione[Inizializza Contatore=1]
    Inizializzazione --> J1
    J1 --> Controllo{Contatore <= Limite?}
    Controllo -- Sì --> Azione[Azioni da Eseguire]
    Azione --> Incremento[Incrementa Contatore]
    Incremento --> J1
    Controllo -- No ---> End([Fine])
```

---
layout: two-cols
level: 3
---

# Esempio: CALCOLO DEL FATTORIALE

Dato un numero intero, calcolarne il fattoriale.

- Input: un numero intero maggiore o uguale a zero
- Algoritmo: moltiplico n per tutti i numeri minori di n, fino a 2

::right::

<br>
<br>
<br>
<br>
<br>
<br>
<br>
$$
n! = 
\begin{cases} 
1 & \text{se } n = 0 \\
n \times (n-1) \times \cdots \times 2 \times 1 & \text{se } n > 0
\end{cases}
$$

---
level: 3
---

# Esempio: CALCOLO DEL FATTORIALE

```mermaid {scale: 0.5, alt: 'A diagram'}
flowchart LR
    Start([Start]) --> InputNum[/Input n/]
    InputNum --> Initialize[Set factorial = 1]
    Initialize --> Check{Is n >= 0?}
    Check -- No --> Error[/Display "Invalid input. n must be non-negative."/]
    Error ---> End([End])
    Check -- Yes --> LoopStart[Set i = 1]
    LoopStart --> LoopCheck{Is i <= n?}
    LoopCheck -- Yes --> Multiply[Set factorial = factorial * i]
    Multiply --> Increment[Incrementa i di 1]
    Increment --> LoopCheck
    LoopCheck -- No --> OutputResult[/Output factorial/]
    OutputResult ---> End([End])
```

---
level: 3
---

# ESERCIZIO

Rappresentare un algoritmo per il calcolo del costo di un prodotto che soddisfi i seguenti requisiti:
- Input: costo unitario, quantità acquistata
- Se il numero di elementi acquistati è superiore a 10, applicare uno sconto del 20%
- Output: costo totale

---
layout: two-cols
level: 3
---

# flow-chart

Flowchart della soluzione

::right::

```mermaid {scale: 0.6, alt: 'A diagram'}
flowchart TD
    A((Inizio)) --> B[/Ricevi costo unitario e quantità acquistata/]
    B --> C{Quantità > 10?}
    C -->|Sì| D[Calcola sconto: totale = costo_unitario * quantità * 0.8]
    C -->|No| E[Calcola totale: totale = costo_unitario * quantità]
    D --> F[/Mostra il totale/]
    E --> F
    F --> G((Fine))
```

---
level: 3
---

# ESERCIZIO

Rappresentare un algoritmo per il calcolo della potenza n-esima di un numero intero che soddisfi i seguenti requisiti:
- Input: numero, potenza
- Output: numero^potenza
- Usare solo le operazioni elementari: +, -, *, /

---
layout: two-cols
level: 3

--- 

# flow-chart

Flowchart della soluzione

::right::

```mermaid {scale: 0.6, alt: 'A diagram'}
flowchart TD
    A([Inizio]) --> B[/Ricevi numero e potenza/]
    B --> C[Imposta risultato = 1]
    C --> D{Potenza > 0?}
    D -->|Sì| E[Moltiplica: risultato = risultato * numero]
    E --> F[Decrementa potenza: potenza = potenza - 1]
    F --> D
    D -->|No| G[/Mostra risultato/]
    G --> H([Fine])
```

---
level: 3
---

# Codifiche numeriche

|Sistema|Base|Simboli|
|---|---|---|
|Binario|2|\{0,1\}|
|Ottale|8|\{0,1,2,3,4,5,6,7\}|
|Decimale|10|\{0,1,2,3,4,5,6,7,8,9\}|
|Esadecimale|16|\{0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F\}|

---
level: 3
---

# Esempi

|Decimale|Binario|Esadecimale|
|---|---|---|
|2|10|2|
|10|1010|A|
|16|1 0000|10|
|255|1111 1111|FF|

---
level: 3

---

# Codifica numerica posizionale

<br>

$$
n = \sum_{\substack{0 < i < m}} r_j \cdot b^j
$$

$$
1024 = 1 \times 10^3 + 0 \times 10^2 + 2 \times 10^1 + 4 \times 10^0 = 1024_{10}
$$

<br>

$$
10 = 1 \times 2^3 + 0 \times 2^2 + 1 \times 2^1 + 0 \times 2^0 = 1010_2
$$

<br>

$$
1024_{10} = 1 \times 2^{10} + 0 \times 2^9 + 0 \times 2^8 + 0 \times 2^7 + 0 \times 2^6 + 0 \times 2^5 
\\+ 0 \times 2^4 + 0 \times 2^3 + 0 \times 2^2 + 0 \times 2^1 + 0 \times 2^0 = 100 0000 0000_2
$$

---
layout: two-cols
---

# Conversione IN BINARIO

- Per convertire un numero da base decimale a base binaria si utilizzano le operazioni di divisione intera e modulo (quoziente e resto):
  - Divido il numero per 2 e salvo il resto della divisione.
  - Ripeto fino a che il quoziente diventa zero.

$$
\begin{align*}
1972_{10} = 111;1011;0111_2
\end{align*}
$$

::right::

|N div B|N mod B||
|---|---|---|
|1972 / 2|986|0 ← LSB|
| 986 / 2  | 493    | 0       |
| 493 / 2  | 246    | 1       |
|…|…|…|
| 15 / 2   | 7      | 1       |
| 7 / 2    | 3      | 1       |
| 3 / 2    | 1      | 1       |
| 1 / 2    | 0      | 1 ← MSB |
