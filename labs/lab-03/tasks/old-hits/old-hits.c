typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};

typedef struct asn1_object_st asn1_object_st, *Pasn1_object_st;

typedef struct asn1_object_st ASN1_OBJECT;

struct asn1_object_st {
    char *sn;
    char **ln;
    int nid;
    int length;
    uchar *data;
    int flags;
};

typedef struct ASN1_VALUE_st ASN1_VALUE_st, *PASN1_VALUE_st;

struct ASN1_VALUE_st {
};

typedef struct ASN1_VALUE_st ASN1_VALUE;

typedef struct asn1_type_st asn1_type_st, *Pasn1_type_st;

typedef struct asn1_type_st ASN1_TYPE;

typedef union _union_257 _union_257, *P_union_257;

typedef int ASN1_BOOLEAN;

typedef struct asn1_string_st asn1_string_st, *Pasn1_string_st;

typedef struct asn1_string_st ASN1_STRING;

typedef struct asn1_string_st ASN1_INTEGER;

typedef struct asn1_string_st ASN1_ENUMERATED;

typedef struct asn1_string_st ASN1_BIT_STRING;

typedef struct asn1_string_st ASN1_OCTET_STRING;

typedef struct asn1_string_st ASN1_PRINTABLESTRING;

typedef struct asn1_string_st ASN1_T61STRING;

typedef struct asn1_string_st ASN1_IA5STRING;

typedef struct asn1_string_st ASN1_GENERALSTRING;

typedef struct asn1_string_st ASN1_BMPSTRING;

typedef struct asn1_string_st ASN1_UNIVERSALSTRING;

typedef struct asn1_string_st ASN1_UTCTIME;

typedef struct asn1_string_st ASN1_GENERALIZEDTIME;

typedef struct asn1_string_st ASN1_VISIBLESTRING;

typedef struct asn1_string_st ASN1_UTF8STRING;

union _union_257 {
    char *ptr;
    ASN1_BOOLEAN boolean;
    ASN1_STRING *asn1_string;
    ASN1_OBJECT *object;
    ASN1_INTEGER *integer;
    ASN1_ENUMERATED *enumerated;
    ASN1_BIT_STRING *bit_string;
    ASN1_OCTET_STRING *octet_string;
    ASN1_PRINTABLESTRING *printablestring;
    ASN1_T61STRING *t61string;
    ASN1_IA5STRING *ia5string;
    ASN1_GENERALSTRING *generalstring;
    ASN1_BMPSTRING *bmpstring;
    ASN1_UNIVERSALSTRING *universalstring;
    ASN1_UTCTIME *utctime;
    ASN1_GENERALIZEDTIME *generalizedtime;
    ASN1_VISIBLESTRING *visiblestring;
    ASN1_UTF8STRING *utf8string;
    ASN1_STRING *set;
    ASN1_STRING *sequence;
    ASN1_VALUE *asn1_value;
};

struct asn1_type_st {
    int type;
    union _union_257 value;
};

struct asn1_string_st {
    int length;
    int type;
    uchar *data;
    long flags;
};

typedef struct _IO_FILE FILE;

typedef long __time_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

struct evp_pkey_ctx_st {
};

typedef struct evp_cipher_ctx_st evp_cipher_ctx_st, *Pevp_cipher_ctx_st;

typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;

typedef struct evp_cipher_st evp_cipher_st, *Pevp_cipher_st;

typedef struct evp_cipher_st EVP_CIPHER;

typedef struct engine_st engine_st, *Pengine_st;

typedef struct engine_st ENGINE;

struct engine_st {
};

struct evp_cipher_ctx_st {
    EVP_CIPHER *cipher;
    ENGINE *engine;
    int encrypt;
    int buf_len;
    uchar oiv[16];
    uchar iv[16];
    uchar buf[32];
    int num;
    void *app_data;
    int key_len;
    ulong flags;
    void *cipher_data;
    int final_used;
    int block_mask;
    uchar final[32];
};

struct evp_cipher_st {
    int nid;
    int block_size;
    int key_len;
    int iv_len;
    ulong flags;
    int (*init)(EVP_CIPHER_CTX *, uchar *, uchar *, int);
    int (*do_cipher)(EVP_CIPHER_CTX *, uchar *, uchar *, size_t);
    int (*cleanup)(EVP_CIPHER_CTX *);
    int ctx_size;
    int (*set_asn1_parameters)(EVP_CIPHER_CTX *, ASN1_TYPE *);
    int (*get_asn1_parameters)(EVP_CIPHER_CTX *, ASN1_TYPE *);
    int (*ctrl)(EVP_CIPHER_CTX *, int, int, void *);
    void *app_data;
};

typedef __time_t time_t;

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void FUN_00101190(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int EVP_DecryptInit_ex(EVP_CIPHER_CTX *ctx,EVP_CIPHER *cipher,ENGINE *impl,uchar *key,uchar *iv)

{
  int iVar1;
  
  iVar1 = EVP_DecryptInit_ex(ctx,cipher,impl,key,iv);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void srandom(uint __seed)

{
  srandom(__seed);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int EVP_CIPHER_CTX_block_size(EVP_CIPHER_CTX *ctx)

{
  int iVar1;
  
  iVar1 = EVP_CIPHER_CTX_block_size(ctx);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int EVP_DecryptFinal_ex(EVP_CIPHER_CTX *ctx,uchar *outm,int *outl)

{
  int iVar1;
  
  iVar1 = EVP_DecryptFinal_ex(ctx,outm,outl);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

EVP_CIPHER_CTX * EVP_CIPHER_CTX_new(void)

{
  EVP_CIPHER_CTX *pEVar1;
  
  pEVar1 = EVP_CIPHER_CTX_new();
  return pEVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

EVP_CIPHER * EVP_aes_256_cbc(void)

{
  EVP_CIPHER *pEVar1;
  
  pEVar1 = EVP_aes_256_cbc();
  return pEVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __isoc99_scanf(void)

{
  __isoc99_scanf();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void EVP_CIPHER_CTX_free(EVP_CIPHER_CTX *a)

{
  EVP_CIPHER_CTX_free(a);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long random(void)

{
  long lVar1;
  
  lVar1 = random();
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ERR_print_errors_fp(FILE *fp)

{
  ERR_print_errors_fp(fp);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int EVP_EncryptFinal_ex(EVP_CIPHER_CTX *ctx,uchar *out,int *outl)

{
  int iVar1;
  
  iVar1 = EVP_EncryptFinal_ex(ctx,out,outl);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int EVP_DecryptUpdate(EVP_CIPHER_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  int iVar1;
  
  iVar1 = EVP_DecryptUpdate(ctx,out,outl,in,inl);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int EVP_EncryptInit_ex(EVP_CIPHER_CTX *ctx,EVP_CIPHER *cipher,ENGINE *impl,uchar *key,uchar *iv)

{
  int iVar1;
  
  iVar1 = EVP_EncryptInit_ex(ctx,cipher,impl,key,iv);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int EVP_EncryptUpdate(EVP_CIPHER_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  int iVar1;
  
  iVar1 = EVP_EncryptUpdate(ctx,out,outl,in,inl);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int EVP_DecodeBlock(uchar *t,uchar *f,int n)

{
  int iVar1;
  
  iVar1 = EVP_DecodeBlock(t,f,n);
  return iVar1;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1,auStack_8)
  ;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00101343)
// WARNING: Removing unreachable block (ram,0x0010134f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101384)
// WARNING: Removing unreachable block (ram,0x00101390)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_8059 != '\0') {
    return;
  }
  FUN_00101190(__dso_handle);
  deregister_tm_clones();
  completed_8059 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



int proc_encrypt(uchar *param_1,int param_2,uchar *param_3,uchar *param_4,uchar *param_5,
                char param_6)

{
  int iVar1;
  EVP_CIPHER *pEVar2;
  long in_FS_OFFSET;
  int local_24;
  int local_20;
  int local_1c;
  EVP_CIPHER_CTX *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = EVP_CIPHER_CTX_new();
  if (local_18 == (EVP_CIPHER_CTX *)0x0) {
    iVar1 = -1;
  }
  else {
    if (param_6 == '\0') {
      pEVar2 = EVP_aes_256_cbc();
      local_20 = EVP_DecryptInit_ex(local_18,pEVar2,(ENGINE *)0x0,param_3,param_4);
    }
    else {
      pEVar2 = EVP_aes_256_cbc();
      local_20 = EVP_EncryptInit_ex(local_18,pEVar2,(ENGINE *)0x0,param_3,param_4);
    }
    if (local_20 == 1) {
      if (param_6 == '\0') {
        iVar1 = EVP_CIPHER_CTX_block_size(local_18);
        local_20 = EVP_DecryptUpdate(local_18,param_5,&local_24,param_1,param_2 - param_2 % iVar1);
      }
      else {
        local_20 = EVP_EncryptUpdate(local_18,param_5,&local_24,param_1,param_2);
      }
      if (local_20 == 1) {
        local_1c = local_24;
        if (param_6 == '\0') {
          local_20 = EVP_DecryptFinal_ex(local_18,param_5 + local_24,&local_24);
        }
        else {
          local_20 = EVP_EncryptFinal_ex(local_18,param_5 + local_24,&local_24);
        }
        if (local_20 == 1) {
          local_1c = local_1c + local_24;
          EVP_CIPHER_CTX_free(local_18);
          iVar1 = local_1c;
        }
        else {
          iVar1 = -1;
        }
      }
      else {
        iVar1 = -1;
      }
    }
    else {
      iVar1 = -1;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar1;
}



bool validate(int param_1)

{
  return param_1 == secret + 0x539;
}



undefined8 show_link(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  uchar *puVar6;
  uchar *puVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  uchar local_3018 [577];
  undefined1 local_2dd7;
  undefined2 local_2dd6;
  undefined4 local_2dd4;
  undefined8 auStack_2dd0 [439];
  uchar local_2018 [4096];
  char local_1018 [43];
  undefined1 auStack_fed [4061];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = 
  "cpU8QtmoUqPOIRUfP26ybdYcTCaN9B+yvHKWsAskKrwFBiR5QU6Yyz/pY+fRnQlFiKdKZ6xFg6Z5HsuFyuInEYmuIQbkfAQcO+yFi0IF9frQ/RWn5DLEnWIuFWsBxIkTWm9FdLjBHtKzfXIM9FNRimqDnJXvpoOxjueFVkb48fH7G6Qze529fNFvXsnDfZjXoT8cOmHHZ1ttAOb1K8Y4fwcnZ1Zit6MfzF6erZUxLUxetpfa3gR9CyFFeFIpG+3GyM6Wk8IrM1JcdGkhCjqzTFOh5gDhH4UWMXiJk00V9DlfI2feSWHdUFOqXKxBBi6C8iEy6/ndX/RoNxIkMsgMiqYlRpMtMnKiu43ecyXW7w7JuxTBxAAa8tpNa2g/eOI1VPL9yrKu6jGVHF0CUVbWTkC+s6ZwcossIiL+Pbmd9mIXacdvTUyTp12VsEVSo8FLvleFWZnm5pmBoMJzwBRHUgsjbKNbkraRj9Yv+Dqw8yMnPxoMTCXr8uvRQplBRTAf00SweM+b2t4vxraCLzMuy1B8Qo5B6xaVX6N3zSA2Os0iWIvXem4IdIQOAuUJFEqn"
  ;
  puVar7 = local_3018;
  for (lVar5 = 0x48; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
    puVar6 = puVar6 + 8;
    puVar7 = puVar7 + 8;
  }
  *puVar7 = *puVar6;
  local_2dd7 = 0;
  local_2dd6 = 0;
  local_2dd4 = 0;
  puVar8 = auStack_2dd0;
  for (lVar5 = 0x1b7; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  sVar3 = strlen((char *)local_3018);
  iVar1 = EVP_DecodeBlock(local_2018,local_3018,(int)sVar3);
  if (iVar1 == -1) {
    fwrite("Failed to decode base64 text\n",1,0x1d,stderr);
    ERR_print_errors_fp(stderr);
    uVar4 = 0xffffffff;
  }
  else {
    iVar1 = proc_encrypt(local_2018,iVar1,key,iv,local_1018,0);
    if (iVar1 == -1) {
      fwrite("Failed to decrypt links\n",1,0x18,stderr);
      ERR_print_errors_fp(stderr);
      uVar4 = 0xffffffff;
    }
    else {
      sVar3 = strlen(local_1018);
      lVar5 = random();
      iVar1 = (int)(lVar5 % (long)(int)(sVar3 / 0x2b)) * 0x2b;
      auStack_fed[iVar1] = 0;
      iVar2 = validate(param_1);
      if (iVar2 == 0) {
        puts("Better luck next time!");
        uVar4 = 1;
      }
      else {
        printf("Congrats! Here\'s your link: %s\n",local_1018 + iVar1);
        uVar4 = 0;
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar4;
}



undefined4 main(void)

{
  int iVar1;
  undefined4 uVar2;
  time_t tVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  tVar3 = time((time_t *)0x0);
  srandom((uint)tVar3);
  lVar4 = random();
  secret = (undefined4)lVar4;
  printf("Enter your guessed secret (int): ");
  fflush(stdout);
  __isoc99_scanf(&DAT_001030f2,&local_18);
  iVar1 = validate(local_18);
  if (iVar1 == 0) {
    puts("This is incorrect");
    uVar2 = 1;
  }
  else {
    local_14 = show_link(local_18);
    uVar2 = local_14;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


