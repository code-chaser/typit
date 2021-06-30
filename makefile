typit(windows).exe:main(windows).cpp typit(linux).out
	g++ "main(windows).cpp" -o "typit(windows).exe"
	
typit(linux).out:main(linux).cpp
	g++ "main(linux).cpp" -o "typit(linux).out"