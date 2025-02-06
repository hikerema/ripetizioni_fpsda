# Esercizio: Gestione di un Registro Studenti con Input da File

Scrivere un programma in C che gestisca un registro di studenti leggendo i dati da un file di testo passato come argomento da **riga di comando**.

## 📌 Requisiti

1. Il programma deve accettare il **nome del file** come **argomento da riga di comando**.
2. Il file di input conterrà più righe, ciascuna con i dati di uno studente nel seguente formato:

 <Nome> <Età> <media>

**Esempio di file:**

Marco 20 28.5
Lucia 22 30.0
Andrea 21 27.0

3. Il programma deve:
- **Leggere i dati dal file** e memorizzarli in un array dinamico di strutture.
- **Stampare l'elenco completo** degli studenti con nome, età e media voti.
- **Individuare e stampare lo studente con la media più alta**.

4. **Strutture dati e tecniche richieste:**
- **Struttura `Studente`** per memorizzare nome, età e media.
- **Allocazione dinamica (`malloc`)** per gestire l'array di studenti.
- **Puntatori e funzioni** per manipolare i dati.
- **Gestione degli errori**, ad esempio se il file non esiste o non è leggibile.

5. Al termine dell'esecuzione, il programma deve **liberare la memoria** allocata dinamicamente.

## 💻 Esempio di utilizzo

Compilare ed eseguire il programma passando il file di input:

```bash
gcc studenti.c -o studenti
studenti studenti.txt

Output atteso:

Elenco studenti:  
Nome: Marco, Età: 20, Media: 28.50  
Nome: Lucia, Età: 22, Media: 30.00  
Nome: Andrea, Età: 21, Media: 27.00  

Miglior studente:  
Nome: Lucia, Età: 22, Media: 30.00

🔥 Estensioni possibili (Opzionale)
	•	Aggiungere una funzione per ordinare gli studenti in base alla media voti.
	•	Salvare i risultati in un nuovo file di output.
	•	Consentire la ricerca di studenti per nome o età.