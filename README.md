# tree-sitter-asm

Generic assembly grammar for
[tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Usage in Neovim

### Parser Installation

The [nvim-treesitter plugin](https://github.com/nvim-treesitter/nvim-treesitter)
does not include this parser. To use it you must instead manually add it to your
tree-sitter config and then install it with `:TSInstall asm` or by adding it to
your `ensure_installed` list:

```lua
require('nvim-treesitter.parsers').get_parser_configs().asm = {
    install_info = {
        url = 'https://github.com/rush-rs/tree-sitter-asm.git',
        files = { 'src/parser.c' },
        branch = 'main',
    },
}
```

### Highlighting

If you want to use this parser for highlighting, you will also have to add this
repository as a plugin, for example for packer.nvim add this:

```lua
use { 'rush-rs/tree-sitter-asm' }
```
