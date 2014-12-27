/****************************************************************************
 *                                                                          *
 * Copyright 1999-2005 ATI Technologies Inc., Markham, Ontario, CANADA.     *
 * All Rights Reserved.                                                     *
 *                                                                          *
 * Your use and or redistribution of this software in source and \ or       *
 * binary form, with or without modification, is subject to: (i) your       *
 * ongoing acceptance of and compliance with the terms and conditions of    *
 * the ATI Technologies Inc. software End User License Agreement; and (ii)  *
 * your inclusion of this notice in any version of this software that you   *
 * use or redistribute.  A copy of the ATI Technologies Inc. software End   *
 * User License Agreement is included with this software and is also        *
 * available by contacting ATI Technologies Inc. at http://www.ati.com      *
 *                                                                          *
 ****************************************************************************/

/** \brief KCL PCI interface declarations */

#ifndef KCL_PCI_H
#define KCL_PCI_H

#include "kcl_config.h"
#include "kcl_type.h"

#define KCL_PCI_DEV_MAX_BARS        8           /** Maximum BARs(funcs) per pci device */
#define KCL_PCI_BAR_RESOURCE_IO     0x00000100  /** BAR mapped into I/O space, @see linux/ioport.h */
#define KCL_PCI_BAR_RESOURCE_PREFETCHABLE 0x00002000
#define KCL_PCI_BAR_RESOURCE_MEM_64 0x00100000

typedef void* KCL_PCI_DevHandle;

int ATI_API_CALL KCL_PCI_CheckBDF(
    int busnum, int devnum, int funcnum,
    KCL_TYPE_U16* vendor, KCL_TYPE_U16* device, unsigned int* irq);

KCL_PCI_DevHandle ATI_API_CALL KCL_PCI_GetDevHandle(
    KCL_TYPE_U32 bus, KCL_TYPE_U32 slot);

KCL_TYPE_U8 ATI_API_CALL KCL_PCI_GetBusNumber(KCL_PCI_DevHandle pcidev);
unsigned int ATI_API_CALL KCL_PCI_GetFunc(KCL_PCI_DevHandle pcidev);
unsigned int ATI_API_CALL KCL_PCI_GetIRQ(KCL_PCI_DevHandle pcidev);
unsigned int ATI_API_CALL KCL_PCI_GetSlot(KCL_PCI_DevHandle pcidev);

int ATI_API_CALL KCL_PCI_ReadConfigByte(
    KCL_PCI_DevHandle dev, KCL_TYPE_U8 where, KCL_TYPE_U8* val_ptr);

int ATI_API_CALL KCL_PCI_ReadConfigWord(
    KCL_PCI_DevHandle dev, KCL_TYPE_U8 where, KCL_TYPE_U16* val_ptr);

int ATI_API_CALL KCL_PCI_ReadConfigDword(
    KCL_PCI_DevHandle dev, KCL_TYPE_U8 where, KCL_TYPE_U32* val_ptr);

int ATI_API_CALL KCL_PCI_WriteConfigByte(
    KCL_PCI_DevHandle dev, KCL_TYPE_U8 where, KCL_TYPE_U8 val);

int ATI_API_CALL KCL_PCI_WriteConfigWord(
    KCL_PCI_DevHandle dev, KCL_TYPE_U8 where, KCL_TYPE_U16 val);

int ATI_API_CALL KCL_PCI_WriteConfigDword(
    KCL_PCI_DevHandle dev, KCL_TYPE_U8 where, KCL_TYPE_U32 val);

unsigned long ATI_API_CALL KCL_PCI_BAR_GetBase(
    KCL_PCI_DevHandle dev, unsigned int res);

unsigned long ATI_API_CALL KCL_PCI_BAR_GetSize(
    KCL_PCI_DevHandle dev, unsigned int res);

unsigned long ATI_API_CALL KCL_PCI_BAR_GetType(
    KCL_PCI_DevHandle dev, unsigned int res);

int ATI_API_CALL KCL_PCI_EnableDevice(KCL_PCI_DevHandle dev);
void ATI_API_CALL KCL_PCI_EnableBusMastering(KCL_PCI_DevHandle dev);
void ATI_API_CALL KCL_PCI_EnableBars(KCL_PCI_DevHandle dev);
void ATI_API_CALL KCL_PCI_DisableDevice(KCL_PCI_DevHandle dev);

#if defined(__x86_64__)
void* ATI_API_CALL KCL_PCI_AllocDmaCoherentMem(
    KCL_PCI_DevHandle dev, int size, unsigned long long* dma_handle);

void ATI_API_CALL KCL_PCI_FreeDmaCoherentMem(
    KCL_PCI_DevHandle dev, int size, void* cpu_addr,
    unsigned long long dma_handle);
#endif //__x86_64__

#endif
