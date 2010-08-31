/* This file is automatically generated */

struct s_tpm_extend_cmd{
  uint8_t buffer[34];
  uint16_t pcrNum;
  uint16_t inDigest;
} tpm_extend_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0x22, 0x0, 0x0, 0x0, 0x14, },
10, 14, };

struct s_tpm_getpermissions_cmd{
  uint8_t buffer[22];
  uint16_t index;
} tpm_getpermissions_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0x16, 0x0, 0x0, 0x0, 0x65, 0x0, 0x0, 0x0, 0x11, 0x0, 0x0, 0x0, 0x4, },
18, };

struct s_tpm_getstclearflags_cmd{
  uint8_t buffer[22];
} tpm_getstclearflags_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0x16, 0x0, 0x0, 0x0, 0x65, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x1, 0x9, },
};

struct s_tpm_getflags_cmd{
  uint8_t buffer[22];
} tpm_getflags_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0x16, 0x0, 0x0, 0x0, 0x65, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x1, 0x8, },
};

struct s_tpm_physicalsetdeactivated_cmd{
  uint8_t buffer[11];
  uint16_t deactivated;
} tpm_physicalsetdeactivated_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0xb, 0x0, 0x0, 0x0, 0x72, },
10, };

struct s_tpm_physicalenable_cmd{
  uint8_t buffer[10];
} tpm_physicalenable_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0xa, 0x0, 0x0, 0x0, 0x6f, },
};

struct s_tpm_physicaldisable_cmd{
  uint8_t buffer[10];
} tpm_physicaldisable_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0xa, 0x0, 0x0, 0x0, 0x70, },
};

struct s_tpm_forceclear_cmd{
  uint8_t buffer[10];
} tpm_forceclear_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0xa, 0x0, 0x0, 0x0, 0x5d, },
};

struct s_tpm_readpubek_cmd{
  uint8_t buffer[30];
} tpm_readpubek_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0x1e, 0x0, 0x0, 0x0, 0x7c, },
};

struct s_tpm_continueselftest_cmd{
  uint8_t buffer[10];
} tpm_continueselftest_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0xa, 0x0, 0x0, 0x0, 0x53, },
};

struct s_tpm_selftestfull_cmd{
  uint8_t buffer[10];
} tpm_selftestfull_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0xa, 0x0, 0x0, 0x0, 0x50, },
};

struct s_tpm_resume_cmd{
  uint8_t buffer[12];
} tpm_resume_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0xc, 0x0, 0x0, 0x0, 0x99, 0x0, 0x2, },
};

struct s_tpm_startup_cmd{
  uint8_t buffer[12];
} tpm_startup_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0xc, 0x0, 0x0, 0x0, 0x99, 0x0, 0x1, },
};

struct s_tpm_finalizepp_cmd{
  uint8_t buffer[12];
} tpm_finalizepp_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0xc, 0x40, 0x0, 0x0, 0xa, 0x2, 0xa0, },
};

struct s_tpm_pplock_cmd{
  uint8_t buffer[12];
} tpm_pplock_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0xc, 0x40, 0x0, 0x0, 0xa, 0x0, 0x4, },
};

struct s_tpm_ppenable_cmd{
  uint8_t buffer[12];
} tpm_ppenable_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0xc, 0x40, 0x0, 0x0, 0xa, 0x0, 0x20, },
};

struct s_tpm_ppassert_cmd{
  uint8_t buffer[12];
} tpm_ppassert_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0xc, 0x40, 0x0, 0x0, 0xa, 0x0, 0x8, },
};

struct s_tpm_nv_read_cmd{
  uint8_t buffer[22];
  uint16_t index;
  uint16_t length;
} tpm_nv_read_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0x16, 0x0, 0x0, 0x0, 0xcf, },
10, 18, };

struct s_tpm_nv_write_cmd{
  uint8_t buffer[256];
  uint16_t index;
  uint16_t length;
  uint16_t data;
} tpm_nv_write_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcd, },
10, 18, 22, };

struct s_tpm_nv_definespace_cmd{
  uint8_t buffer[101];
  uint16_t index;
  uint16_t perm;
  uint16_t size;
} tpm_nv_definespace_cmd = {{0x0, 0xc1, 0x0, 0x0, 0x0, 0x65, 0x0, 0x0, 0x0, 0xcc, 0x0, 0x18, 0, 0, 0, 0, 0x0, 0x3, 0, 0, 0, 0x1f, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x0, 0x3, 0, 0, 0, 0x1f, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x0, 0x17, },
12, 70, 77, };

const int kWriteInfoLength = 12;
const int kNvDataPublicPermissionsOffset = 60;
