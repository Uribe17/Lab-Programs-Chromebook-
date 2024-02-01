{ pkgs }: {
	deps = [
   pkgs.run
   pkgs.file-rename
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}