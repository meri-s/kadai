

	s2[0] = 0x61;
	s2[1] = 0x62;
	s2[2] = 0x63;
	s2[3] = 0x64;
	s2[4] = 0x65;
	s2[5] = 0x66;
	s2[6] = 0x67;
	s2[7] = 0x68;
	s2[8] = 0x69;
	s2[9] = 0x6a;
	s2[10] = 0x6b;
	s2[11] = 0x6c;
	s2[12] = 0x6d;
	s2[13] = 0x6e;
	s2[14] = '\0';

	memcpy(&(ss1[0]), &(s1[0]), 11);
	strcpy(&(ss2[0]), &(s2[0]));

	i = 10;

	sprintf(&(ss3[0]), "変数の値は%d", i);

	return 0;
}