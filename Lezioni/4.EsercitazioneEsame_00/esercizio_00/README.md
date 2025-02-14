### Esercizio: Gestione delle Prenotazioni di Lucio Cinema srl

#### Descrizione
Lucio cinema srl è un cinema multisala e per l'incapacità del titolare, Lucio, memorizza la programmazione settimanale delle pellicole in un file di testo la così strutturato:

```
F303 “QUEL TRENO ERA MEGLIO PERDERELO” 15/2/2025 17:45 sala 4 posti 50
F304 “QUEL TRENO ERA MEGLIO PERDERELO” 16/2/2025 20:10 sala 2 posti 35
F305 “QUEL TRENO ERA MEGLIO PERDERELO” 17/2/2025 22:00 sala 1 posti 70
F401 “IL MISTERO DELLA BICICLETTA SENZA SELLA” 14/2/2025 13:15 sala 3 posti 25
F402 “IL MISTERO DELLA BICICLETTA SENZA SELLA” 15/2/2025 21:50 sala 1 posti 40
F403 “IL MISTERO DELLA BICICLETTA SENZA SELLA” 16/2/2025 19:30 sala 4 posti 30
F512 “CENA DI NATALE SENZA TORTELLINI” 18/2/2025 10:00 sala 2 posti 28
F513 “CENA DI NATALE SENZA TORTELLINI” 18/2/2025 18:45 sala 3 posti 18
```

Ogni pellicola è identificato da un codice. Per ogni pellicola il file contiene il numero di posti disponibili in sala (il numero può variare in base alla disposizione delle poltrone oversize, quindi per una stessa sala il numero di posti disponibili può essere differente da una pellicola all'altra). Il numero massimo di pellicole è 500.

Lucio ha deciso di enumerare i posti in sala, permettendo che i numeri più bassi corrispondonoai posti migliori. In fase di prenotazione non è possibile scelgiere il posto.

Lucio ha deciso che anche le prenotazioni venivano salvate in un semplice file di testo.

Ogni cliente viene registrato e ha un identificativo. Un cliente può prenotare uno o più posti. Si veda l'esempio seguente:

```
IDX123 “CENA DI NATALE SENZA TORTELLINI” 18/2/2025 10:00 sala 2 posti 2
IDY456 “QUEL TRENO ERA MEGLIO PERDERELO” 15/2/2025 17:45 sala 4 posti 1
IDZ789 “IL MISTERO DELLA BICICLETTA SENZA SELLA” 15/2/2025 21:50 sala 1 posti 4
IDW321 “QUEL TRENO ERA MEGLIO PERDERELO” 17/2/2025 22:00 sala 1 posti 5
IDV654 “IL MISTERO DELLA BICICLETTA SENZA SELLA” 15/2/2025 21:50 sala 1 posti 1
IDU987 “QUEL TRENO ERA MEGLIO PERDERELO” 16/2/2025 20:10 sala 2 posti 3
IDT543 “CENA DI NATALE SENZA TORTELLINI” 18/2/2025 18:45 sala 3 posti 2
IDS876 “QUEL TRENO ERA MEGLIO PERDERELO” 17/2/2025 22:00 sala 1 posti 2
IDR234 “IL MISTERO DELLA BICICLETTA SENZA SELLA” 14/2/2025 13:15 sala 3 posti 4
IDQ567 “IL MISTERO DELLA BICICLETTA SENZA SELLA” 15/2/2025 21:50 sala 1 posti 6
IDP890 “QUEL TRENO ERA MEGLIO PERDERELO” 15/2/2025 17:45 sala 4 posti 1
```

#### Obiettivo
Lucio vi commisiona per scrivere un programma (in C) che riceva da **linea di comando** i due file e stampi a schermo il numero di posti ancora liberi, in ciascuna sala, per ciascuna pelllicola.

#### Output Atteso
Relativamente agli esempi sopra riportati, il programma dovrà stampare:
> ⚠️ ATTENZIONE! IL RISULTATO E' GENERATO DA UN GPT, POTREBBE CONTENERE ERRORI
```
QUEL TRENO ERA MEGLIO PERDERELO, 15/2/2025 ore 17:45, sala 4, posti disponibili 48  
QUEL TRENO ERA MEGLIO PERDERELO, 16/2/2025 ore 20:10, sala 2, posti disponibili 32  
QUEL TRENO ERA MEGLIO PERDERELO, 17/2/2025 ore 22:00, sala 1, posti disponibili 63  
IL MISTERO DELLA BICICLETTA SENZA SELLA, 14/2/2025 ore 13:15, sala 3, posti disponibili 21  
IL MISTERO DELLA BICICLETTA SENZA SELLA, 15/2/2025 ore 21:50, sala 1, posti disponibili 29  
IL MISTERO DELLA BICICLETTA SENZA SELLA, 15/2/2025 ore 21:50, sala 1, posti disponibili 29  
CENA DI NATALE SENZA TORTELLINI, 18/2/2025 ore 10:00, sala 2, posti disponibili 26  
CENA DI NATALE SENZA TORTELLINI, 18/2/2025 ore 18:45, sala 3, posti disponibili 16  
```

