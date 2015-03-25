void _start() {
	asm("int $0x80" :: "a"(1), "b"(0));
}
