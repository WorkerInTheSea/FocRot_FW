/*-------------------------------------------------------------------------
 * MPLAB-Cxx  PIC24F08KL302 processor header
 *
 * (c) Copyright 1999-2011 Microchip Technology, All rights reserved
 *-------------------------------------------------------------------------*/

#ifndef __PIC24F08KL302__
#error "Include file does not match processor setting"
#endif

#ifndef __24F08KL302_H
#define __24F08KL302_H

extern volatile unsigned int  WREG0 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG1 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG2 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG3 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG4 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG5 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG6 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG7 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG8 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG9 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG10 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG11 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG12 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG13 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG14 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  WREG15 __attribute__((__sfr__,__deprecated__,__unsafe__));
extern volatile unsigned int  SPLIM __attribute__((__sfr__));
extern volatile unsigned int  PCL __attribute__((__sfr__));
extern volatile unsigned char PCH __attribute__((__sfr__));
extern volatile unsigned char TBLPAG __attribute__((__sfr__));
extern volatile unsigned char PSVPAG __attribute__((__sfr__));
extern volatile unsigned int  RCOUNT __attribute__((__sfr__));
extern volatile unsigned int  SR __attribute__((__sfr__));
__extension__ typedef struct tagSRBITS {
  union {
    struct {
      unsigned C:1;
      unsigned Z:1;
      unsigned OV:1;
      unsigned N:1;
      unsigned RA:1;
      unsigned IPL:3;
      unsigned DC:1;
    };
    struct {
      unsigned :5;
      unsigned IPL0:1;
      unsigned IPL1:1;
      unsigned IPL2:1;
    };
  };
} SRBITS;
extern volatile SRBITS SRbits __attribute__((__sfr__));

extern volatile unsigned int  CORCON __attribute__((__sfr__));
typedef struct tagCORCONBITS {
  unsigned :2;
  unsigned PSV:1;
  unsigned IPL3:1;
} CORCONBITS;
extern volatile CORCONBITS CORCONbits __attribute__((__sfr__));

extern volatile unsigned int  DISICNT __attribute__((__sfr__));
extern volatile unsigned int  CNPD1 __attribute__((__sfr__));
typedef struct tagCNPD1BITS {
  unsigned CN0PDE:1;
  unsigned CN1PDE:1;
  unsigned CN2PDE:1;
  unsigned CN3PDE:1;
  unsigned CN4PDE:1;
  unsigned CN5PDE:1;
  unsigned CN6PDE:1;
  unsigned CN7PDE:1;
  unsigned CN8PDE:1;
  unsigned CN9PDE:1;
  unsigned :1;
  unsigned CN11PDE:1;
  unsigned CN12PDE:1;
  unsigned CN13PDE:1;
  unsigned CN14PDE:1;
  unsigned CN15PDE:1;
} CNPD1BITS;
extern volatile CNPD1BITS CNPD1bits __attribute__((__sfr__));

extern volatile unsigned int  CNPD2 __attribute__((__sfr__));
typedef struct tagCNPD2BITS {
  unsigned CN16PDE:1;
  unsigned :4;
  unsigned CN21PDE:1;
  unsigned CN22PDE:1;
  unsigned CN23PDE:1;
  unsigned CN24PDE:1;
  unsigned :2;
  unsigned CN27PDE:1;
  unsigned :1;
  unsigned CN29PDE:1;
  unsigned CN30PDE:1;
} CNPD2BITS;
extern volatile CNPD2BITS CNPD2bits __attribute__((__sfr__));

extern volatile unsigned int  CNEN1 __attribute__((__sfr__));
typedef struct tagCNEN1BITS {
  unsigned CN0IE:1;
  unsigned CN1IE:1;
  unsigned CN2IE:1;
  unsigned CN3IE:1;
  unsigned CN4IE:1;
  unsigned CN5IE:1;
  unsigned CN6IE:1;
  unsigned CN7IE:1;
  unsigned CN8IE:1;
  unsigned CN9IE:1;
  unsigned :1;
  unsigned CN11IE:1;
  unsigned CN12IE:1;
  unsigned CN13IE:1;
  unsigned CN14IE:1;
  unsigned CN15IE:1;
} CNEN1BITS;
extern volatile CNEN1BITS CNEN1bits __attribute__((__sfr__));

extern volatile unsigned int  CNEN2 __attribute__((__sfr__));
typedef struct tagCNEN2BITS {
  unsigned CN16IE:1;
  unsigned :4;
  unsigned CN21IE:1;
  unsigned CN22IE:1;
  unsigned CN23IE:1;
  unsigned CN24IE:1;
  unsigned :2;
  unsigned CN27IE:1;
  unsigned :1;
  unsigned CN29IE:1;
  unsigned CN30IE:1;
} CNEN2BITS;
extern volatile CNEN2BITS CNEN2bits __attribute__((__sfr__));

extern volatile unsigned int  CNPU1 __attribute__((__sfr__));
typedef struct tagCNPU1BITS {
  unsigned CN0PUE:1;
  unsigned CN1PUE:1;
  unsigned CN2PUE:1;
  unsigned CN3PUE:1;
  unsigned CN4PUE:1;
  unsigned CN5PUE:1;
  unsigned CN6PUE:1;
  unsigned CN7PUE:1;
  unsigned CN8PUE:1;
  unsigned CN9PUE:1;
  unsigned :1;
  unsigned CN11PUE:1;
  unsigned CN12PUE:1;
  unsigned CN13PUE:1;
  unsigned CN14PUE:1;
  unsigned CN15PUE:1;
} CNPU1BITS;
extern volatile CNPU1BITS CNPU1bits __attribute__((__sfr__));

extern volatile unsigned int  CNPU2 __attribute__((__sfr__));
typedef struct tagCNPU2BITS {
  unsigned CN16PUE:1;
  unsigned :4;
  unsigned CN21PUE:1;
  unsigned CN22PUE:1;
  unsigned CN23PUE:1;
  unsigned CN24PUE:1;
  unsigned :2;
  unsigned CN27PUE:1;
  unsigned :1;
  unsigned CN29PUE:1;
  unsigned CN30PUE:1;
} CNPU2BITS;
extern volatile CNPU2BITS CNPU2bits __attribute__((__sfr__));

extern volatile unsigned int  INTCON1 __attribute__((__sfr__));
typedef struct tagINTCON1BITS {
  unsigned :1;
  unsigned OSCFAIL:1;
  unsigned STKERR:1;
  unsigned ADDRERR:1;
  unsigned MATHERR:1;
  unsigned :10;
  unsigned NSTDIS:1;
} INTCON1BITS;
extern volatile INTCON1BITS INTCON1bits __attribute__((__sfr__));

extern volatile unsigned int  INTCON2 __attribute__((__sfr__));
typedef struct tagINTCON2BITS {
  unsigned INT0EP:1;
  unsigned INT1EP:1;
  unsigned INT2EP:1;
  unsigned :11;
  unsigned DISI:1;
  unsigned ALTIVT:1;
} INTCON2BITS;
extern volatile INTCON2BITS INTCON2bits __attribute__((__sfr__));

extern volatile unsigned int  IFS0 __attribute__((__sfr__));
typedef struct tagIFS0BITS {
  unsigned INT0IF:1;
  unsigned :1;
  unsigned CCP1IF:1;
  unsigned T1IF:1;
  unsigned :2;
  unsigned CCP2IF:1;
  unsigned T2IF:1;
  unsigned T3IF:1;
  unsigned :2;
  unsigned U1RXIF:1;
  unsigned U1TXIF:1;
  unsigned :2;
  unsigned NVMIF:1;
} IFS0BITS;
extern volatile IFS0BITS IFS0bits __attribute__((__sfr__));

extern volatile unsigned int  IFS1 __attribute__((__sfr__));
typedef struct tagIFS1BITS {
  unsigned SSP1IF:1;
  unsigned BCL1IF:1;
  unsigned CMIF:1;
  unsigned CNIF:1;
  unsigned INT1IF:1;
  unsigned :4;
  unsigned CCP3IF:1;
  unsigned :1;
  unsigned T4IF:1;
  unsigned :1;
  unsigned INT2IF:1;
  unsigned U2RXIF:1;
  unsigned U2TXIF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

extern volatile unsigned int  IFS2 __attribute__((__sfr__));
typedef struct tagIFS2BITS {
  unsigned :5;
  unsigned T3GIF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

extern volatile unsigned int  IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  unsigned :1;
  unsigned SSP2IF:1;
  unsigned BCL2IF:1;
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

extern volatile unsigned int  IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  unsigned :1;
  unsigned U1ERIF:1;
  unsigned U2ERIF:1;
  unsigned :5;
  unsigned HLVDIF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

extern volatile unsigned int  IFS5 __attribute__((__sfr__));
typedef struct tagIFS5BITS {
  unsigned ULPWUIF:1;
} IFS5BITS;
extern volatile IFS5BITS IFS5bits __attribute__((__sfr__));

extern volatile unsigned int  IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  unsigned INT0IE:1;
  unsigned :1;
  unsigned CCP1IE:1;
  unsigned T1IE:1;
  unsigned :2;
  unsigned CCP2IE:1;
  unsigned T2IE:1;
  unsigned T3IE:1;
  unsigned :2;
  unsigned U1RXIE:1;
  unsigned U1TXIE:1;
  unsigned :2;
  unsigned NVMIE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

extern volatile unsigned int  IEC1 __attribute__((__sfr__));
typedef struct tagIEC1BITS {
  unsigned SSP1IE:1;
  unsigned BCL1IE:1;
  unsigned CMIE:1;
  unsigned CNIE:1;
  unsigned INT1IE:1;
  unsigned :4;
  unsigned CCP3IE:1;
  unsigned :1;
  unsigned T4IE:1;
  unsigned :1;
  unsigned INT2IE:1;
  unsigned U2RXIE:1;
  unsigned U2TXIE:1;
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

extern volatile unsigned int  IEC2 __attribute__((__sfr__));
typedef struct tagIEC2BITS {
  unsigned :5;
  unsigned T3GIE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

extern volatile unsigned int  IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  unsigned :1;
  unsigned SSP2IE:1;
  unsigned BCL2IE:1;
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

extern volatile unsigned int  IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  unsigned :1;
  unsigned U1ERIE:1;
  unsigned U2ERIE:1;
  unsigned :5;
  unsigned HLVDIE:1;
} IEC4BITS;
extern volatile IEC4BITS IEC4bits __attribute__((__sfr__));

extern volatile unsigned int  IEC5 __attribute__((__sfr__));
typedef struct tagIEC5BITS {
  unsigned ULPWUIE:1;
} IEC5BITS;
extern volatile IEC5BITS IEC5bits __attribute__((__sfr__));

extern volatile unsigned int  IPC0 __attribute__((__sfr__));
__extension__ typedef struct tagIPC0BITS {
  union {
    struct {
      unsigned INT0IP:3;
      unsigned :5;
      unsigned CCP1IP:3;
      unsigned :1;
      unsigned T1IP:3;
    };
    struct {
      unsigned INT0IP0:1;
      unsigned INT0IP1:1;
      unsigned INT0IP2:1;
      unsigned :5;
      unsigned CCP1IP0:1;
      unsigned CCP1IP1:1;
      unsigned CCP1IP2:1;
      unsigned :1;
      unsigned T1IP0:1;
      unsigned T1IP1:1;
      unsigned T1IP2:1;
    };
  };
} IPC0BITS;
extern volatile IPC0BITS IPC0bits __attribute__((__sfr__));

extern volatile unsigned int  IPC1 __attribute__((__sfr__));
__extension__ typedef struct tagIPC1BITS {
  union {
    struct {
      unsigned :8;
      unsigned CCP2IP:3;
      unsigned :1;
      unsigned T2IP:3;
    };
    struct {
      unsigned :8;
      unsigned CCP2IP0:1;
      unsigned CCP2IP1:1;
      unsigned CCP2IP2:1;
      unsigned :1;
      unsigned T2IP0:1;
      unsigned T2IP1:1;
      unsigned T2IP2:1;
    };
  };
} IPC1BITS;
extern volatile IPC1BITS IPC1bits __attribute__((__sfr__));

extern volatile unsigned int  IPC2 __attribute__((__sfr__));
__extension__ typedef struct tagIPC2BITS {
  union {
    struct {
      unsigned T3IP:3;
      unsigned :9;
      unsigned U1RXIP:3;
    };
    struct {
      unsigned T3IP0:1;
      unsigned T3IP1:1;
      unsigned T3IP2:1;
      unsigned :9;
      unsigned U1RXIP0:1;
      unsigned U1RXIP1:1;
      unsigned U1RXIP2:1;
    };
  };
} IPC2BITS;
extern volatile IPC2BITS IPC2bits __attribute__((__sfr__));

extern volatile unsigned int  IPC3 __attribute__((__sfr__));
__extension__ typedef struct tagIPC3BITS {
  union {
    struct {
      unsigned U1TXIP:3;
      unsigned :9;
      unsigned NVMIP:3;
    };
    struct {
      unsigned U1TXIP0:1;
      unsigned U1TXIP1:1;
      unsigned U1TXIP2:1;
      unsigned :1;
      unsigned AD1IP0:1;
      unsigned AD1IP1:1;
      unsigned AD1IP2:1;
      unsigned :5;
      unsigned NVMIP0:1;
      unsigned NVMIP1:1;
      unsigned NVMIP2:1;
    };
  };
} IPC3BITS;
extern volatile IPC3BITS IPC3bits __attribute__((__sfr__));

extern volatile unsigned int  IPC4 __attribute__((__sfr__));
__extension__ typedef struct tagIPC4BITS {
  union {
    struct {
      unsigned SSP1IP:3;
      unsigned :1;
      unsigned BCL1IP:3;
      unsigned :1;
      unsigned CMIP:3;
      unsigned :1;
      unsigned CNIP:3;
    };
    struct {
      unsigned SSP1IP0:1;
      unsigned SSP1IP1:1;
      unsigned SSP1IP2:1;
      unsigned :1;
      unsigned BCL1IP0:1;
      unsigned BCL1IP1:1;
      unsigned BCL1IP2:1;
      unsigned :1;
      unsigned CMIP0:1;
      unsigned CMIP1:1;
      unsigned CMIP2:1;
      unsigned :1;
      unsigned CNIP0:1;
      unsigned CNIP1:1;
      unsigned CNIP2:1;
    };
  };
} IPC4BITS;
extern volatile IPC4BITS IPC4bits __attribute__((__sfr__));

extern volatile unsigned int  IPC5 __attribute__((__sfr__));
__extension__ typedef struct tagIPC5BITS {
  union {
    struct {
      unsigned INT1IP:3;
    };
    struct {
      unsigned INT1IP0:1;
      unsigned INT1IP1:1;
      unsigned INT1IP2:1;
    };
  };
} IPC5BITS;
extern volatile IPC5BITS IPC5bits __attribute__((__sfr__));

extern volatile unsigned int  IPC6 __attribute__((__sfr__));
__extension__ typedef struct tagIPC6BITS {
  union {
    struct {
      unsigned :4;
      unsigned CCP3IP:3;
      unsigned :5;
      unsigned T4IP:3;
    };
    struct {
      unsigned :4;
      unsigned CCP3IP0:1;
      unsigned CCP3IP1:1;
      unsigned CCP3IP2:1;
      unsigned :5;
      unsigned T4IP0:1;
      unsigned T4IP1:1;
      unsigned T4IP2:1;
    };
  };
} IPC6BITS;
extern volatile IPC6BITS IPC6bits __attribute__((__sfr__));

extern volatile unsigned int  IPC7 __attribute__((__sfr__));
__extension__ typedef struct tagIPC7BITS {
  union {
    struct {
      unsigned :4;
      unsigned INT2IP:3;
      unsigned :1;
      unsigned U2RXIP:3;
      unsigned :1;
      unsigned U2TXIP:3;
    };
    struct {
      unsigned :4;
      unsigned INT2IP0:1;
      unsigned INT2IP1:1;
      unsigned INT2IP2:1;
      unsigned :1;
      unsigned U2RXIP0:1;
      unsigned U2RXIP1:1;
      unsigned U2RXIP2:1;
      unsigned :1;
      unsigned U2TXIP0:1;
      unsigned U2TXIP1:1;
      unsigned U2TXIP2:1;
    };
  };
} IPC7BITS;
extern volatile IPC7BITS IPC7bits __attribute__((__sfr__));

extern volatile unsigned int  IPC9 __attribute__((__sfr__));
__extension__ typedef struct tagIPC9BITS {
  union {
    struct {
      unsigned :4;
      unsigned T3GIP:3;
    };
    struct {
      unsigned :4;
      unsigned T3GIP0:1;
      unsigned T3GIP1:1;
      unsigned T3GIP2:1;
    };
  };
} IPC9BITS;
extern volatile IPC9BITS IPC9bits __attribute__((__sfr__));

extern volatile unsigned int  IPC12 __attribute__((__sfr__));
__extension__ typedef struct tagIPC12BITS {
  union {
    struct {
      unsigned :4;
      unsigned SSP2IP:3;
      unsigned :1;
      unsigned BCL2IP:3;
    };
    struct {
      unsigned :4;
      unsigned SSP2IP0:1;
      unsigned SSP2IP1:1;
      unsigned SSP2IP2:1;
      unsigned :1;
      unsigned BCL2IP0:1;
      unsigned BCL2IP1:1;
      unsigned BCL2IP2:1;
    };
  };
} IPC12BITS;
extern volatile IPC12BITS IPC12bits __attribute__((__sfr__));

extern volatile unsigned int  IPC16 __attribute__((__sfr__));
__extension__ typedef struct tagIPC16BITS {
  union {
    struct {
      unsigned :4;
      unsigned U1ERIP:3;
      unsigned :1;
      unsigned U2ERIP:3;
    };
    struct {
      unsigned :4;
      unsigned U1ERIP0:1;
      unsigned U1ERIP1:1;
      unsigned U1ERIP2:1;
      unsigned :1;
      unsigned U2ERIP0:1;
      unsigned U2ERIP1:1;
      unsigned U2ERIP2:1;
    };
  };
} IPC16BITS;
extern volatile IPC16BITS IPC16bits __attribute__((__sfr__));

extern volatile unsigned int  IPC18 __attribute__((__sfr__));
__extension__ typedef struct tagIPC18BITS {
  union {
    struct {
      unsigned HLVDIP:3;
    };
    struct {
      unsigned HLVDIP0:1;
      unsigned HLVDIP1:1;
      unsigned HLVDIP2:1;
    };
  };
} IPC18BITS;
extern volatile IPC18BITS IPC18bits __attribute__((__sfr__));

extern volatile unsigned int  IPC20 __attribute__((__sfr__));
__extension__ typedef struct tagIPC20BITS {
  union {
    struct {
      unsigned ULPWUIP:3;
    };
    struct {
      unsigned ULPWUIP0:1;
      unsigned ULPWUIP1:1;
      unsigned ULPWUIP2:1;
    };
  };
} IPC20BITS;
extern volatile IPC20BITS IPC20bits __attribute__((__sfr__));

extern volatile unsigned int  INTTREG __attribute__((__sfr__));
__extension__ typedef struct tagINTTREGBITS {
  union {
    struct {
      unsigned VECNUM:7;
      unsigned :1;
      unsigned ILR:4;
      unsigned :1;
      unsigned VHOLD:1;
      unsigned :1;
      unsigned CPUIRQ:1;
    };
    struct {
      unsigned VECNUM0:1;
      unsigned VECNUM1:1;
      unsigned VECNUM2:1;
      unsigned VECNUM3:1;
      unsigned VECNUM4:1;
      unsigned VECNUM5:1;
      unsigned VECNUM6:1;
      unsigned :1;
      unsigned ILR0:1;
      unsigned ILR1:1;
      unsigned ILR2:1;
      unsigned ILR3:1;
    };
  };
} INTTREGBITS;
extern volatile INTTREGBITS INTTREGbits __attribute__((__sfr__));

extern volatile unsigned int  TMR1 __attribute__((__sfr__));
extern volatile unsigned int  PR1 __attribute__((__sfr__));
extern volatile unsigned int  T1CON __attribute__((__sfr__));
__extension__ typedef struct tagT1CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned TCS:1;
      unsigned TSYNC:1;
      unsigned :1;
      unsigned TCKPS:2;
      unsigned TGATE:1;
      unsigned :1;
      unsigned T1ECS:2;
      unsigned :3;
      unsigned TSIDL:1;
      unsigned :1;
      unsigned TON:1;
    };
    struct {
      unsigned :4;
      unsigned TCKPS0:1;
      unsigned TCKPS1:1;
      unsigned :2;
      unsigned T1ECS0:1;
      unsigned T1ECS1:1;
    };
  };
} T1CONBITS;
extern volatile T1CONBITS T1CONbits __attribute__((__sfr__));

extern volatile unsigned char TMR2 __attribute__((__sfr__));
extern volatile unsigned int  PR2 __attribute__((__sfr__));
extern volatile unsigned int  T2CON __attribute__((__sfr__));
__extension__ typedef struct tagT2CONBITS {
  union {
    struct {
      unsigned T2CKPS:2;
      unsigned TMR2ON:1;
      unsigned T2OUTPS:4;
    };
    struct {
      unsigned TCKPS:2;
      unsigned TON:1;
      unsigned TOUTPS:4;
    };
    struct {
      unsigned T2CKPS0:1;
      unsigned T2CKPS1:1;
      unsigned :1;
      unsigned T2OUTPS0:1;
      unsigned T2OUTPS1:1;
      unsigned T2OUTPS2:1;
      unsigned T2OUTPS3:1;
    };
  };
} T2CONBITS;
extern volatile T2CONBITS T2CONbits __attribute__((__sfr__));

extern volatile unsigned int  TMR3 __attribute__((__sfr__));
extern volatile unsigned int  T3GCON __attribute__((__sfr__));
__extension__ typedef struct tagT3GCONBITS {
  union {
    struct {
      unsigned T3GSS:2;
      unsigned T3GVAL:1;
      unsigned T3GGO:1;
      unsigned T3GSPM:1;
      unsigned T3GTM:1;
      unsigned T3GPOL:1;
      unsigned TMR3GE:1;
    };
    struct {
      unsigned T3GSS0:1;
      unsigned T3GSS1:1;
      unsigned :1;
      unsigned NOT_T3DONE:1;
    };
    struct {
      unsigned TGSS:2;
      unsigned TGVAL:1;
      unsigned TGGO:1;
      unsigned TGSE:1;
      unsigned TGTM:1;
      unsigned TGPOL:1;
      unsigned TGATE:1;
    };
  };
} T3GCONBITS;
extern volatile T3GCONBITS T3GCONbits __attribute__((__sfr__));

extern volatile unsigned int  T3CON __attribute__((__sfr__));
__extension__ typedef struct tagT3CONBITS {
  union {
    struct {
      unsigned TMR3ON:1;
      unsigned :1;
      unsigned NOT_T3SYNC:1;
      unsigned T3OSCEN:1;
      unsigned T3CKPS:2;
      unsigned TMR3CS:2;
    };
    struct {
      unsigned TON:1;
      unsigned :1;
      unsigned NOT_TSYNC:1;
      unsigned SOSCEN:1;
      unsigned TCKPS:2;
      unsigned TCS:2;
    };
    struct {
      unsigned :4;
      unsigned T3CKPS0:1;
      unsigned T3CKPS1:1;
      unsigned TMR3CS0:1;
      unsigned TMR3CS1:1;
    };
  };
} T3CONBITS;
extern volatile T3CONBITS T3CONbits __attribute__((__sfr__));

extern volatile unsigned int  TMR4 __attribute__((__sfr__));
extern volatile unsigned int  PR4 __attribute__((__sfr__));
extern volatile unsigned int  T4CON __attribute__((__sfr__));
__extension__ typedef struct tagT4CONBITS {
  union {
    struct {
      unsigned T4CKPS:2;
      unsigned TMR4ON:1;
      unsigned T4OUTPS:4;
    };
    struct {
      unsigned TCKPS:2;
      unsigned TON:1;
      unsigned TOUTPS:4;
    };
    struct {
      unsigned T4CKPS0:1;
      unsigned T4CKPS1:1;
      unsigned :1;
      unsigned T4OUTPS0:1;
      unsigned T4OUTPS1:1;
      unsigned T4OUTPS2:1;
      unsigned T4OUTPS3:1;
    };
  };
} T4CONBITS;
extern volatile T4CONBITS T4CONbits __attribute__((__sfr__));

extern volatile unsigned int  CCPTMRS0 __attribute__((__sfr__));
typedef struct tagCCPTMRS0BITS {
  unsigned C1TSEL0:1;
  unsigned :2;
  unsigned C2TSEL0:1;
  unsigned :2;
  unsigned C3TSEL0:1;
} CCPTMRS0BITS;
extern volatile CCPTMRS0BITS CCPTMRS0bits __attribute__((__sfr__));

extern volatile unsigned int  CCP1CON __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CONBITS {
  union {
    struct {
      unsigned CCPM:4;
      unsigned DCB:2;
      unsigned PM:2;
    };
    struct {
      unsigned CCPM0:1;
      unsigned CCPM1:1;
      unsigned CCPM2:1;
      unsigned CCPM3:1;
      unsigned DCB0:1;
      unsigned DCB1:1;
      unsigned PM0:1;
      unsigned PM1:1;
    };
    struct {
      unsigned CCP1M:4;
      unsigned DC1B:2;
      unsigned P1M:2;
    };
    struct {
      unsigned CCP1M0:1;
      unsigned CCP1M1:1;
      unsigned CCP1M2:1;
      unsigned CCP1M3:1;
      unsigned DC1B0:1;
      unsigned DC1B1:1;
      unsigned P1M0:1;
      unsigned P1M1:1;
    };
  };
} CCP1CONBITS;
extern volatile CCP1CONBITS CCP1CONbits __attribute__((__sfr__));

extern volatile unsigned int  ECCP1CON __attribute__((__sfr__));
__extension__ typedef struct tagECCP1CONBITS {
  union {
    struct {
      unsigned CCPM:4;
      unsigned DCB:2;
      unsigned PM:2;
    };
    struct {
      unsigned CCPM0:1;
      unsigned CCPM1:1;
      unsigned CCPM2:1;
      unsigned CCPM3:1;
      unsigned DCB0:1;
      unsigned DCB1:1;
      unsigned PM0:1;
      unsigned PM1:1;
    };
    struct {
      unsigned CCP1M:4;
      unsigned DC1B:2;
      unsigned P1M:2;
    };
    struct {
      unsigned CCP1M0:1;
      unsigned CCP1M1:1;
      unsigned CCP1M2:1;
      unsigned CCP1M3:1;
      unsigned DC1B0:1;
      unsigned DC1B1:1;
      unsigned P1M0:1;
      unsigned P1M1:1;
    };
  };
} ECCP1CONBITS;
extern volatile ECCP1CONBITS ECCP1CONbits __attribute__((__sfr__));

extern volatile unsigned char CCPR1L __attribute__((__sfr__));
extern volatile unsigned char CCPR1H __attribute__((__sfr__));
extern volatile unsigned int  ECCP1DEL __attribute__((__sfr__));
__extension__ typedef struct tagECCP1DELBITS {
  union {
    struct {
      unsigned PDC:7;
      unsigned PRSEN:1;
    };
    struct {
      unsigned PDC0:1;
      unsigned PDC1:1;
      unsigned PDC2:1;
      unsigned PDC3:1;
      unsigned PDC4:1;
      unsigned PDC5:1;
      unsigned PDC6:1;
    };
    struct {
      unsigned P1DC:7;
      unsigned P1RSEN:1;
    };
    struct {
      unsigned P1DC0:1;
      unsigned P1DC1:1;
      unsigned P1DC2:1;
      unsigned P1DC3:1;
      unsigned P1DC4:1;
      unsigned P1DC5:1;
      unsigned P1DC6:1;
    };
  };
} ECCP1DELBITS;
extern volatile ECCP1DELBITS ECCP1DELbits __attribute__((__sfr__));

extern volatile unsigned int  PWM1CON __attribute__((__sfr__));
__extension__ typedef struct tagPWM1CONBITS {
  union {
    struct {
      unsigned PDC:7;
      unsigned PRSEN:1;
    };
    struct {
      unsigned PDC0:1;
      unsigned PDC1:1;
      unsigned PDC2:1;
      unsigned PDC3:1;
      unsigned PDC4:1;
      unsigned PDC5:1;
      unsigned PDC6:1;
    };
    struct {
      unsigned P1DC:7;
      unsigned P1RSEN:1;
    };
    struct {
      unsigned P1DC0:1;
      unsigned P1DC1:1;
      unsigned P1DC2:1;
      unsigned P1DC3:1;
      unsigned P1DC4:1;
      unsigned P1DC5:1;
      unsigned P1DC6:1;
    };
  };
} PWM1CONBITS;
extern volatile PWM1CONBITS PWM1CONbits __attribute__((__sfr__));

extern volatile unsigned int  ECCP1AS __attribute__((__sfr__));
__extension__ typedef struct tagECCP1ASBITS {
  union {
    struct {
      unsigned PSSBD:2;
      unsigned PSSAC:2;
      unsigned ECCPAS:3;
      unsigned ECCPASE:1;
    };
    struct {
      unsigned PSSBD0:1;
      unsigned PSSBD1:1;
      unsigned PSSAC0:1;
      unsigned PSSAC1:1;
      unsigned ECCPAS0:1;
      unsigned ECCPAS1:1;
      unsigned ECCPAS2:1;
    };
    struct {
      unsigned PSS1BD:2;
      unsigned PSS1AC:2;
      unsigned ECCP1AS:3;
    };
    struct {
      unsigned PSS1BD0:1;
      unsigned PSS1BD1:1;
      unsigned PSS1AC0:1;
      unsigned PSS1AC1:1;
      unsigned ECCP1AS0:1;
      unsigned ECCP1AS1:1;
      unsigned ECCP1AS2:1;
    };
  };
} ECCP1ASBITS;
extern volatile ECCP1ASBITS ECCP1ASbits __attribute__((__sfr__));

extern volatile unsigned int  PSTR1CON __attribute__((__sfr__));
__extension__ typedef struct tagPSTR1CONBITS {
  union {
    struct {
      unsigned STRA:1;
      unsigned STRB:1;
      unsigned STRC:1;
      unsigned STRD:1;
      unsigned STRSYNC:1;
      unsigned :1;
      unsigned CMPL:2;
    };
    struct {
      unsigned :6;
      unsigned CMPL0:1;
      unsigned CMPL1:1;
    };
  };
} PSTR1CONBITS;
extern volatile PSTR1CONBITS PSTR1CONbits __attribute__((__sfr__));

extern volatile unsigned int  CCP2CON __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CONBITS {
  union {
    struct {
      unsigned CCPM:4;
      unsigned DCB:2;
    };
    struct {
      unsigned CCPM0:1;
      unsigned CCPM1:1;
      unsigned CCPM2:1;
      unsigned CCPM3:1;
      unsigned DCB0:1;
      unsigned DCB1:1;
    };
    struct {
      unsigned CCP2M:4;
      unsigned DC2B:2;
    };
    struct {
      unsigned CCP2M0:1;
      unsigned CCP2M1:1;
      unsigned CCP2M2:1;
      unsigned CCP2M3:1;
      unsigned DC2B0:1;
      unsigned DC2B1:1;
    };
  };
} CCP2CONBITS;
extern volatile CCP2CONBITS CCP2CONbits __attribute__((__sfr__));

extern volatile unsigned char CCPR2L __attribute__((__sfr__));
extern volatile unsigned char CCPR2H __attribute__((__sfr__));
extern volatile unsigned int  CCP3CON __attribute__((__sfr__));
__extension__ typedef struct tagCCP3CONBITS {
  union {
    struct {
      unsigned CCPM:4;
      unsigned DCB:2;
    };
    struct {
      unsigned CCPM0:1;
      unsigned CCPM1:1;
      unsigned CCPM2:1;
      unsigned CCPM3:1;
      unsigned DCB0:1;
      unsigned DCB1:1;
    };
    struct {
      unsigned CCP3M:4;
      unsigned DC3B:2;
    };
    struct {
      unsigned CCP3M0:1;
      unsigned CCP3M1:1;
      unsigned CCP3M2:1;
      unsigned CCP3M3:1;
      unsigned DC3B0:1;
      unsigned DC3B1:1;
    };
  };
} CCP3CONBITS;
extern volatile CCP3CONBITS CCP3CONbits __attribute__((__sfr__));

extern volatile unsigned char CCPR3L __attribute__((__sfr__));
extern volatile unsigned char CCPR3H __attribute__((__sfr__));
extern volatile unsigned int  SPI1BUF __attribute__((__sfr__));
__extension__ typedef struct tagSPI1BUFBITS {
  union {
    struct {
      unsigned SSPBUF:8;
    };
    struct {
      unsigned SPI1BUF:8;
    };
  };
} SPI1BUFBITS;
extern volatile SPI1BUFBITS SPI1BUFbits __attribute__((__sfr__));

extern volatile unsigned int  SSP1BUF __attribute__((__sfr__));
__extension__ typedef struct tagSSP1BUFBITS {
  union {
    struct {
      unsigned SSPBUF:8;
    };
    struct {
      unsigned SPI1BUF:8;
    };
  };
} SSP1BUFBITS;
extern volatile SSP1BUFBITS SSP1BUFbits __attribute__((__sfr__));

extern volatile unsigned int  SSP1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSSP1CON1BITS {
  union {
    struct {
      unsigned SSPM:4;
      unsigned CKP:1;
      unsigned SSPEN:1;
      unsigned SSPOV:1;
      unsigned WCOL:1;
    };
    struct {
      unsigned SSPM0:1;
      unsigned SSPM1:1;
      unsigned SSPM2:1;
      unsigned SSPM3:1;
    };
  };
} SSP1CON1BITS;
extern volatile SSP1CON1BITS SSP1CON1bits __attribute__((__sfr__));

extern volatile unsigned int  SSP1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagSSP1CON2BITS {
  union {
    struct {
      unsigned SEN:1;
      unsigned RSEN:1;
      unsigned PEN:1;
      unsigned RCEN:1;
      unsigned ACKEN:1;
      unsigned ACKDT:1;
      unsigned ACKSTAT:1;
      unsigned GCEN:1;
    };
    struct {
      unsigned :1;
      unsigned ADMSK:5;
    };
    struct {
      unsigned :1;
      unsigned ADMSK1:1;
      unsigned ADMSK2:1;
      unsigned ADMSK3:1;
      unsigned ADMSK4:1;
      unsigned ADMSK5:1;
    };
  };
} SSP1CON2BITS;
extern volatile SSP1CON2BITS SSP1CON2bits __attribute__((__sfr__));

extern volatile unsigned int  SSP1CON3 __attribute__((__sfr__));
typedef struct tagSSP1CON3BITS {
  unsigned DHEN:1;
  unsigned AHEN:1;
  unsigned SBCDE:1;
  unsigned SDAHT:1;
  unsigned BOEN:1;
  unsigned SCIE:1;
  unsigned PCIE:1;
  unsigned ACKTIM:1;
} SSP1CON3BITS;
extern volatile SSP1CON3BITS SSP1CON3bits __attribute__((__sfr__));

extern volatile unsigned int  SSP1STAT __attribute__((__sfr__));
__extension__ typedef struct tagSSP1STATBITS {
  union {
    struct {
      unsigned BF:1;
      unsigned UA:1;
      unsigned R_NOT_W:1;
      unsigned S:1;
      unsigned P:1;
      unsigned D_NOT_A:1;
      unsigned CKE:1;
      unsigned SMP:1;
    };
    struct {
      unsigned :2;
      unsigned R_W:1;
      unsigned :2;
      unsigned D_A:1;
    };
    struct {
      unsigned :2;
      unsigned NOT_W:1;
      unsigned :2;
      unsigned NOT_A:1;
    };
    struct {
      unsigned :2;
      unsigned NOT_WRITE:1;
      unsigned :2;
      unsigned NOT_ADDRESS:1;
    };
    struct {
      unsigned :2;
      unsigned READ_WRITE:1;
      unsigned :2;
      unsigned DATA_ADDRESS:1;
    };
    struct {
      unsigned :2;
      unsigned I2C_READ:1;
      unsigned I2C_START:1;
      unsigned I2C_STOP:1;
      unsigned I2C_DAT:1;
    };
  };
} SSP1STATBITS;
extern volatile SSP1STATBITS SSP1STATbits __attribute__((__sfr__));

extern volatile unsigned int  I2C1ADD __attribute__((__sfr__));
__extension__ typedef struct tagI2C1ADDBITS {
  union {
    struct {
      unsigned SSPADD:8;
    };
    struct {
      unsigned I2CADD:8;
    };
  };
} I2C1ADDBITS;
extern volatile I2C1ADDBITS I2C1ADDbits __attribute__((__sfr__));

extern volatile unsigned int  SSP1ADD __attribute__((__sfr__));
__extension__ typedef struct tagSSP1ADDBITS {
  union {
    struct {
      unsigned SSPADD:8;
    };
    struct {
      unsigned I2CADD:8;
    };
  };
} SSP1ADDBITS;
extern volatile SSP1ADDBITS SSP1ADDbits __attribute__((__sfr__));

extern volatile unsigned int  I2C1MSK __attribute__((__sfr__));
__extension__ typedef struct tagI2C1MSKBITS {
  union {
    struct {
      unsigned MSK0:1;
      unsigned MSK1:1;
      unsigned MSK2:1;
      unsigned MSK3:1;
      unsigned MSK4:1;
      unsigned MSK5:1;
      unsigned MSK6:1;
      unsigned MSK7:1;
    };
    struct {
      unsigned AMSK:8;
    };
  };
} I2C1MSKBITS;
extern volatile I2C1MSKBITS I2C1MSKbits __attribute__((__sfr__));

extern volatile unsigned int  SSP1MSK __attribute__((__sfr__));
__extension__ typedef struct tagSSP1MSKBITS {
  union {
    struct {
      unsigned MSK0:1;
      unsigned MSK1:1;
      unsigned MSK2:1;
      unsigned MSK3:1;
      unsigned MSK4:1;
      unsigned MSK5:1;
      unsigned MSK6:1;
      unsigned MSK7:1;
    };
    struct {
      unsigned AMSK:8;
    };
  };
} SSP1MSKBITS;
extern volatile SSP1MSKBITS SSP1MSKbits __attribute__((__sfr__));

extern volatile unsigned int  SPI2BUF __attribute__((__sfr__));
__extension__ typedef struct tagSPI2BUFBITS {
  union {
    struct {
      unsigned SSPBUF:8;
    };
    struct {
      unsigned SPI2BUF:8;
    };
  };
} SPI2BUFBITS;
extern volatile SPI2BUFBITS SPI2BUFbits __attribute__((__sfr__));

extern volatile unsigned int  SSP2BUF __attribute__((__sfr__));
__extension__ typedef struct tagSSP2BUFBITS {
  union {
    struct {
      unsigned SSPBUF:8;
    };
    struct {
      unsigned SPI2BUF:8;
    };
  };
} SSP2BUFBITS;
extern volatile SSP2BUFBITS SSP2BUFbits __attribute__((__sfr__));

extern volatile unsigned int  SSP2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSSP2CON1BITS {
  union {
    struct {
      unsigned SSPM:4;
      unsigned CKP:1;
      unsigned SSPEN:1;
      unsigned SSPOV:1;
      unsigned WCOL:1;
    };
    struct {
      unsigned SSPM0:1;
      unsigned SSPM1:1;
      unsigned SSPM2:1;
      unsigned SSPM3:1;
    };
  };
} SSP2CON1BITS;
extern volatile SSP2CON1BITS SSP2CON1bits __attribute__((__sfr__));

extern volatile unsigned int  SSP2CON2 __attribute__((__sfr__));
__extension__ typedef struct tagSSP2CON2BITS {
  union {
    struct {
      unsigned SEN:1;
      unsigned RSEN:1;
      unsigned PEN:1;
      unsigned RCEN:1;
      unsigned ACKEN:1;
      unsigned ACKDT:1;
      unsigned ACKSTAT:1;
      unsigned GCEN:1;
    };
    struct {
      unsigned :1;
      unsigned ADMSK:5;
    };
    struct {
      unsigned :1;
      unsigned ADMSK1:1;
      unsigned ADMSK2:1;
      unsigned ADMSK3:1;
      unsigned ADMSK4:1;
      unsigned ADMSK5:1;
    };
  };
} SSP2CON2BITS;
extern volatile SSP2CON2BITS SSP2CON2bits __attribute__((__sfr__));

extern volatile unsigned int  SSP2CON3 __attribute__((__sfr__));
typedef struct tagSSP2CON3BITS {
  unsigned DHEN:1;
  unsigned AHEN:1;
  unsigned SBCDE:1;
  unsigned SDAHT:1;
  unsigned BOEN:1;
  unsigned SCIE:1;
  unsigned PCIE:1;
  unsigned ACKTIM:1;
} SSP2CON3BITS;
extern volatile SSP2CON3BITS SSP2CON3bits __attribute__((__sfr__));

extern volatile unsigned int  SSP2STAT __attribute__((__sfr__));
__extension__ typedef struct tagSSP2STATBITS {
  union {
    struct {
      unsigned BF:1;
      unsigned UA:1;
      unsigned R_NOT_W:1;
      unsigned S:1;
      unsigned P:1;
      unsigned D_NOT_A:1;
      unsigned CKE:1;
      unsigned SMP:1;
    };
    struct {
      unsigned :2;
      unsigned R_W:1;
      unsigned :2;
      unsigned D_A:1;
    };
    struct {
      unsigned :2;
      unsigned NOT_W:1;
      unsigned :2;
      unsigned NOT_A:1;
    };
    struct {
      unsigned :2;
      unsigned NOT_WRITE:1;
      unsigned :2;
      unsigned NOT_ADDRESS:1;
    };
    struct {
      unsigned :2;
      unsigned READ_WRITE:1;
      unsigned :2;
      unsigned DATA_ADDRESS:1;
    };
    struct {
      unsigned :2;
      unsigned I2C_READ:1;
      unsigned I2C_START:1;
      unsigned I2C_STOP:1;
      unsigned I2C_DAT:1;
    };
  };
} SSP2STATBITS;
extern volatile SSP2STATBITS SSP2STATbits __attribute__((__sfr__));

extern volatile unsigned int  I2C2ADD __attribute__((__sfr__));
__extension__ typedef struct tagI2C2ADDBITS {
  union {
    struct {
      unsigned SSPADD:8;
    };
    struct {
      unsigned I2CADD:8;
    };
  };
} I2C2ADDBITS;
extern volatile I2C2ADDBITS I2C2ADDbits __attribute__((__sfr__));

extern volatile unsigned int  SSP2ADD __attribute__((__sfr__));
__extension__ typedef struct tagSSP2ADDBITS {
  union {
    struct {
      unsigned SSPADD:8;
    };
    struct {
      unsigned I2CADD:8;
    };
  };
} SSP2ADDBITS;
extern volatile SSP2ADDBITS SSP2ADDbits __attribute__((__sfr__));

extern volatile unsigned int  I2C2MSK __attribute__((__sfr__));
__extension__ typedef struct tagI2C2MSKBITS {
  union {
    struct {
      unsigned MSK0:1;
      unsigned MSK1:1;
      unsigned MSK2:1;
      unsigned MSK3:1;
      unsigned MSK4:1;
      unsigned MSK5:1;
      unsigned MSK6:1;
      unsigned MSK7:1;
    };
    struct {
      unsigned AMSK:8;
    };
  };
} I2C2MSKBITS;
extern volatile I2C2MSKBITS I2C2MSKbits __attribute__((__sfr__));

extern volatile unsigned int  SSP2MSK __attribute__((__sfr__));
__extension__ typedef struct tagSSP2MSKBITS {
  union {
    struct {
      unsigned MSK0:1;
      unsigned MSK1:1;
      unsigned MSK2:1;
      unsigned MSK3:1;
      unsigned MSK4:1;
      unsigned MSK5:1;
      unsigned MSK6:1;
      unsigned MSK7:1;
    };
    struct {
      unsigned AMSK:8;
    };
  };
} SSP2MSKBITS;
extern volatile SSP2MSKBITS SSP2MSKbits __attribute__((__sfr__));


/* Generic structure of entire SFR area for each UART module */
typedef struct tagUART {
        unsigned int uxmode;
        unsigned int uxsta;
        unsigned int uxtxreg;
        unsigned int uxrxreg;
        unsigned int uxbrg;
} UART, *PUART;

#define UxMODEBITS U1MODEBITS
#define UxSTABITS U1STABITS
#define UxTXREGBITS U1TXREGBITS
#define UxRXREGBITS U1RXREGBITS
#define UxBRGBITS U1BRGBITS

/* SFR blocks for each UART module */
extern volatile UART UART1 __attribute__((__sfr__));
extern volatile UART UART2 __attribute__((__sfr__));

extern volatile unsigned int  U1MODE __attribute__((__sfr__));
__extension__ typedef struct tagU1MODEBITS {
  union {
    struct {
      unsigned STSEL:1;
      unsigned PDSEL:2;
      unsigned BRGH:1;
      unsigned RXINV:1;
      unsigned ABAUD:1;
      unsigned LPBACK:1;
      unsigned WAKE:1;
      unsigned UEN:2;
      unsigned :1;
      unsigned RTSMD:1;
      unsigned IREN:1;
      unsigned USIDL:1;
      unsigned :1;
      unsigned UARTEN:1;
    };
    struct {
      unsigned :1;
      unsigned PDSEL0:1;
      unsigned PDSEL1:1;
      unsigned :5;
      unsigned UEN0:1;
      unsigned UEN1:1;
    };
  };
} U1MODEBITS;
extern volatile U1MODEBITS U1MODEbits __attribute__((__sfr__));

extern volatile unsigned int  U1STA __attribute__((__sfr__));
__extension__ typedef struct tagU1STABITS {
  union {
    struct {
      unsigned URXDA:1;
      unsigned OERR:1;
      unsigned FERR:1;
      unsigned PERR:1;
      unsigned RIDLE:1;
      unsigned ADDEN:1;
      unsigned URXISEL:2;
      unsigned TRMT:1;
      unsigned UTXBF:1;
      unsigned UTXEN:1;
      unsigned UTXBRK:1;
      unsigned :1;
      unsigned UTXISEL0:1;
      unsigned UTXINV:1;
      unsigned UTXISEL1:1;
    };
    struct {
      unsigned :6;
      unsigned URXISEL0:1;
      unsigned URXISEL1:1;
    };
  };
} U1STABITS;
extern volatile U1STABITS U1STAbits __attribute__((__sfr__));

extern volatile unsigned int  U1TXREG __attribute__((__sfr__));
typedef struct tagU1TXREGBITS {
  unsigned UTXREG0:1;
  unsigned UTXREG1:1;
  unsigned UTXREG2:1;
  unsigned UTXREG3:1;
  unsigned UTXREG4:1;
  unsigned UTXREG5:1;
  unsigned UTXREG6:1;
  unsigned UTXREG7:1;
  unsigned UTXREG8:1;
} U1TXREGBITS;
extern volatile U1TXREGBITS U1TXREGbits __attribute__((__sfr__));

extern volatile unsigned int  U1RXREG __attribute__((__sfr__));
typedef struct tagU1RXREGBITS {
  unsigned URXREG0:1;
  unsigned URXREG1:1;
  unsigned URXREG2:1;
  unsigned URXREG3:1;
  unsigned URXREG4:1;
  unsigned URXREG5:1;
  unsigned URXREG6:1;
  unsigned URXREG7:1;
  unsigned URXREG8:1;
} U1RXREGBITS;
extern volatile U1RXREGBITS U1RXREGbits __attribute__((__sfr__));

extern volatile unsigned int  U1BRG __attribute__((__sfr__));
extern volatile unsigned int  U2MODE __attribute__((__sfr__));
__extension__ typedef struct tagU2MODEBITS {
  union {
    struct {
      unsigned STSEL:1;
      unsigned PDSEL:2;
      unsigned BRGH:1;
      unsigned RXINV:1;
      unsigned ABAUD:1;
      unsigned LPBACK:1;
      unsigned WAKE:1;
      unsigned UEN:2;
      unsigned :1;
      unsigned RTSMD:1;
      unsigned IREN:1;
      unsigned USIDL:1;
      unsigned :1;
      unsigned UARTEN:1;
    };
    struct {
      unsigned :1;
      unsigned PDSEL0:1;
      unsigned PDSEL1:1;
      unsigned :5;
      unsigned UEN0:1;
      unsigned UEN1:1;
    };
  };
} U2MODEBITS;
extern volatile U2MODEBITS U2MODEbits __attribute__((__sfr__));

extern volatile unsigned int  U2STA __attribute__((__sfr__));
__extension__ typedef struct tagU2STABITS {
  union {
    struct {
      unsigned URXDA:1;
      unsigned OERR:1;
      unsigned FERR:1;
      unsigned PERR:1;
      unsigned RIDLE:1;
      unsigned ADDEN:1;
      unsigned URXISEL:2;
      unsigned TRMT:1;
      unsigned UTXBF:1;
      unsigned UTXEN:1;
      unsigned UTXBRK:1;
      unsigned :1;
      unsigned UTXISEL0:1;
      unsigned UTXINV:1;
      unsigned UTXISEL1:1;
    };
    struct {
      unsigned :6;
      unsigned URXISEL0:1;
      unsigned URXISEL1:1;
    };
  };
} U2STABITS;
extern volatile U2STABITS U2STAbits __attribute__((__sfr__));

extern volatile unsigned int  U2TXREG __attribute__((__sfr__));
typedef struct tagU2TXREGBITS {
  unsigned UTXREG0:1;
  unsigned UTXREG1:1;
  unsigned UTXREG2:1;
  unsigned UTXREG3:1;
  unsigned UTXREG4:1;
  unsigned UTXREG5:1;
  unsigned UTXREG6:1;
  unsigned UTXREG7:1;
  unsigned UTXREG8:1;
} U2TXREGBITS;
extern volatile U2TXREGBITS U2TXREGbits __attribute__((__sfr__));

extern volatile unsigned int  U2RXREG __attribute__((__sfr__));
typedef struct tagU2RXREGBITS {
  unsigned URXREG0:1;
  unsigned URXREG1:1;
  unsigned URXREG2:1;
  unsigned URXREG3:1;
  unsigned URXREG4:1;
  unsigned URXREG5:1;
  unsigned URXREG6:1;
  unsigned URXREG7:1;
  unsigned URXREG8:1;
} U2RXREGBITS;
extern volatile U2RXREGBITS U2RXREGbits __attribute__((__sfr__));

extern volatile unsigned int  U2BRG __attribute__((__sfr__));
extern volatile unsigned int  TRISA __attribute__((__sfr__));
typedef struct tagTRISABITS {
  unsigned TRISA0:1;
  unsigned TRISA1:1;
  unsigned TRISA2:1;
  unsigned TRISA3:1;
  unsigned TRISA4:1;
  unsigned :1;
  unsigned TRISA6:1;
  unsigned TRISA7:1;
} TRISABITS;
extern volatile TRISABITS TRISAbits __attribute__((__sfr__));

extern volatile unsigned int  PORTA __attribute__((__sfr__));
typedef struct tagPORTABITS {
  unsigned RA0:1;
  unsigned RA1:1;
  unsigned RA2:1;
  unsigned RA3:1;
  unsigned RA4:1;
  unsigned RA5:1;
  unsigned RA6:1;
  unsigned RA7:1;
} PORTABITS;
extern volatile PORTABITS PORTAbits __attribute__((__sfr__));

extern volatile unsigned int  LATA __attribute__((__sfr__));
typedef struct tagLATABITS {
  unsigned LATA0:1;
  unsigned LATA1:1;
  unsigned LATA2:1;
  unsigned LATA3:1;
  unsigned LATA4:1;
  unsigned :1;
  unsigned LATA6:1;
  unsigned LATA7:1;
} LATABITS;
extern volatile LATABITS LATAbits __attribute__((__sfr__));

extern volatile unsigned int  ODCA __attribute__((__sfr__));
typedef struct tagODCABITS {
  unsigned ODA0:1;
  unsigned ODA1:1;
  unsigned ODA2:1;
  unsigned ODA3:1;
  unsigned ODA4:1;
  unsigned :1;
  unsigned ODA6:1;
  unsigned ODA7:1;
} ODCABITS;
extern volatile ODCABITS ODCAbits __attribute__((__sfr__));

extern volatile unsigned int  TRISB __attribute__((__sfr__));
typedef struct tagTRISBBITS {
  unsigned TRISB0:1;
  unsigned TRISB1:1;
  unsigned TRISB2:1;
  unsigned TRISB3:1;
  unsigned TRISB4:1;
  unsigned TRISB5:1;
  unsigned TRISB6:1;
  unsigned TRISB7:1;
  unsigned TRISB8:1;
  unsigned TRISB9:1;
  unsigned TRISB10:1;
  unsigned TRISB11:1;
  unsigned TRISB12:1;
  unsigned TRISB13:1;
  unsigned TRISB14:1;
  unsigned TRISB15:1;
} TRISBBITS;
extern volatile TRISBBITS TRISBbits __attribute__((__sfr__));

extern volatile unsigned int  PORTB __attribute__((__sfr__));
typedef struct tagPORTBBITS {
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RB2:1;
  unsigned RB3:1;
  unsigned RB4:1;
  unsigned RB5:1;
  unsigned RB6:1;
  unsigned RB7:1;
  unsigned RB8:1;
  unsigned RB9:1;
  unsigned RB10:1;
  unsigned RB11:1;
  unsigned RB12:1;
  unsigned RB13:1;
  unsigned RB14:1;
  unsigned RB15:1;
} PORTBBITS;
extern volatile PORTBBITS PORTBbits __attribute__((__sfr__));

extern volatile unsigned int  LATB __attribute__((__sfr__));
typedef struct tagLATBBITS {
  unsigned LATB0:1;
  unsigned LATB1:1;
  unsigned LATB2:1;
  unsigned LATB3:1;
  unsigned LATB4:1;
  unsigned LATB5:1;
  unsigned LATB6:1;
  unsigned LATB7:1;
  unsigned LATB8:1;
  unsigned LATB9:1;
  unsigned LATB10:1;
  unsigned LATB11:1;
  unsigned LATB12:1;
  unsigned LATB13:1;
  unsigned LATB14:1;
  unsigned LATB15:1;
} LATBBITS;
extern volatile LATBBITS LATBbits __attribute__((__sfr__));

extern volatile unsigned int  ODCB __attribute__((__sfr__));
typedef struct tagODCBBITS {
  unsigned ODB0:1;
  unsigned ODB1:1;
  unsigned ODB2:1;
  unsigned ODB3:1;
  unsigned ODB4:1;
  unsigned ODB5:1;
  unsigned ODB6:1;
  unsigned ODB7:1;
  unsigned ODB8:1;
  unsigned ODB9:1;
  unsigned ODB10:1;
  unsigned ODB11:1;
  unsigned ODB12:1;
  unsigned ODB13:1;
  unsigned ODB14:1;
  unsigned ODB15:1;
} ODCBBITS;
extern volatile ODCBBITS ODCBbits __attribute__((__sfr__));

extern volatile unsigned int  PADCFG1 __attribute__((__sfr__));
__extension__ typedef struct tagPADCFG1BITS {
  union {
    struct {
      unsigned :8;
      unsigned SCK1DIS:1;
      unsigned SDO1DIS:1;
      unsigned SCK2DIS:1;
      unsigned SDO2DIS:1;
    };
    struct {
      unsigned :4;
      unsigned SMBDEL0:1;
      unsigned SMBDEL1:1;
    };
  };
} PADCFG1BITS;
extern volatile PADCFG1BITS PADCFG1bits __attribute__((__sfr__));

extern volatile unsigned int  ANSA __attribute__((__sfr__));
typedef struct tagANSABITS {
  unsigned ANSA0:1;
  unsigned ANSA1:1;
  unsigned ANSA2:1;
  unsigned ANSA3:1;
} ANSABITS;
extern volatile ANSABITS ANSAbits __attribute__((__sfr__));

extern volatile unsigned int  ANSELA __attribute__((__sfr__));
typedef struct tagANSELABITS {
  unsigned ANSA0:1;
  unsigned ANSA1:1;
  unsigned ANSA2:1;
  unsigned ANSA3:1;
} ANSELABITS;
extern volatile ANSELABITS ANSELAbits __attribute__((__sfr__));

extern volatile unsigned int  ANSB __attribute__((__sfr__));
typedef struct tagANSBBITS {
  unsigned ANSB0:1;
  unsigned ANSB1:1;
  unsigned ANSB2:1;
  unsigned ANSB3:1;
  unsigned ANSB4:1;
  unsigned :7;
  unsigned ANSB12:1;
  unsigned ANSB13:1;
  unsigned ANSB14:1;
  unsigned ANSB15:1;
} ANSBBITS;
extern volatile ANSBBITS ANSBbits __attribute__((__sfr__));

extern volatile unsigned int  ANSELB __attribute__((__sfr__));
typedef struct tagANSELBBITS {
  unsigned ANSB0:1;
  unsigned ANSB1:1;
  unsigned ANSB2:1;
  unsigned ANSB3:1;
  unsigned ANSB4:1;
  unsigned :7;
  unsigned ANSB12:1;
  unsigned ANSB13:1;
  unsigned ANSB14:1;
  unsigned ANSB15:1;
} ANSELBBITS;
extern volatile ANSELBBITS ANSELBbits __attribute__((__sfr__));

extern volatile unsigned int  CMSTAT __attribute__((__sfr__));
typedef struct tagCMSTATBITS {
  unsigned C1OUT:1;
  unsigned C2OUT:1;
  unsigned :6;
  unsigned C1EVT:1;
  unsigned C2EVT:1;
  unsigned :5;
  unsigned CMIDL:1;
} CMSTATBITS;
extern volatile CMSTATBITS CMSTATbits __attribute__((__sfr__));

extern volatile unsigned int  CVRCON __attribute__((__sfr__));
__extension__ typedef struct tagCVRCONBITS {
  union {
    struct {
      unsigned CVR:5;
      unsigned CVRSS:1;
      unsigned CVROE:1;
      unsigned CVREN:1;
    };
    struct {
      unsigned CVR0:1;
      unsigned CVR1:1;
      unsigned CVR2:1;
      unsigned CVR3:1;
      unsigned CVR4:1;
    };
  };
} CVRCONBITS;
extern volatile CVRCONBITS CVRCONbits __attribute__((__sfr__));

extern volatile unsigned int  CM1CON __attribute__((__sfr__));
__extension__ typedef struct tagCM1CONBITS {
  union {
    struct {
      unsigned CCH:2;
      unsigned :2;
      unsigned CREF:1;
      unsigned :1;
      unsigned EVPOL:2;
      unsigned COUT:1;
      unsigned CEVT:1;
      unsigned :2;
      unsigned CLPWR:1;
      unsigned CPOL:1;
      unsigned COE:1;
      unsigned CON:1;
    };
    struct {
      unsigned CCH0:1;
      unsigned CCH1:1;
      unsigned :4;
      unsigned EVPOL0:1;
      unsigned EVPOL1:1;
    };
  };
} CM1CONBITS;
extern volatile CM1CONBITS CM1CONbits __attribute__((__sfr__));

extern volatile unsigned int  CM2CON __attribute__((__sfr__));
__extension__ typedef struct tagCM2CONBITS {
  union {
    struct {
      unsigned CCH:2;
      unsigned :2;
      unsigned CREF:1;
      unsigned :1;
      unsigned EVPOL:2;
      unsigned COUT:1;
      unsigned CEVT:1;
      unsigned :2;
      unsigned CLPWR:1;
      unsigned CPOL:1;
      unsigned COE:1;
      unsigned CON:1;
    };
    struct {
      unsigned CCH0:1;
      unsigned CCH1:1;
      unsigned :4;
      unsigned EVPOL0:1;
      unsigned EVPOL1:1;
    };
  };
} CM2CONBITS;
extern volatile CM2CONBITS CM2CONbits __attribute__((__sfr__));

extern volatile unsigned int  RCON __attribute__((__sfr__));
__extension__ typedef struct tagRCONBITS {
  union {
    struct {
      unsigned POR:1;
      unsigned BOR:1;
      unsigned IDLE:1;
      unsigned SLEEP:1;
      unsigned WDTO:1;
      unsigned SWDTEN:1;
      unsigned SWR:1;
      unsigned EXTR:1;
      unsigned PMSLP:1;
      unsigned CM:1;
      unsigned :3;
      unsigned SBOREN:1;
      unsigned IOPUWR:1;
      unsigned TRAPR:1;
    };
    struct {
      unsigned :8;
      unsigned VREGS:1;
    };
  };
} RCONBITS;
extern volatile RCONBITS RCONbits __attribute__((__sfr__));

extern volatile unsigned int  OSCCON __attribute__((__sfr__));
__extension__ typedef struct tagOSCCONBITS {
  union {
    struct {
      unsigned OSWEN:1;
      unsigned SOSCEN:1;
      unsigned SOSCDRV:1;
      unsigned CF:1;
      unsigned :1;
      unsigned LOCK:1;
      unsigned :1;
      unsigned CLKLOCK:1;
      unsigned NOSC:3;
      unsigned :1;
      unsigned COSC:3;
    };
    struct {
      unsigned :1;
      unsigned LPOSCEN:1;
      unsigned :6;
      unsigned NOSC0:1;
      unsigned NOSC1:1;
      unsigned NOSC2:1;
      unsigned :1;
      unsigned COSC0:1;
      unsigned COSC1:1;
      unsigned COSC2:1;
    };
  };
} OSCCONBITS;
extern volatile OSCCONBITS OSCCONbits __attribute__((__sfr__));

extern volatile unsigned char OSCCONL __attribute__((__sfr__));
extern volatile unsigned char OSCCONH __attribute__((__sfr__));
extern volatile unsigned int  CLKDIV __attribute__((__sfr__));
__extension__ typedef struct tagCLKDIVBITS {
  union {
    struct {
      unsigned :8;
      unsigned RCDIV:3;
      unsigned DOZEN:1;
      unsigned DOZE:3;
      unsigned ROI:1;
    };
    struct {
      unsigned :8;
      unsigned RCDIV0:1;
      unsigned RCDIV1:1;
      unsigned RCDIV2:1;
      unsigned :1;
      unsigned DOZE0:1;
      unsigned DOZE1:1;
      unsigned DOZE2:1;
    };
  };
} CLKDIVBITS;
extern volatile CLKDIVBITS CLKDIVbits __attribute__((__sfr__));

extern volatile unsigned int  OSCTUN __attribute__((__sfr__));
__extension__ typedef struct tagOSCTUNBITS {
  union {
    struct {
      unsigned TUN:6;
    };
    struct {
      unsigned TUN0:1;
      unsigned TUN1:1;
      unsigned TUN2:1;
      unsigned TUN3:1;
      unsigned TUN4:1;
      unsigned TUN5:1;
    };
  };
} OSCTUNBITS;
extern volatile OSCTUNBITS OSCTUNbits __attribute__((__sfr__));

extern volatile unsigned int  REFOCON __attribute__((__sfr__));
__extension__ typedef struct tagREFOCONBITS {
  union {
    struct {
      unsigned :8;
      unsigned RODIV:4;
      unsigned ROSEL:1;
      unsigned ROSSLP:1;
      unsigned :1;
      unsigned ROEN:1;
    };
    struct {
      unsigned :8;
      unsigned RODIV0:1;
      unsigned RODIV1:1;
      unsigned RODIV2:1;
      unsigned RODIV3:1;
      unsigned :3;
      unsigned ROON:1;
    };
  };
} REFOCONBITS;
extern volatile REFOCONBITS REFOCONbits __attribute__((__sfr__));

extern volatile unsigned int  HLVDCON __attribute__((__sfr__));
__extension__ typedef struct tagHLVDCONBITS {
  union {
    struct {
      unsigned HLVDL:4;
      unsigned :1;
      unsigned IRVST:1;
      unsigned BGVST:1;
      unsigned VDIR:1;
      unsigned :5;
      unsigned HLSIDL:1;
      unsigned :1;
      unsigned HLVDEN:1;
    };
    struct {
      unsigned HLVDL0:1;
      unsigned HLVDL1:1;
      unsigned HLVDL2:1;
      unsigned HLVDL3:1;
    };
  };
} HLVDCONBITS;
extern volatile HLVDCONBITS HLVDCONbits __attribute__((__sfr__));

extern volatile unsigned int  NVMCON __attribute__((__sfr__));
__extension__ typedef struct tagNVMCONBITS {
  union {
    struct {
      unsigned NVMOP:6;
      unsigned ERASE:1;
      unsigned :5;
      unsigned PGMONLY:1;
      unsigned WRERR:1;
      unsigned WREN:1;
      unsigned WR:1;
    };
    struct {
      unsigned NVMOP0:1;
      unsigned NVMOP1:1;
      unsigned NVMOP2:1;
      unsigned NVMOP3:1;
      unsigned NVMOP4:1;
      unsigned NVMOP5:1;
    };
  };
} NVMCONBITS;
extern volatile NVMCONBITS NVMCONbits __attribute__((__sfr__));

extern volatile unsigned int  NVMKEY __attribute__((__sfr__));
__extension__ typedef struct tagNVMKEYBITS {
  union {
    struct {
      unsigned NVMKEY:8;
    };
    struct {
      unsigned NVMKEY0:1;
      unsigned NVMKEY1:1;
      unsigned NVMKEY2:1;
      unsigned NVMKEY3:1;
      unsigned NVMKEY4:1;
      unsigned NVMKEY5:1;
      unsigned NVMKEY6:1;
      unsigned NVMKEY7:1;
    };
  };
} NVMKEYBITS;
extern volatile NVMKEYBITS NVMKEYbits __attribute__((__sfr__));

extern volatile unsigned int  ULPWCON __attribute__((__sfr__));
__extension__ typedef struct tagULPWCONBITS {
  union {
    struct {
      unsigned :8;
      unsigned ULPSINK:1;
      unsigned :4;
      unsigned ULPSIDL:1;
      unsigned :1;
      unsigned ULPEN:1;
    };
    struct {
      unsigned :8;
      unsigned CRNTEN:1;
      unsigned :4;
      unsigned PSIDL:1;
      unsigned :1;
      unsigned WUEN:1;
    };
  };
} ULPWCONBITS;
extern volatile ULPWCONBITS ULPWCONbits __attribute__((__sfr__));

extern volatile unsigned int  PMD1 __attribute__((__sfr__));
__extension__ typedef struct tagPMD1BITS {
  union {
    struct {
      unsigned :5;
      unsigned U1MD:1;
      unsigned U2MD:1;
      unsigned SSP1MD:1;
      unsigned :3;
      unsigned T1MD:1;
      unsigned T2MD:1;
      unsigned T3MD:1;
      unsigned T4MD:1;
    };
    struct {
      unsigned :7;
      unsigned I2C1MD:1;
    };
    struct {
      unsigned :7;
      unsigned SPI1MD:1;
    };
  };
} PMD1BITS;
extern volatile PMD1BITS PMD1bits __attribute__((__sfr__));

extern volatile unsigned int  PMDIS1 __attribute__((__sfr__));
__extension__ typedef struct tagPMDIS1BITS {
  union {
    struct {
      unsigned :5;
      unsigned U1MD:1;
      unsigned U2MD:1;
      unsigned SSP1MD:1;
      unsigned :3;
      unsigned T1MD:1;
      unsigned T2MD:1;
      unsigned T3MD:1;
      unsigned T4MD:1;
    };
    struct {
      unsigned :7;
      unsigned I2C1MD:1;
    };
    struct {
      unsigned :7;
      unsigned SPI1MD:1;
    };
  };
} PMDIS1BITS;
extern volatile PMDIS1BITS PMDIS1bits __attribute__((__sfr__));

extern volatile unsigned int  PMD2 __attribute__((__sfr__));
typedef struct tagPMD2BITS {
  unsigned CCP1MD:1;
  unsigned CCP2MD:1;
  unsigned CCP3MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

extern volatile unsigned int  PMDIS2 __attribute__((__sfr__));
typedef struct tagPMDIS2BITS {
  unsigned CCP1MD:1;
  unsigned CCP2MD:1;
  unsigned CCP3MD:1;
} PMDIS2BITS;
extern volatile PMDIS2BITS PMDIS2bits __attribute__((__sfr__));

extern volatile unsigned int  PMD3 __attribute__((__sfr__));
__extension__ typedef struct tagPMD3BITS {
  union {
    struct {
      unsigned :1;
      unsigned SSP2MD:1;
      unsigned :8;
      unsigned CMPMD:1;
    };
    struct {
      unsigned :1;
      unsigned I2C2MD:1;
    };
    struct {
      unsigned :1;
      unsigned SPI2MD:1;
    };
  };
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

extern volatile unsigned int  PMDIS3 __attribute__((__sfr__));
__extension__ typedef struct tagPMDIS3BITS {
  union {
    struct {
      unsigned :1;
      unsigned SSP2MD:1;
      unsigned :8;
      unsigned CMPMD:1;
    };
    struct {
      unsigned :1;
      unsigned I2C2MD:1;
    };
    struct {
      unsigned :1;
      unsigned SPI2MD:1;
    };
  };
} PMDIS3BITS;
extern volatile PMDIS3BITS PMDIS3bits __attribute__((__sfr__));

extern volatile unsigned int  PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  unsigned :1;
  unsigned HLVDMD:1;
  unsigned :1;
  unsigned REFOMD:1;
  unsigned EEMD:1;
  unsigned :2;
  unsigned ULPWUMD:1;
} PMD4BITS;
extern volatile PMD4BITS PMD4bits __attribute__((__sfr__));

extern volatile unsigned int  PMDIS4 __attribute__((__sfr__));
typedef struct tagPMDIS4BITS {
  unsigned :1;
  unsigned HLVDMD:1;
  unsigned :1;
  unsigned REFOMD:1;
  unsigned EEMD:1;
  unsigned :2;
  unsigned ULPWUMD:1;
} PMDIS4BITS;
extern volatile PMDIS4BITS PMDIS4bits __attribute__((__sfr__));



/* ---------------------------------------------------------- */
/* Defines for unique SFR bit names                           */
/* ---------------------------------------------------------- */

/* SR */
#define _C SRbits.C
#define _Z SRbits.Z
#define _OV SRbits.OV
#define _N SRbits.N
#define _RA SRbits.RA
#define _IPL SRbits.IPL
#define _DC SRbits.DC
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2

/* CORCON */
#define _PSV CORCONbits.PSV
#define _IPL3 CORCONbits.IPL3

/* CNPD1 */
#define _CN0PDE CNPD1bits.CN0PDE
#define _CN1PDE CNPD1bits.CN1PDE
#define _CN2PDE CNPD1bits.CN2PDE
#define _CN3PDE CNPD1bits.CN3PDE
#define _CN4PDE CNPD1bits.CN4PDE
#define _CN5PDE CNPD1bits.CN5PDE
#define _CN6PDE CNPD1bits.CN6PDE
#define _CN7PDE CNPD1bits.CN7PDE
#define _CN8PDE CNPD1bits.CN8PDE
#define _CN9PDE CNPD1bits.CN9PDE
#define _CN11PDE CNPD1bits.CN11PDE
#define _CN12PDE CNPD1bits.CN12PDE
#define _CN13PDE CNPD1bits.CN13PDE
#define _CN14PDE CNPD1bits.CN14PDE
#define _CN15PDE CNPD1bits.CN15PDE

/* CNPD2 */
#define _CN16PDE CNPD2bits.CN16PDE
#define _CN21PDE CNPD2bits.CN21PDE
#define _CN22PDE CNPD2bits.CN22PDE
#define _CN23PDE CNPD2bits.CN23PDE
#define _CN24PDE CNPD2bits.CN24PDE
#define _CN27PDE CNPD2bits.CN27PDE
#define _CN29PDE CNPD2bits.CN29PDE
#define _CN30PDE CNPD2bits.CN30PDE

/* CNEN1 */
#define _CN0IE CNEN1bits.CN0IE
#define _CN1IE CNEN1bits.CN1IE
#define _CN2IE CNEN1bits.CN2IE
#define _CN3IE CNEN1bits.CN3IE
#define _CN4IE CNEN1bits.CN4IE
#define _CN5IE CNEN1bits.CN5IE
#define _CN6IE CNEN1bits.CN6IE
#define _CN7IE CNEN1bits.CN7IE
#define _CN8IE CNEN1bits.CN8IE
#define _CN9IE CNEN1bits.CN9IE
#define _CN11IE CNEN1bits.CN11IE
#define _CN12IE CNEN1bits.CN12IE
#define _CN13IE CNEN1bits.CN13IE
#define _CN14IE CNEN1bits.CN14IE
#define _CN15IE CNEN1bits.CN15IE

/* CNEN2 */
#define _CN16IE CNEN2bits.CN16IE
#define _CN21IE CNEN2bits.CN21IE
#define _CN22IE CNEN2bits.CN22IE
#define _CN23IE CNEN2bits.CN23IE
#define _CN24IE CNEN2bits.CN24IE
#define _CN27IE CNEN2bits.CN27IE
#define _CN29IE CNEN2bits.CN29IE
#define _CN30IE CNEN2bits.CN30IE

/* CNPU1 */
#define _CN0PUE CNPU1bits.CN0PUE
#define _CN1PUE CNPU1bits.CN1PUE
#define _CN2PUE CNPU1bits.CN2PUE
#define _CN3PUE CNPU1bits.CN3PUE
#define _CN4PUE CNPU1bits.CN4PUE
#define _CN5PUE CNPU1bits.CN5PUE
#define _CN6PUE CNPU1bits.CN6PUE
#define _CN7PUE CNPU1bits.CN7PUE
#define _CN8PUE CNPU1bits.CN8PUE
#define _CN9PUE CNPU1bits.CN9PUE
#define _CN11PUE CNPU1bits.CN11PUE
#define _CN12PUE CNPU1bits.CN12PUE
#define _CN13PUE CNPU1bits.CN13PUE
#define _CN14PUE CNPU1bits.CN14PUE
#define _CN15PUE CNPU1bits.CN15PUE

/* CNPU2 */
#define _CN16PUE CNPU2bits.CN16PUE
#define _CN21PUE CNPU2bits.CN21PUE
#define _CN22PUE CNPU2bits.CN22PUE
#define _CN23PUE CNPU2bits.CN23PUE
#define _CN24PUE CNPU2bits.CN24PUE
#define _CN27PUE CNPU2bits.CN27PUE
#define _CN29PUE CNPU2bits.CN29PUE
#define _CN30PUE CNPU2bits.CN30PUE

/* INTCON1 */
#define _OSCFAIL INTCON1bits.OSCFAIL
#define _STKERR INTCON1bits.STKERR
#define _ADDRERR INTCON1bits.ADDRERR
#define _MATHERR INTCON1bits.MATHERR
#define _NSTDIS INTCON1bits.NSTDIS

/* INTCON2 */
#define _INT0EP INTCON2bits.INT0EP
#define _INT1EP INTCON2bits.INT1EP
#define _INT2EP INTCON2bits.INT2EP
#define _DISI INTCON2bits.DISI
#define _ALTIVT INTCON2bits.ALTIVT

/* IFS0 */
#define _INT0IF IFS0bits.INT0IF
#define _CCP1IF IFS0bits.CCP1IF
#define _T1IF IFS0bits.T1IF
#define _CCP2IF IFS0bits.CCP2IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _NVMIF IFS0bits.NVMIF

/* IFS1 */
#define _SSP1IF IFS1bits.SSP1IF
#define _BCL1IF IFS1bits.BCL1IF
#define _CMIF IFS1bits.CMIF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _CCP3IF IFS1bits.CCP3IF
#define _T4IF IFS1bits.T4IF
#define _INT2IF IFS1bits.INT2IF
#define _U2RXIF IFS1bits.U2RXIF
#define _U2TXIF IFS1bits.U2TXIF

/* IFS2 */
#define _T3GIF IFS2bits.T3GIF

/* IFS3 */
#define _SSP2IF IFS3bits.SSP2IF
#define _BCL2IF IFS3bits.BCL2IF

/* IFS4 */
#define _U1ERIF IFS4bits.U1ERIF
#define _U2ERIF IFS4bits.U2ERIF
#define _HLVDIF IFS4bits.HLVDIF

/* IFS5 */
#define _ULPWUIF IFS5bits.ULPWUIF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _CCP1IE IEC0bits.CCP1IE
#define _T1IE IEC0bits.T1IE
#define _CCP2IE IEC0bits.CCP2IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _NVMIE IEC0bits.NVMIE

/* IEC1 */
#define _SSP1IE IEC1bits.SSP1IE
#define _BCL1IE IEC1bits.BCL1IE
#define _CMIE IEC1bits.CMIE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _CCP3IE IEC1bits.CCP3IE
#define _T4IE IEC1bits.T4IE
#define _INT2IE IEC1bits.INT2IE
#define _U2RXIE IEC1bits.U2RXIE
#define _U2TXIE IEC1bits.U2TXIE

/* IEC2 */
#define _T3GIE IEC2bits.T3GIE

/* IEC3 */
#define _SSP2IE IEC3bits.SSP2IE
#define _BCL2IE IEC3bits.BCL2IE

/* IEC4 */
#define _U1ERIE IEC4bits.U1ERIE
#define _U2ERIE IEC4bits.U2ERIE
#define _HLVDIE IEC4bits.HLVDIE

/* IEC5 */
#define _ULPWUIE IEC5bits.ULPWUIE

/* IPC0 */
#define _INT0IP IPC0bits.INT0IP
#define _CCP1IP IPC0bits.CCP1IP
#define _T1IP IPC0bits.T1IP
#define _INT0IP0 IPC0bits.INT0IP0
#define _INT0IP1 IPC0bits.INT0IP1
#define _INT0IP2 IPC0bits.INT0IP2
#define _CCP1IP0 IPC0bits.CCP1IP0
#define _CCP1IP1 IPC0bits.CCP1IP1
#define _CCP1IP2 IPC0bits.CCP1IP2
#define _T1IP0 IPC0bits.T1IP0
#define _T1IP1 IPC0bits.T1IP1
#define _T1IP2 IPC0bits.T1IP2

/* IPC1 */
#define _CCP2IP IPC1bits.CCP2IP
#define _T2IP IPC1bits.T2IP
#define _CCP2IP0 IPC1bits.CCP2IP0
#define _CCP2IP1 IPC1bits.CCP2IP1
#define _CCP2IP2 IPC1bits.CCP2IP2
#define _T2IP0 IPC1bits.T2IP0
#define _T2IP1 IPC1bits.T2IP1
#define _T2IP2 IPC1bits.T2IP2

/* IPC2 */
#define _T3IP IPC2bits.T3IP
#define _U1RXIP IPC2bits.U1RXIP
#define _T3IP0 IPC2bits.T3IP0
#define _T3IP1 IPC2bits.T3IP1
#define _T3IP2 IPC2bits.T3IP2
#define _U1RXIP0 IPC2bits.U1RXIP0
#define _U1RXIP1 IPC2bits.U1RXIP1
#define _U1RXIP2 IPC2bits.U1RXIP2

/* IPC3 */
#define _U1TXIP IPC3bits.U1TXIP
#define _NVMIP IPC3bits.NVMIP
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _AD1IP0 IPC3bits.AD1IP0
#define _AD1IP1 IPC3bits.AD1IP1
#define _AD1IP2 IPC3bits.AD1IP2
#define _NVMIP0 IPC3bits.NVMIP0
#define _NVMIP1 IPC3bits.NVMIP1
#define _NVMIP2 IPC3bits.NVMIP2

/* IPC4 */
#define _SSP1IP IPC4bits.SSP1IP
#define _BCL1IP IPC4bits.BCL1IP
#define _CMIP IPC4bits.CMIP
#define _CNIP IPC4bits.CNIP
#define _SSP1IP0 IPC4bits.SSP1IP0
#define _SSP1IP1 IPC4bits.SSP1IP1
#define _SSP1IP2 IPC4bits.SSP1IP2
#define _BCL1IP0 IPC4bits.BCL1IP0
#define _BCL1IP1 IPC4bits.BCL1IP1
#define _BCL1IP2 IPC4bits.BCL1IP2
#define _CMIP0 IPC4bits.CMIP0
#define _CMIP1 IPC4bits.CMIP1
#define _CMIP2 IPC4bits.CMIP2
#define _CNIP0 IPC4bits.CNIP0
#define _CNIP1 IPC4bits.CNIP1
#define _CNIP2 IPC4bits.CNIP2

/* IPC5 */
#define _INT1IP IPC5bits.INT1IP
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2

/* IPC6 */
#define _CCP3IP IPC6bits.CCP3IP
#define _T4IP IPC6bits.T4IP
#define _CCP3IP0 IPC6bits.CCP3IP0
#define _CCP3IP1 IPC6bits.CCP3IP1
#define _CCP3IP2 IPC6bits.CCP3IP2
#define _T4IP0 IPC6bits.T4IP0
#define _T4IP1 IPC6bits.T4IP1
#define _T4IP2 IPC6bits.T4IP2

/* IPC7 */
#define _INT2IP IPC7bits.INT2IP
#define _U2RXIP IPC7bits.U2RXIP
#define _U2TXIP IPC7bits.U2TXIP
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2
#define _U2RXIP0 IPC7bits.U2RXIP0
#define _U2RXIP1 IPC7bits.U2RXIP1
#define _U2RXIP2 IPC7bits.U2RXIP2
#define _U2TXIP0 IPC7bits.U2TXIP0
#define _U2TXIP1 IPC7bits.U2TXIP1
#define _U2TXIP2 IPC7bits.U2TXIP2

/* IPC9 */
#define _T3GIP IPC9bits.T3GIP
#define _T3GIP0 IPC9bits.T3GIP0
#define _T3GIP1 IPC9bits.T3GIP1
#define _T3GIP2 IPC9bits.T3GIP2

/* IPC12 */
#define _SSP2IP IPC12bits.SSP2IP
#define _BCL2IP IPC12bits.BCL2IP
#define _SSP2IP0 IPC12bits.SSP2IP0
#define _SSP2IP1 IPC12bits.SSP2IP1
#define _SSP2IP2 IPC12bits.SSP2IP2
#define _BCL2IP0 IPC12bits.BCL2IP0
#define _BCL2IP1 IPC12bits.BCL2IP1
#define _BCL2IP2 IPC12bits.BCL2IP2

/* IPC16 */
#define _U1ERIP IPC16bits.U1ERIP
#define _U2ERIP IPC16bits.U2ERIP
#define _U1ERIP0 IPC16bits.U1ERIP0
#define _U1ERIP1 IPC16bits.U1ERIP1
#define _U1ERIP2 IPC16bits.U1ERIP2
#define _U2ERIP0 IPC16bits.U2ERIP0
#define _U2ERIP1 IPC16bits.U2ERIP1
#define _U2ERIP2 IPC16bits.U2ERIP2

/* IPC18 */
#define _HLVDIP IPC18bits.HLVDIP
#define _HLVDIP0 IPC18bits.HLVDIP0
#define _HLVDIP1 IPC18bits.HLVDIP1
#define _HLVDIP2 IPC18bits.HLVDIP2

/* IPC20 */
#define _ULPWUIP IPC20bits.ULPWUIP
#define _ULPWUIP0 IPC20bits.ULPWUIP0
#define _ULPWUIP1 IPC20bits.ULPWUIP1
#define _ULPWUIP2 IPC20bits.ULPWUIP2

/* INTTREG */
#define _VECNUM INTTREGbits.VECNUM
#define _ILR INTTREGbits.ILR
#define _VHOLD INTTREGbits.VHOLD
#define _CPUIRQ INTTREGbits.CPUIRQ
#define _VECNUM0 INTTREGbits.VECNUM0
#define _VECNUM1 INTTREGbits.VECNUM1
#define _VECNUM2 INTTREGbits.VECNUM2
#define _VECNUM3 INTTREGbits.VECNUM3
#define _VECNUM4 INTTREGbits.VECNUM4
#define _VECNUM5 INTTREGbits.VECNUM5
#define _VECNUM6 INTTREGbits.VECNUM6
#define _ILR0 INTTREGbits.ILR0
#define _ILR1 INTTREGbits.ILR1
#define _ILR2 INTTREGbits.ILR2
#define _ILR3 INTTREGbits.ILR3

/* T1CON */
#define _TCS T1CONbits.TCS
#define _TSYNC T1CONbits.TSYNC
#define _TCKPS T1CONbits.TCKPS
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
#define _T1ECS T1CONbits.T1ECS
#define _TSIDL T1CONbits.TSIDL
#define _TON T1CONbits.TON
#define _TCKPS0 T1CONbits.TCKPS0
#define _TCKPS1 T1CONbits.TCKPS1
#define _T1ECS0 T1CONbits.T1ECS0
#define _T1ECS1 T1CONbits.T1ECS1

/* T2CON */
#define _T2CKPS T2CONbits.T2CKPS
#define _TMR2ON T2CONbits.TMR2ON
#define _T2OUTPS T2CONbits.T2OUTPS
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TOUTPS cannot be defined because it is used by more than one SFR */
#define _T2CKPS0 T2CONbits.T2CKPS0
#define _T2CKPS1 T2CONbits.T2CKPS1
#define _T2OUTPS0 T2CONbits.T2OUTPS0
#define _T2OUTPS1 T2CONbits.T2OUTPS1
#define _T2OUTPS2 T2CONbits.T2OUTPS2
#define _T2OUTPS3 T2CONbits.T2OUTPS3

/* T3GCON */
#define _T3GSS T3GCONbits.T3GSS
#define _T3GVAL T3GCONbits.T3GVAL
#define _T3GGO T3GCONbits.T3GGO
#define _T3GSPM T3GCONbits.T3GSPM
#define _T3GTM T3GCONbits.T3GTM
#define _T3GPOL T3GCONbits.T3GPOL
#define _TMR3GE T3GCONbits.TMR3GE
#define _T3GSS0 T3GCONbits.T3GSS0
#define _T3GSS1 T3GCONbits.T3GSS1
#define _NOT_T3DONE T3GCONbits.NOT_T3DONE
#define _TGSS T3GCONbits.TGSS
#define _TGVAL T3GCONbits.TGVAL
#define _TGGO T3GCONbits.TGGO
#define _TGSE T3GCONbits.TGSE
#define _TGTM T3GCONbits.TGTM
#define _TGPOL T3GCONbits.TGPOL
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */

/* T3CON */
#define _TMR3ON T3CONbits.TMR3ON
#define _NOT_T3SYNC T3CONbits.NOT_T3SYNC
#define _T3OSCEN T3CONbits.T3OSCEN
#define _T3CKPS T3CONbits.T3CKPS
#define _TMR3CS T3CONbits.TMR3CS
/* Bitname _TON cannot be defined because it is used by more than one SFR */
#define _NOT_TSYNC T3CONbits.NOT_TSYNC
/* Bitname _SOSCEN cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
#define _T3CKPS0 T3CONbits.T3CKPS0
#define _T3CKPS1 T3CONbits.T3CKPS1
#define _TMR3CS0 T3CONbits.TMR3CS0
#define _TMR3CS1 T3CONbits.TMR3CS1

/* T4CON */
#define _T4CKPS T4CONbits.T4CKPS
#define _TMR4ON T4CONbits.TMR4ON
#define _T4OUTPS T4CONbits.T4OUTPS
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TOUTPS cannot be defined because it is used by more than one SFR */
#define _T4CKPS0 T4CONbits.T4CKPS0
#define _T4CKPS1 T4CONbits.T4CKPS1
#define _T4OUTPS0 T4CONbits.T4OUTPS0
#define _T4OUTPS1 T4CONbits.T4OUTPS1
#define _T4OUTPS2 T4CONbits.T4OUTPS2
#define _T4OUTPS3 T4CONbits.T4OUTPS3

/* CCPTMRS0 */
#define _C1TSEL0 CCPTMRS0bits.C1TSEL0
#define _C2TSEL0 CCPTMRS0bits.C2TSEL0
#define _C3TSEL0 CCPTMRS0bits.C3TSEL0

/* CCP1CON */
/* Bitname _CCPM cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
#define _PM CCP1CONbits.PM
/* Bitname _CCPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM3 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
#define _PM0 CCP1CONbits.PM0
#define _PM1 CCP1CONbits.PM1
#define _CCP1M CCP1CONbits.CCP1M
#define _DC1B CCP1CONbits.DC1B
#define _P1M CCP1CONbits.P1M
#define _CCP1M0 CCP1CONbits.CCP1M0
#define _CCP1M1 CCP1CONbits.CCP1M1
#define _CCP1M2 CCP1CONbits.CCP1M2
#define _CCP1M3 CCP1CONbits.CCP1M3
#define _DC1B0 CCP1CONbits.DC1B0
#define _DC1B1 CCP1CONbits.DC1B1
#define _P1M0 CCP1CONbits.P1M0
#define _P1M1 CCP1CONbits.P1M1

/* ECCP1DEL */
#define _PDC ECCP1DELbits.PDC
#define _PRSEN ECCP1DELbits.PRSEN
#define _PDC0 ECCP1DELbits.PDC0
#define _PDC1 ECCP1DELbits.PDC1
#define _PDC2 ECCP1DELbits.PDC2
#define _PDC3 ECCP1DELbits.PDC3
#define _PDC4 ECCP1DELbits.PDC4
#define _PDC5 ECCP1DELbits.PDC5
#define _PDC6 ECCP1DELbits.PDC6
#define _P1DC ECCP1DELbits.P1DC
#define _P1RSEN ECCP1DELbits.P1RSEN
#define _P1DC0 ECCP1DELbits.P1DC0
#define _P1DC1 ECCP1DELbits.P1DC1
#define _P1DC2 ECCP1DELbits.P1DC2
#define _P1DC3 ECCP1DELbits.P1DC3
#define _P1DC4 ECCP1DELbits.P1DC4
#define _P1DC5 ECCP1DELbits.P1DC5
#define _P1DC6 ECCP1DELbits.P1DC6

/* ECCP1AS */
#define _PSSBD ECCP1ASbits.PSSBD
#define _PSSAC ECCP1ASbits.PSSAC
#define _ECCPAS ECCP1ASbits.ECCPAS
#define _ECCPASE ECCP1ASbits.ECCPASE
#define _PSSBD0 ECCP1ASbits.PSSBD0
#define _PSSBD1 ECCP1ASbits.PSSBD1
#define _PSSAC0 ECCP1ASbits.PSSAC0
#define _PSSAC1 ECCP1ASbits.PSSAC1
#define _ECCPAS0 ECCP1ASbits.ECCPAS0
#define _ECCPAS1 ECCP1ASbits.ECCPAS1
#define _ECCPAS2 ECCP1ASbits.ECCPAS2
#define _PSS1BD ECCP1ASbits.PSS1BD
#define _PSS1AC ECCP1ASbits.PSS1AC
#define _ECCP1AS ECCP1ASbits.ECCP1AS
#define _PSS1BD0 ECCP1ASbits.PSS1BD0
#define _PSS1BD1 ECCP1ASbits.PSS1BD1
#define _PSS1AC0 ECCP1ASbits.PSS1AC0
#define _PSS1AC1 ECCP1ASbits.PSS1AC1
#define _ECCP1AS0 ECCP1ASbits.ECCP1AS0
#define _ECCP1AS1 ECCP1ASbits.ECCP1AS1
#define _ECCP1AS2 ECCP1ASbits.ECCP1AS2

/* PSTR1CON */
#define _STRA PSTR1CONbits.STRA
#define _STRB PSTR1CONbits.STRB
#define _STRC PSTR1CONbits.STRC
#define _STRD PSTR1CONbits.STRD
#define _STRSYNC PSTR1CONbits.STRSYNC
#define _CMPL PSTR1CONbits.CMPL
#define _CMPL0 PSTR1CONbits.CMPL0
#define _CMPL1 PSTR1CONbits.CMPL1

/* CCP2CON */
/* Bitname _CCPM cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM3 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
#define _CCP2M CCP2CONbits.CCP2M
#define _DC2B CCP2CONbits.DC2B
#define _CCP2M0 CCP2CONbits.CCP2M0
#define _CCP2M1 CCP2CONbits.CCP2M1
#define _CCP2M2 CCP2CONbits.CCP2M2
#define _CCP2M3 CCP2CONbits.CCP2M3
#define _DC2B0 CCP2CONbits.DC2B0
#define _DC2B1 CCP2CONbits.DC2B1

/* CCP3CON */
/* Bitname _CCPM cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM3 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
#define _CCP3M CCP3CONbits.CCP3M
#define _DC3B CCP3CONbits.DC3B
#define _CCP3M0 CCP3CONbits.CCP3M0
#define _CCP3M1 CCP3CONbits.CCP3M1
#define _CCP3M2 CCP3CONbits.CCP3M2
#define _CCP3M3 CCP3CONbits.CCP3M3
#define _DC3B0 CCP3CONbits.DC3B0
#define _DC3B1 CCP3CONbits.DC3B1

/* SPI1BUF */
/* Bitname _SSPBUF cannot be defined because it is used by more than one SFR */
#define _SPI1BUF SPI1BUFbits.SPI1BUF

/* SSP1CON1 */
/* Bitname _SSPM cannot be defined because it is used by more than one SFR */
/* Bitname _CKP cannot be defined because it is used by more than one SFR */
/* Bitname _SSPEN cannot be defined because it is used by more than one SFR */
/* Bitname _SSPOV cannot be defined because it is used by more than one SFR */
/* Bitname _WCOL cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM3 cannot be defined because it is used by more than one SFR */

/* SSP1CON2 */
/* Bitname _SEN cannot be defined because it is used by more than one SFR */
/* Bitname _RSEN cannot be defined because it is used by more than one SFR */
/* Bitname _PEN cannot be defined because it is used by more than one SFR */
/* Bitname _RCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKDT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _GCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK5 cannot be defined because it is used by more than one SFR */

/* SSP1CON3 */
/* Bitname _DHEN cannot be defined because it is used by more than one SFR */
/* Bitname _AHEN cannot be defined because it is used by more than one SFR */
/* Bitname _SBCDE cannot be defined because it is used by more than one SFR */
/* Bitname _SDAHT cannot be defined because it is used by more than one SFR */
/* Bitname _BOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCIE cannot be defined because it is used by more than one SFR */
/* Bitname _PCIE cannot be defined because it is used by more than one SFR */
/* Bitname _ACKTIM cannot be defined because it is used by more than one SFR */

/* SSP1STAT */
/* Bitname _BF cannot be defined because it is used by more than one SFR */
/* Bitname _UA cannot be defined because it is used by more than one SFR */
/* Bitname _R_NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _S cannot be defined because it is used by more than one SFR */
/* Bitname _P cannot be defined because it is used by more than one SFR */
/* Bitname _D_NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _CKE cannot be defined because it is used by more than one SFR */
/* Bitname _SMP cannot be defined because it is used by more than one SFR */
/* Bitname _R_W cannot be defined because it is used by more than one SFR */
/* Bitname _D_A cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_WRITE cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_ADDRESS cannot be defined because it is used by more than one SFR */
/* Bitname _READ_WRITE cannot be defined because it is used by more than one SFR */
/* Bitname _DATA_ADDRESS cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_READ cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_START cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_STOP cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_DAT cannot be defined because it is used by more than one SFR */

/* I2C1ADD */
/* Bitname _SSPADD cannot be defined because it is used by more than one SFR */
/* Bitname _I2CADD cannot be defined because it is used by more than one SFR */

/* I2C1MSK */
/* Bitname _MSK0 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK5 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK6 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK7 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK cannot be defined because it is used by more than one SFR */

/* SPI2BUF */
/* Bitname _SSPBUF cannot be defined because it is used by more than one SFR */
#define _SPI2BUF SPI2BUFbits.SPI2BUF

/* SSP2CON1 */
/* Bitname _SSPM cannot be defined because it is used by more than one SFR */
/* Bitname _CKP cannot be defined because it is used by more than one SFR */
/* Bitname _SSPEN cannot be defined because it is used by more than one SFR */
/* Bitname _SSPOV cannot be defined because it is used by more than one SFR */
/* Bitname _WCOL cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM3 cannot be defined because it is used by more than one SFR */

/* SSP2CON2 */
/* Bitname _SEN cannot be defined because it is used by more than one SFR */
/* Bitname _RSEN cannot be defined because it is used by more than one SFR */
/* Bitname _PEN cannot be defined because it is used by more than one SFR */
/* Bitname _RCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKDT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _GCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK5 cannot be defined because it is used by more than one SFR */

/* SSP2CON3 */
/* Bitname _DHEN cannot be defined because it is used by more than one SFR */
/* Bitname _AHEN cannot be defined because it is used by more than one SFR */
/* Bitname _SBCDE cannot be defined because it is used by more than one SFR */
/* Bitname _SDAHT cannot be defined because it is used by more than one SFR */
/* Bitname _BOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCIE cannot be defined because it is used by more than one SFR */
/* Bitname _PCIE cannot be defined because it is used by more than one SFR */
/* Bitname _ACKTIM cannot be defined because it is used by more than one SFR */

/* SSP2STAT */
/* Bitname _BF cannot be defined because it is used by more than one SFR */
/* Bitname _UA cannot be defined because it is used by more than one SFR */
/* Bitname _R_NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _S cannot be defined because it is used by more than one SFR */
/* Bitname _P cannot be defined because it is used by more than one SFR */
/* Bitname _D_NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _CKE cannot be defined because it is used by more than one SFR */
/* Bitname _SMP cannot be defined because it is used by more than one SFR */
/* Bitname _R_W cannot be defined because it is used by more than one SFR */
/* Bitname _D_A cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_WRITE cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_ADDRESS cannot be defined because it is used by more than one SFR */
/* Bitname _READ_WRITE cannot be defined because it is used by more than one SFR */
/* Bitname _DATA_ADDRESS cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_READ cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_START cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_STOP cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_DAT cannot be defined because it is used by more than one SFR */

/* I2C2ADD */
/* Bitname _SSPADD cannot be defined because it is used by more than one SFR */
/* Bitname _I2CADD cannot be defined because it is used by more than one SFR */

/* SSP2ADD */
/* Bitname _SSPADD cannot be defined because it is used by more than one SFR */
/* Bitname _I2CADD cannot be defined because it is used by more than one SFR */

/* I2C2MSK */
/* Bitname _MSK0 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK5 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK6 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK7 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK cannot be defined because it is used by more than one SFR */

/* SSP2MSK */
/* Bitname _MSK0 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK5 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK6 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK7 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK cannot be defined because it is used by more than one SFR */

/* U1MODE */
#define _STSEL U1MODEbits.STSEL
#define _PDSEL U1MODEbits.PDSEL
#define _BRGH U1MODEbits.BRGH
#define _RXINV U1MODEbits.RXINV
#define _ABAUD U1MODEbits.ABAUD
#define _LPBACK U1MODEbits.LPBACK
#define _WAKE U1MODEbits.WAKE
#define _UEN U1MODEbits.UEN
#define _RTSMD U1MODEbits.RTSMD
#define _IREN U1MODEbits.IREN
#define _USIDL U1MODEbits.USIDL
#define _UARTEN U1MODEbits.UARTEN
#define _PDSEL0 U1MODEbits.PDSEL0
#define _PDSEL1 U1MODEbits.PDSEL1
#define _UEN0 U1MODEbits.UEN0
#define _UEN1 U1MODEbits.UEN1

/* U1STA */
#define _URXDA U1STAbits.URXDA
#define _OERR U1STAbits.OERR
#define _FERR U1STAbits.FERR
#define _PERR U1STAbits.PERR
#define _RIDLE U1STAbits.RIDLE
#define _ADDEN U1STAbits.ADDEN
#define _URXISEL U1STAbits.URXISEL
#define _TRMT U1STAbits.TRMT
#define _UTXBF U1STAbits.UTXBF
#define _UTXEN U1STAbits.UTXEN
#define _UTXBRK U1STAbits.UTXBRK
#define _UTXISEL0 U1STAbits.UTXISEL0
#define _UTXINV U1STAbits.UTXINV
#define _UTXISEL1 U1STAbits.UTXISEL1
#define _URXISEL0 U1STAbits.URXISEL0
#define _URXISEL1 U1STAbits.URXISEL1

/* U1TXREG */
#define _UTXREG0 U1TXREGbits.UTXREG0
#define _UTXREG1 U1TXREGbits.UTXREG1
#define _UTXREG2 U1TXREGbits.UTXREG2
#define _UTXREG3 U1TXREGbits.UTXREG3
#define _UTXREG4 U1TXREGbits.UTXREG4
#define _UTXREG5 U1TXREGbits.UTXREG5
#define _UTXREG6 U1TXREGbits.UTXREG6
#define _UTXREG7 U1TXREGbits.UTXREG7
#define _UTXREG8 U1TXREGbits.UTXREG8

/* U1RXREG */
#define _URXREG0 U1RXREGbits.URXREG0
#define _URXREG1 U1RXREGbits.URXREG1
#define _URXREG2 U1RXREGbits.URXREG2
#define _URXREG3 U1RXREGbits.URXREG3
#define _URXREG4 U1RXREGbits.URXREG4
#define _URXREG5 U1RXREGbits.URXREG5
#define _URXREG6 U1RXREGbits.URXREG6
#define _URXREG7 U1RXREGbits.URXREG7
#define _URXREG8 U1RXREGbits.URXREG8

/* U2MODE */
/* Bitname _STSEL cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BRGH cannot be defined because it is used by more than one SFR */
/* Bitname _RXINV cannot be defined because it is used by more than one SFR */
/* Bitname _ABAUD cannot be defined because it is used by more than one SFR */
/* Bitname _LPBACK cannot be defined because it is used by more than one SFR */
/* Bitname _WAKE cannot be defined because it is used by more than one SFR */
/* Bitname _UEN cannot be defined because it is used by more than one SFR */
/* Bitname _RTSMD cannot be defined because it is used by more than one SFR */
/* Bitname _IREN cannot be defined because it is used by more than one SFR */
/* Bitname _USIDL cannot be defined because it is used by more than one SFR */
/* Bitname _UARTEN cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN0 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN1 cannot be defined because it is used by more than one SFR */

/* U2STA */
/* Bitname _URXDA cannot be defined because it is used by more than one SFR */
/* Bitname _OERR cannot be defined because it is used by more than one SFR */
/* Bitname _FERR cannot be defined because it is used by more than one SFR */
/* Bitname _PERR cannot be defined because it is used by more than one SFR */
/* Bitname _RIDLE cannot be defined because it is used by more than one SFR */
/* Bitname _ADDEN cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRMT cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBF cannot be defined because it is used by more than one SFR */
/* Bitname _UTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBRK cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXINV cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL1 cannot be defined because it is used by more than one SFR */

/* U2TXREG */
/* Bitname _UTXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG8 cannot be defined because it is used by more than one SFR */

/* U2RXREG */
/* Bitname _URXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG8 cannot be defined because it is used by more than one SFR */

/* TRISA */
#define _TRISA0 TRISAbits.TRISA0
#define _TRISA1 TRISAbits.TRISA1
#define _TRISA2 TRISAbits.TRISA2
#define _TRISA3 TRISAbits.TRISA3
#define _TRISA4 TRISAbits.TRISA4
#define _TRISA6 TRISAbits.TRISA6
#define _TRISA7 TRISAbits.TRISA7

/* PORTA */
#define _RA0 PORTAbits.RA0
#define _RA1 PORTAbits.RA1
#define _RA2 PORTAbits.RA2
#define _RA3 PORTAbits.RA3
#define _RA4 PORTAbits.RA4
#define _RA5 PORTAbits.RA5
#define _RA6 PORTAbits.RA6
#define _RA7 PORTAbits.RA7

/* LATA */
#define _LATA0 LATAbits.LATA0
#define _LATA1 LATAbits.LATA1
#define _LATA2 LATAbits.LATA2
#define _LATA3 LATAbits.LATA3
#define _LATA4 LATAbits.LATA4
#define _LATA6 LATAbits.LATA6
#define _LATA7 LATAbits.LATA7

/* ODCA */
#define _ODA0 ODCAbits.ODA0
#define _ODA1 ODCAbits.ODA1
#define _ODA2 ODCAbits.ODA2
#define _ODA3 ODCAbits.ODA3
#define _ODA4 ODCAbits.ODA4
#define _ODA6 ODCAbits.ODA6
#define _ODA7 ODCAbits.ODA7

/* TRISB */
#define _TRISB0 TRISBbits.TRISB0
#define _TRISB1 TRISBbits.TRISB1
#define _TRISB2 TRISBbits.TRISB2
#define _TRISB3 TRISBbits.TRISB3
#define _TRISB4 TRISBbits.TRISB4
#define _TRISB5 TRISBbits.TRISB5
#define _TRISB6 TRISBbits.TRISB6
#define _TRISB7 TRISBbits.TRISB7
#define _TRISB8 TRISBbits.TRISB8
#define _TRISB9 TRISBbits.TRISB9
#define _TRISB10 TRISBbits.TRISB10
#define _TRISB11 TRISBbits.TRISB11
#define _TRISB12 TRISBbits.TRISB12
#define _TRISB13 TRISBbits.TRISB13
#define _TRISB14 TRISBbits.TRISB14
#define _TRISB15 TRISBbits.TRISB15

/* PORTB */
#define _RB0 PORTBbits.RB0
#define _RB1 PORTBbits.RB1
#define _RB2 PORTBbits.RB2
#define _RB3 PORTBbits.RB3
#define _RB4 PORTBbits.RB4
#define _RB5 PORTBbits.RB5
#define _RB6 PORTBbits.RB6
#define _RB7 PORTBbits.RB7
#define _RB8 PORTBbits.RB8
#define _RB9 PORTBbits.RB9
#define _RB10 PORTBbits.RB10
#define _RB11 PORTBbits.RB11
#define _RB12 PORTBbits.RB12
#define _RB13 PORTBbits.RB13
#define _RB14 PORTBbits.RB14
#define _RB15 PORTBbits.RB15

/* LATB */
#define _LATB0 LATBbits.LATB0
#define _LATB1 LATBbits.LATB1
#define _LATB2 LATBbits.LATB2
#define _LATB3 LATBbits.LATB3
#define _LATB4 LATBbits.LATB4
#define _LATB5 LATBbits.LATB5
#define _LATB6 LATBbits.LATB6
#define _LATB7 LATBbits.LATB7
#define _LATB8 LATBbits.LATB8
#define _LATB9 LATBbits.LATB9
#define _LATB10 LATBbits.LATB10
#define _LATB11 LATBbits.LATB11
#define _LATB12 LATBbits.LATB12
#define _LATB13 LATBbits.LATB13
#define _LATB14 LATBbits.LATB14
#define _LATB15 LATBbits.LATB15

/* ODCB */
#define _ODB0 ODCBbits.ODB0
#define _ODB1 ODCBbits.ODB1
#define _ODB2 ODCBbits.ODB2
#define _ODB3 ODCBbits.ODB3
#define _ODB4 ODCBbits.ODB4
#define _ODB5 ODCBbits.ODB5
#define _ODB6 ODCBbits.ODB6
#define _ODB7 ODCBbits.ODB7
#define _ODB8 ODCBbits.ODB8
#define _ODB9 ODCBbits.ODB9
#define _ODB10 ODCBbits.ODB10
#define _ODB11 ODCBbits.ODB11
#define _ODB12 ODCBbits.ODB12
#define _ODB13 ODCBbits.ODB13
#define _ODB14 ODCBbits.ODB14
#define _ODB15 ODCBbits.ODB15

/* PADCFG1 */
#define _SCK1DIS PADCFG1bits.SCK1DIS
#define _SDO1DIS PADCFG1bits.SDO1DIS
#define _SCK2DIS PADCFG1bits.SCK2DIS
#define _SDO2DIS PADCFG1bits.SDO2DIS
#define _SMBDEL0 PADCFG1bits.SMBDEL0
#define _SMBDEL1 PADCFG1bits.SMBDEL1

/* ANSA */
#define _ANSA0 ANSAbits.ANSA0
#define _ANSA1 ANSAbits.ANSA1
#define _ANSA2 ANSAbits.ANSA2
#define _ANSA3 ANSAbits.ANSA3

/* ANSB */
#define _ANSB0 ANSBbits.ANSB0
#define _ANSB1 ANSBbits.ANSB1
#define _ANSB2 ANSBbits.ANSB2
#define _ANSB3 ANSBbits.ANSB3
#define _ANSB4 ANSBbits.ANSB4
#define _ANSB12 ANSBbits.ANSB12
#define _ANSB13 ANSBbits.ANSB13
#define _ANSB14 ANSBbits.ANSB14
#define _ANSB15 ANSBbits.ANSB15

/* CMSTAT */
#define _C1OUT CMSTATbits.C1OUT
#define _C2OUT CMSTATbits.C2OUT
#define _C1EVT CMSTATbits.C1EVT
#define _C2EVT CMSTATbits.C2EVT
#define _CMIDL CMSTATbits.CMIDL

/* CVRCON */
#define _CVR CVRCONbits.CVR
#define _CVRSS CVRCONbits.CVRSS
#define _CVROE CVRCONbits.CVROE
#define _CVREN CVRCONbits.CVREN
#define _CVR0 CVRCONbits.CVR0
#define _CVR1 CVRCONbits.CVR1
#define _CVR2 CVRCONbits.CVR2
#define _CVR3 CVRCONbits.CVR3
#define _CVR4 CVRCONbits.CVR4

/* CM1CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _CLPWR cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */

/* CM2CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _CLPWR cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */

/* RCON */
#define _POR RCONbits.POR
#define _BOR RCONbits.BOR
#define _IDLE RCONbits.IDLE
#define _SLEEP RCONbits.SLEEP
#define _WDTO RCONbits.WDTO
#define _SWDTEN RCONbits.SWDTEN
#define _SWR RCONbits.SWR
#define _EXTR RCONbits.EXTR
#define _PMSLP RCONbits.PMSLP
#define _CM RCONbits.CM
#define _SBOREN RCONbits.SBOREN
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR
#define _VREGS RCONbits.VREGS

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
/* Bitname _SOSCEN cannot be defined because it is used by more than one SFR */
#define _SOSCDRV OSCCONbits.SOSCDRV
#define _CF OSCCONbits.CF
#define _LOCK OSCCONbits.LOCK
#define _CLKLOCK OSCCONbits.CLKLOCK
#define _NOSC OSCCONbits.NOSC
#define _COSC OSCCONbits.COSC
#define _LPOSCEN OSCCONbits.LPOSCEN
#define _NOSC0 OSCCONbits.NOSC0
#define _NOSC1 OSCCONbits.NOSC1
#define _NOSC2 OSCCONbits.NOSC2
#define _COSC0 OSCCONbits.COSC0
#define _COSC1 OSCCONbits.COSC1
#define _COSC2 OSCCONbits.COSC2

/* CLKDIV */
#define _RCDIV CLKDIVbits.RCDIV
#define _DOZEN CLKDIVbits.DOZEN
#define _DOZE CLKDIVbits.DOZE
#define _ROI CLKDIVbits.ROI
#define _RCDIV0 CLKDIVbits.RCDIV0
#define _RCDIV1 CLKDIVbits.RCDIV1
#define _RCDIV2 CLKDIVbits.RCDIV2
#define _DOZE0 CLKDIVbits.DOZE0
#define _DOZE1 CLKDIVbits.DOZE1
#define _DOZE2 CLKDIVbits.DOZE2

/* OSCTUN */
#define _TUN OSCTUNbits.TUN
#define _TUN0 OSCTUNbits.TUN0
#define _TUN1 OSCTUNbits.TUN1
#define _TUN2 OSCTUNbits.TUN2
#define _TUN3 OSCTUNbits.TUN3
#define _TUN4 OSCTUNbits.TUN4
#define _TUN5 OSCTUNbits.TUN5

/* REFOCON */
#define _RODIV REFOCONbits.RODIV
#define _ROSEL REFOCONbits.ROSEL
#define _ROSSLP REFOCONbits.ROSSLP
#define _ROEN REFOCONbits.ROEN
#define _RODIV0 REFOCONbits.RODIV0
#define _RODIV1 REFOCONbits.RODIV1
#define _RODIV2 REFOCONbits.RODIV2
#define _RODIV3 REFOCONbits.RODIV3
#define _ROON REFOCONbits.ROON

/* HLVDCON */
#define _HLVDL HLVDCONbits.HLVDL
#define _IRVST HLVDCONbits.IRVST
#define _BGVST HLVDCONbits.BGVST
#define _VDIR HLVDCONbits.VDIR
#define _HLSIDL HLVDCONbits.HLSIDL
#define _HLVDEN HLVDCONbits.HLVDEN
#define _HLVDL0 HLVDCONbits.HLVDL0
#define _HLVDL1 HLVDCONbits.HLVDL1
#define _HLVDL2 HLVDCONbits.HLVDL2
#define _HLVDL3 HLVDCONbits.HLVDL3

/* NVMCON */
#define _NVMOP NVMCONbits.NVMOP
#define _ERASE NVMCONbits.ERASE
#define _PGMONLY NVMCONbits.PGMONLY
#define _WRERR NVMCONbits.WRERR
#define _WREN NVMCONbits.WREN
#define _WR NVMCONbits.WR
#define _NVMOP0 NVMCONbits.NVMOP0
#define _NVMOP1 NVMCONbits.NVMOP1
#define _NVMOP2 NVMCONbits.NVMOP2
#define _NVMOP3 NVMCONbits.NVMOP3
#define _NVMOP4 NVMCONbits.NVMOP4
#define _NVMOP5 NVMCONbits.NVMOP5

/* NVMKEY */
#define _NVMKEY NVMKEYbits.NVMKEY
#define _NVMKEY0 NVMKEYbits.NVMKEY0
#define _NVMKEY1 NVMKEYbits.NVMKEY1
#define _NVMKEY2 NVMKEYbits.NVMKEY2
#define _NVMKEY3 NVMKEYbits.NVMKEY3
#define _NVMKEY4 NVMKEYbits.NVMKEY4
#define _NVMKEY5 NVMKEYbits.NVMKEY5
#define _NVMKEY6 NVMKEYbits.NVMKEY6
#define _NVMKEY7 NVMKEYbits.NVMKEY7

/* ULPWCON */
#define _ULPSINK ULPWCONbits.ULPSINK
#define _ULPSIDL ULPWCONbits.ULPSIDL
#define _ULPEN ULPWCONbits.ULPEN
#define _CRNTEN ULPWCONbits.CRNTEN
#define _PSIDL ULPWCONbits.PSIDL
#define _WUEN ULPWCONbits.WUEN

/* PMD1 */
#define _U1MD PMD1bits.U1MD
#define _U2MD PMD1bits.U2MD
#define _SSP1MD PMD1bits.SSP1MD
#define _T1MD PMD1bits.T1MD
#define _T2MD PMD1bits.T2MD
#define _T3MD PMD1bits.T3MD
#define _T4MD PMD1bits.T4MD
#define _I2C1MD PMD1bits.I2C1MD
#define _SPI1MD PMD1bits.SPI1MD

/* PMD2 */
#define _CCP1MD PMD2bits.CCP1MD
#define _CCP2MD PMD2bits.CCP2MD
#define _CCP3MD PMD2bits.CCP3MD

/* PMD3 */
#define _SSP2MD PMD3bits.SSP2MD
#define _CMPMD PMD3bits.CMPMD
#define _I2C2MD PMD3bits.I2C2MD
#define _SPI2MD PMD3bits.SPI2MD

/* PMD4 */
#define _HLVDMD PMD4bits.HLVDMD
#define _REFOMD PMD4bits.REFOMD
#define _EEMD PMD4bits.EEMD
#define _ULPWUMD PMD4bits.ULPWUMD


/* ---------------------------------------------------------- */
/* Some useful macros for inline assembler instructions       */
/* ---------------------------------------------------------- */

#define Nop()    __builtin_nop()
#define ClrWdt() {__asm__ volatile ("clrwdt");}
#define Sleep()  {__asm__ volatile ("pwrsav #0");}
#define Idle()   {__asm__ volatile ("pwrsav #1");}

/*----------------------------------------------------------- */
/* Some useful macros for allocating data memory              */
/*----------------------------------------------------------- */

/* The following macros require an argument N that specifies  */
/* alignment. N must a power of two, minimum value = 2.       */
/* For example, to declare an uninitialized array that is     */
/* aligned to a 32 byte address:                              */
/*                                                            */
/* int _BSS(32) buf[16];                                      */
/*                                                            */
/* To declare an initialized array without special            */
/* alignment:                                                 */
/*                                                            */
/* int _DATA(2) table1[] = {0, 1, 1, 2, 3, 5, 8, 13, 21};     */
/*                                                            */
#define _BSS(N)    __attribute__((aligned(N)))
#define _DATA(N)   __attribute__((aligned(N)))

/* The following macros do not require an argument. They can  */
/* be used to locate a variable in persistent data memory or  */
/* in near data memory. For example, to declare two variables */
/* that retain their values across a device reset:            */
/*                                                            */
/* int _PERSISTENT var1,var2;                                 */
/*                                                            */
#define _PERSISTENT __attribute__((persistent))
#define _NEAR       __attribute__((near))

/* ---------------------------------------------------------- */
/* Some useful macros for declaring functions                 */
/* ---------------------------------------------------------- */

/* The following macros can be used to declare interrupt      */
/* service routines (ISRs). For example, to declare an ISR    */
/* for the timer1 interrupt:                                  */
/*                                                            */
/* void _ISR _T1Interrupt(void);                              */
/*                                                            */
/* To declare an ISR for the SPI1 interrupt with fast         */
/* context save:                                              */
/*                                                            */
/* void _ISRFAST _SPI1Interrupt(void);                        */
/*                                                            */
/* Note: ISRs will be installed into the interrupt vector     */
/* tables automatically if the reserved names listed in the   */
/* MPLAB C30 Compiler User's Guide (DS51284) are used.        */
/*                                                            */
#define _ISR __attribute__((interrupt))
#define _ISRFAST __attribute__((interrupt, shadow))

/* ---------------------------------------------------------- */
/* Some useful macros for changing the CPU IPL                */
/* ---------------------------------------------------------- */

/* The following macros can be used to modify the current CPU */
/* IPL. The definition of the macro may vary from device to   */
/* device.                                                    */
/*                                                            */
/* To safely set the CPU IPL, use SET_CPU_IPL(ipl); the       */
/* valid range of ipl is 0-7, it may be any expression.       */
/*                                                            */
/* SET_CPU_IPL(7);                                            */
/*                                                            */
/* To preserve the current IPL and save it use                */
/* SET_AND_SAVE_CPU_IPL(save_to, ipl); the valid range of ipl */
/* is 0-7 and may be any expression, save_to should denote    */
/* some temporary storage.                                    */
/*                                                            */
/* int old_ipl;                                               */
/*                                                            */
/* SET_AND_SAVE_CPU_IPL(old_ipl, 7);                          */
/*                                                            */
/* The IPL can be restored with RESTORE_CPU_IPL(saved_to)     */
/*                                                            */
/* RESTORE_CPU_IPL(old_ipl);                                  */

#define SET_CPU_IPL(ipl) {       \
  int DISI_save;                 \
                                 \
  DISI_save = DISICNT;           \
  asm volatile ("disi #0x3FFF"); \
  SRbits.IPL = ipl;              \
  DISICNT = DISI_save; } (void) 0;

#define SET_AND_SAVE_CPU_IPL(save_to, ipl) { \
  save_to = SRbits.IPL; \
  SET_CPU_IPL(ipl); } (void) 0;

#define RESTORE_CPU_IPL(saved_to) SET_CPU_IPL(saved_to)



/* -------------------------------------------------------- */
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register FBS (0xf80000)                               */

extern __attribute__((space(prog))) int _FBS;
#define _FBS(x) __attribute__((section("__FBS.sec"),space(prog))) int _FBS = (x);

/*
** Only one invocation of FBS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FBS.
** Multiple options may be combined, as shown:
**
** _FBS( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Boot Segment Write Protect:
**     BWRP_ON              Enabled
**     BWRP_OFF             Disabled
**
**   Boot segment Protect:
**     BSS_HI1K             High Security Boot Protect 000200 - 000AFE
**     BSS_STD1K            Standard Security Boot Protect 000200 - 000AFE
**     BSS_OFF              No boot flash segment
**
*/

#define BWRP_ON              0xFFFE
#define BWRP_OFF             0xFFFF

#define BSS_HI1K             0xFFF5
#define BSS_STD1K            0xFFFD
#define BSS_OFF              0xFFFF

/* Register FGS (0xf80004)                               */

extern __attribute__((space(prog))) int _FGS;
#define _FGS(x) __attribute__((section("__FGS.sec"),space(prog))) int _FGS = (x);

/*
** Only one invocation of FGS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FGS.
** Multiple options may be combined, as shown:
**
** _FGS( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   General Segment Flash Write Protect:
**     GWRP_ON              General segment is write-protected
**     GWRP_OFF             General segment may be written
**
**   General Segment Code Protect:
**     GSS0_ON              Standard security enabled
**     GSS0_OFF             No Protection
**
*/

#define GWRP_ON              0xFFFE
#define GWRP_OFF             0xFFFF

#define GSS0_ON              0xFFFD
#define GSS0_OFF             0xFFFF

/* Register FOSCSEL (0xf80006)                               */

extern __attribute__((space(prog))) int _FOSCSEL;
#define _FOSCSEL(x) __attribute__((section("__FOSCSEL.sec"),space(prog))) int _FOSCSEL = (x);

/*
** Only one invocation of FOSCSEL should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSCSEL.
** Multiple options may be combined, as shown:
**
** _FOSCSEL( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Oscillator Select:
**     FNOSC_FRC            Fast RC Oscillator (FRC)
**     FNOSC_FRCPLL         Fast RC Oscillator with Postscaler and PLL (FRCDIV+PLL)
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator with PLL (XT+PLL, HS+PLL, EC+PLL)
**     FNOSC_SOSC           Secondary Oscillator (SOSC)
**     FNOSC_LPRC           Low Power RC Oscillator (LPRC)
**     FNOSC_LPFRC          500KHz Low Power FRC with Postscaler (LPFRC)
**     FNOSC_FRCDIV         8MHz FRC with Postscaler (FRCDIV)
**
**   SOSC Source Type:
**     SOSCSRC_DIG          Digital Mode for use with external clock on SCLKI
**     SOSCSRC_ANA          Analog Mode for use with crystal
**
**   LPRC Power and Accuracy:
**     LPRCSEL_LP           Low Power/Low Accuracy
**     LPRCSEL_HP           High Power/High Accuracy
**
**   Internal External Switch Over bit:
**     IESO_OFF             Internal External Switchover mode disabled (Two-speed Start-up disabled)
**     IESO_ON              Internal External Switchover mode enabled (Two-speed Start-up enabled)
**
*/

#define FNOSC_FRC            0xFFF8
#define FNOSC_FRCPLL         0xFFF9
#define FNOSC_PRI            0xFFFA
#define FNOSC_PRIPLL         0xFFFB
#define FNOSC_SOSC           0xFFFC
#define FNOSC_LPRC           0xFFFD
#define FNOSC_LPFRC          0xFFFE
#define FNOSC_FRCDIV         0xFFFF

#define SOSCSRC_DIG          0xFFDF
#define SOSCSRC_ANA          0xFFFF

#define LPRCSEL_LP           0xFFBF
#define LPRCSEL_HP           0xFFFF

#define IESO_OFF             0xFF7F
#define IESO_ON              0xFFFF

/* Register FOSC (0xf80008)                               */

extern __attribute__((space(prog))) int _FOSC;
#define _FOSC(x) __attribute__((section("__FOSC.sec"),space(prog))) int _FOSC = (x);

/*
** Only one invocation of FOSC should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSC.
** Multiple options may be combined, as shown:
**
** _FOSC( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Primary Oscillator Mode:
**     POSCMD_EC            External clock mode selected
**     POSCMD_XT            XT oscillator mode selected
**     POSCMD_HS            HS oscillator mode selected
**     POSCMD_NONE          Primary oscillator disabled
**
**   CLKO Pin I/O Function:
**     OSCIOFNC_ON          Port I/O enabled (CLKO disabled)
**     OSCIOFNC_OFF         CLKO output signal enabled
**
**   Primary Oscillator Frequency Range:
**     POSCFREQ_LS          Primary Oscillator/External Clock frequency <100kHz
**     POSCFREQ_MS          Primary Oscillator/External Clock frequency between 100kHz to 8MHz
**     POSCFREQ_HS          Primary Oscillator/External Clock frequency >8MHz
**
**   SOSC Power Selection Configuration bits:
**     SOSCSEL_SOSCLP       Secondary Oscillator configured for low-power operation
**     SOSCSEL_SOSCHP       Secondary Oscillator configured for high-power operation
**
**   Clock Switching and Monitor Selection:
**     FCKSM_CSECME         Clock Switching and Fail-safe Clock Monitor Enabled
**     FCKSM_CSECMD         Clock Switching Enabled; Fail-safe Clock Monitor Disabled
**     FCKSM_CSDCMD         Clock Switching and Fail-safe Clock Monitor Disabled
**
*/

#define POSCMD_EC            0xFFFC
#define POSCMD_XT            0xFFFD
#define POSCMD_HS            0xFFFE
#define POSCMD_NONE          0xFFFF

#define OSCIOFNC_ON          0xFFFB
#define OSCIOFNC_OFF         0xFFFF

#define POSCFREQ_LS          0xFFEF
#define POSCFREQ_MS          0xFFF7
#define POSCFREQ_HS          0xFFFF

#define SOSCSEL_SOSCLP       0xFFDF
#define SOSCSEL_SOSCHP       0xFFFF

#define FCKSM_CSECME         0xFF3F
#define FCKSM_CSECMD         0xFF7F
#define FCKSM_CSDCMD         0xFFFF

/* Register FWDT (0xf8000a)                               */

extern __attribute__((space(prog))) int _FWDT;
#define _FWDT(x) __attribute__((section("__FWDT.sec"),space(prog))) int _FWDT = (x);

/*
** Only one invocation of FWDT should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FWDT.
** Multiple options may be combined, as shown:
**
** _FWDT( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Watchdog Timer Postscale Select bits:
**     WDTPS_PS1            1:1
**     WDTPS_PS2            1:2
**     WDTPS_PS4            1:4
**     WDTPS_PS8            1:8
**     WDTPS_PS16           1:16
**     WDTPS_PS32           1:32
**     WDTPS_PS64           1:64
**     WDTPS_PS128          1:128
**     WDTPS_PS256          1:256
**     WDTPS_PS512          1:512
**     WDTPS_PS1024         1:1024
**     WDTPS_PS2048         1:2048
**     WDTPS_PS4096         1:4096
**     WDTPS_PS8192         1:8192
**     WDTPS_PS16384        1:16384
**     WDTPS_PS32768        1:32768
**
**   WDT Prescaler bit:
**     FWPSA_PR32           WDT prescaler ratio of 1:32
**     FWPSA_PR128          WDT prescaler ratio of 1:128
**
**   Watchdog Timer Enable bits:
**     FWDTEN_OFF           WDT disabled in hardware; SWDTEN bit disabled
**     FWDTEN_NOSLP         WDT enabled while device is active; SWDTEN bit disabled
**     FWDTEN_SWON          WDT controlled with SWDTEN bit setting
**     FWDTEN_ON            WDT enabled in hardware
**
**   Windowed Watchdog Timer Disable bit:
**     WINDIS_ON            Windowed WDT enabled
**     WINDIS_OFF           Standard WDT selected (windowed WDT disabled)
**
*/

#define WDTPS_PS1            0xFFF0
#define WDTPS_PS2            0xFFF1
#define WDTPS_PS4            0xFFF2
#define WDTPS_PS8            0xFFF3
#define WDTPS_PS16           0xFFF4
#define WDTPS_PS32           0xFFF5
#define WDTPS_PS64           0xFFF6
#define WDTPS_PS128          0xFFF7
#define WDTPS_PS256          0xFFF8
#define WDTPS_PS512          0xFFF9
#define WDTPS_PS1024         0xFFFA
#define WDTPS_PS2048         0xFFFB
#define WDTPS_PS4096         0xFFFC
#define WDTPS_PS8192         0xFFFD
#define WDTPS_PS16384        0xFFFE
#define WDTPS_PS32768        0xFFFF

#define FWPSA_PR32           0xFFEF
#define FWPSA_PR128          0xFFFF

#define FWDTEN_OFF           0xFF5F
#define FWDTEN_NOSLP         0xFF7F
#define FWDTEN_SWON          0xFFDF
#define FWDTEN_ON            0xFFFF

#define WINDIS_ON            0xFFBF
#define WINDIS_OFF           0xFFFF

/* Register FPOR (0xf8000c)                               */

extern __attribute__((space(prog))) int _FPOR;
#define _FPOR(x) __attribute__((section("__FPOR.sec"),space(prog))) int _FPOR = (x);

/*
** Only one invocation of FPOR should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FPOR.
** Multiple options may be combined, as shown:
**
** _FPOR( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Brown-out Reset Enable bits:
**     BOREN_BOR0           Brown-out Reset disabled in hardware; SBOREN bit disabled
**     BOREN_BOR1           Brown-out Rest controlled by SBOREN bit
**     BOREN_BOR2           Enabled only while device is active; SBOREN bit disabled
**     BOREN_BOR3           Enabled in hardware; SBOREN bit disabled
**
**   Power-up Timer Enable:
**     PWRTEN_OFF           PWRT disabled
**     PWRTEN_ON            PWRT enabled
**
**   Alternate I2C1 Pin Mapping bit:
**     I2C1SEL_SEC          Alternate ASCL1/ASDA1 Pins for I2C1
**     I2C1SEL_PRI          Default SCL1/SDA1 Pins for I2C1
**
**   Brown-out Reset Voltage bits:
**     BORV_LPBOR           Low-power Brown-Out Reset occurs around 2.0V
**     BORV_V30             Brown-out Reset at 3.0V
**     BORV_V27             Brown-out Reset at 2.7V
**     BORV_V18             Brown-out Reset at 1.8V
**
**   MCLR Pin Enable bit:
**     MCLRE_OFF            RA5 input enabled; MCLR disabled
**     MCLRE_ON             RA5 input disabled; MCLR enabled
**
*/

#define BOREN_BOR0           0xFFFC
#define BOREN_BOR1           0xFFFD
#define BOREN_BOR2           0xFFFE
#define BOREN_BOR3           0xFFFF

#define PWRTEN_OFF           0xFFF7
#define PWRTEN_ON            0xFFFF

#define I2C1SEL_SEC          0xFFEF
#define I2C1SEL_PRI          0xFFFF

#define BORV_LPBOR           0xFF9F
#define BORV_V30             0xFFBF
#define BORV_V27             0xFFDF
#define BORV_V18             0xFFFF

#define MCLRE_OFF            0xFF7F
#define MCLRE_ON             0xFFFF

/* Register FICD (0xf8000e)                               */

extern __attribute__((space(prog))) int _FICD;
#define _FICD(x) __attribute__((section("__FICD.sec"),space(prog))) int _FICD = (x);

/*
** Only one invocation of FICD should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FICD.
** Multiple options may be combined, as shown:
**
** _FICD( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   ICD Pin Placement Select:
**     ICS_PGx3             EMUC/EMUD share PGC3/PGD3
**     ICS_PGx2             EMUC/EMUD share PGC2/PGD2
**     ICS_PGx1             EMUC/EMUD share PGC1/PGD1
**
*/

#define ICS_PGx3             0xFFFD
#define ICS_PGx2             0xFFFE
#define ICS_PGx1             0xFFFF


#endif
