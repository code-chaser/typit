windows: main(windows).cpp
	g++ "main(windows).cpp" -o "typit(windows).exe"
	
linux: main(linux).cpp
	g++ "main(linux).cpp" -o "typit(linux).out"
	
run_linux: typit(linux).out
	./"typit(linux).out"

run_windows: typit(windows).exe
	typit(windows).exe
