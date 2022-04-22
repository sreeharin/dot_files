set ts=4
set sw=4
set number
set cc=81
:hi ColorColumn ctermbg=lightgrey
" :highlight Pmenu ctermbg=gray 
" :highlight PmenuSel ctermbg=black

call plug#begin()

Plug 'mattn/emmet-vim'
" Plug 'scrooloose/nerdtree'
Plug 'ap/vim-css-color'
Plug 'junegunn/fzf'
Plug 'junegunn/fzf.vim'
Plug 'tpope/vim-fugitive'
Plug 'tpope/vim-sensible'
Plug 'tpope/vim-commentary'
Plug 'nvim-treesitter/nvim-treesitter', {'do': ':TSUpdate'}
Plug 'neovim/nvim-lspconfig'
Plug 'williamboman/nvim-lsp-installer'
Plug 'nvim-lualine/lualine.nvim'
Plug 'kyazdani42/nvim-web-devicons' 
Plug 'kyazdani42/nvim-tree.lua'

call plug#end()

" Plugin customization

" NERD Tree
" ---------

" autocmd VimEnter * NERDTree | wincmd p
" autocmd BufEnter * if tabpagenr('$') == 1 && winnr('$') == 1 && exists('b:NERDTree') && b:NERDTree.isTabTree() | quit | endif
" autocmd BufWinEnter * if getcmdwintype() == '' | silent NERDTreeMirror | endif
" nnoremap <C-t> :NERDTreeToggle<CR>

" Nvim Tree
" ---------
autocmd BufEnter * ++nested if winnr('$') == 1 && bufname() == 'NvimTree_' . tabpagenr() | quit | endif
nnoremap <C-n> :NvimTreeToggle<CR>

" Lua Plugins
" -----------

:lua require('plugins/lualine_plugin')
:lua require('plugins/treesitter_plugin')
:lua require('plugins/lsp_plugin')
:lua require('plugins/nvim_tree')
