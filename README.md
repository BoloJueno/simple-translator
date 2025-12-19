# Simple Translator

A compact command-line translator implemented in C that lets users create, manage, and reuse custom multilingual translation entries. The program supports adding and deleting entries and translation pairs, importing/exporting entries as plain-text files, and translating text word-by-word using tokenization and string normalization.

## Features

- Add, delete, and list translation entries and language–translation pairs.
- Translate text by mapping source-language words to target-language words.
- Import and export entries using simple `.txt` files (one entry per block).
- String utilities: trimming, capitalization, symbol removal, and tokenization.

## Build & Run

On systems with GCC (Windows with MinGW/Cygwin or Linux/macOS):

```bash
gcc -o simple-translator simple_translator.c
./simple-translator      # or simple-translator.exe on Windows
```

The program is a single-file C console application; replace `simple_translator.c` with the actual source filename as needed.

## Import / Export Format

- Exported and importable files are plain text. Each language–translation pair is written as:

	Language: Translation

- Separate logical entries with a blank line. Example:

	English: love
	Tagalog: mahal

	Spanish: amor

Each blank-line-delimited block becomes one entry when imported.

## Usage

Run the program and use the on-screen menus to manage data and translate text. The program workflow includes:

- `Manage Data` — add entries/pairs, delete entries/pairs, import/export, and search.
- `Translate` — provide source language and text, then the target language to perform word-by-word translation.

## Notes

- This project demonstrates C-level string handling, structured arrays, and file I/O for small data-driven CLI tools.
- No external libraries required.

## License

No license specified. Feel free to add a license file if you plan to publish or reuse this code.

