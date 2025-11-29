# Source_to_HTML


Source_to_HTML is a lightweight C-based syntax highlighter that converts raw source code into formatted HTML.  
It parses the input file character-by-character, detects tokens such as keywords, identifiers, operators, strings, and preprocessors, then generates a readable HTML file with styling applied.

---

## ✨ Key Features

- 🔍 Token-based parsing engine  
- 🎨 Syntax highlighting using HTML & CSS  
- 🧠 Detects:
  - C keywords
  - Data types
  - Identifiers
  - Numbers & constants
  - Preprocessor directives (`#include`, `#define`, etc.)
  - Strings and characters
  - Operators & symbols  
- 📄 Outputs clean HTML suitable for:
  - Blogs
  - Documentation
  - Web display of code samples

---

## 📁 Project Structure
Source_to_HTML/
│
├── include/ → Header files
├── src/ → Core lexer & parser logic
├── test/ → Sample input files
├── output/ → Generated HTML output
└── README.md → Project documentation

---

## ⚙️ Compilation

Use GCC to compile all `.c` files:

```sh
gcc src/*.c -o source_to_html
./source_to_html <input_file> <output_file.html>

🎨 HTML Output Preview
Input:

#include <stdio.h>
int main() {
    printf("Hello World!");
    return 0;
}

Output snippet:

<span class="preprocessor">#include &lt;stdio.h&gt;</span>
<span class="keyword">int</span> main() {
    printf(<span class="string">"Hello World!"</span>);
    <span class="keyword">return</span> 0;
}
🧪 Test Files

Sample C programs are located inside the test/ folder for quick testing and verification.

📌 Roadmap

☐ Add theme support (Dark / Light / Solarized)

☐ Allow user-defined CSS

☐ Support more languages (Python, Java, JS, etc.)

☐ Add line numbering

☐ Add GUI tool

🤝 Contributing

Contributions are welcome.
Submit pull requests or create an issue for bugs or feature requests.

👤 Author

Nandan Kumar T
GitHub: https://github.com/NandanKumarT
