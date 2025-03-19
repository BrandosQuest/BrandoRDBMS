# IDEA VIM SHORTCUT GUIDE

## 1. Navigating Between Files
- `:e filename` → Open a file named `filename`.
- `gf` → Open the file under the cursor.
- `<C-^>` → Switch between the last two files edited.
- `<C-o>` / `<C-i>` → Jump **backward** (`<C-o>`) or **forward** (`<C-i>`) in navigation history.
- `:bnext` (`:bn`) / `:bprev` (`:bp`) → Switch between open buffers.
- `:Buffers` (Requires FZF or CtrlP plugin) → List open buffers.

### **JetBrains Shortcuts**
- `Shift+Shift` → Search Everywhere (open files, classes, actions).
- `Ctrl+E` → Show recent files.
- `Ctrl+Tab` → Switch between open files.

---

## 2. Navigating Within Files
- `%` → Jump to matching bracket (`{}`, `()`, `[]`).
- `[[` / `]]` → Jump to the previous / next function.
- `gg` / `G` → Move to the **top (`gg`) or bottom (`G`)** of the file.
- `H` / `M` / `L` → Move the cursor to **top (`H`), middle (`M`), or bottom (`L`)** of the screen.
- `zz` → Center the current line in the window.
- `*` / `#` → Search for the word under the cursor (**forward (`*`) or backward (`#`)**).

### **JetBrains Shortcuts**
- `Ctrl+G` → Go to a specific line.
- `Ctrl+F12` → Show file structure (functions, classes).
- `Alt+Up` / `Alt+Down` → Move between methods.

---

## 3. Managing Tabs & Windows
- `:tabnew filename` → Open a file in a **new tab**.
- `gt` / `gT` → Move to the **next (`gt`) or previous (`gT`) tab**.
- `:q` → Close the **current tab**.
- `<C-w> h/j/k/l` → Move between **split windows**.

### **JetBrains Shortcuts**
- `Ctrl+Shift+[ / ]` → Move between editor tabs.
- `Alt+Left / Right` → Move **back/forward** in navigation.
- `Ctrl+W` → Close the current file/tab.
- `Shift+F4` → Open file in a new detached window.

### **Added Shortcut: Close a Specific File**
- `:bd` → Close the **current buffer (file)** without closing the window.
- **JetBrains Alternative**: `Ctrl+F4` (Windows/Linux) or `Cmd+W` (Mac).

---

## 4. Searching & Refactoring
- `/pattern` → Search forward for `pattern`.
- `n` / `N` → Repeat the last search **forward (`n`) or backward (`N`)**.
- `:%s/old/new/g` → Replace all occurrences of `old` with `new`.
- `:noh` → Clears search **highlighting**.

### **JetBrains Shortcuts**
- `Ctrl+R` → Replace.
- `Shift+F6` → Rename variables, functions, classes.
- `Ctrl+Shift+R` → Replace in the whole project.
- `Ctrl+Shift+F` → Search in the whole project.

---

## 5. Running & Debugging
- `:! command` → Run a **shell command** from Vim.
- `:make` → Runs **make** (if configured for the project).

### **JetBrains Shortcuts**
- `Shift+F10` → **Runs the project**.
- `Shift+F9` → **Starts debugging**.
- `Ctrl+F5` → **Reruns without debugging**.

---

## 6. Git Integration
- `:Git` → Runs a **Git command** (if using vim-fugitive).
- `:Gdiffsplit` → Compare the file with its **last committed version**.

### **JetBrains Shortcuts**
- `Ctrl+K` → **Commits changes**.
- `Ctrl+Shift+K` → **Pushes commits**.
- `Alt+~` → Opens the **Git history** for the file.
