/*
 * Copyright (c) 2017-2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SUNXI_CPUCFG_H
#define SUNXI_CPUCFG_H

#include <sunxi_mmap.h>

/* c = cluster, n = core */
#define SUNXI_CPUCFG_CLS_CTRL_REG0(c)	(SUNXI_CPUCFG_BASE + 0x0000 + (c) * 16)
#define SUNXI_CPUCFG_CLS_CTRL_REG1(c)	(SUNXI_CPUCFG_BASE + 0x0004 + (c) * 16)
#define SUNXI_CPUCFG_CACHE_CFG_REG0	(SUNXI_CPUCFG_BASE + 0x0008)
#define SUNXI_CPUCFG_CACHE_CFG_REG1	(SUNXI_CPUCFG_BASE + 0x000c)
#define SUNXI_CPUCFG_DBG_REG0		(SUNXI_CPUCFG_BASE + 0x0020)
#define SUNXI_CPUCFG_GLB_CTRL_REG	(SUNXI_CPUCFG_BASE + 0x0028)
#define SUNXI_CPUCFG_CPU_STS_REG(c)	(SUNXI_CPUCFG_BASE + 0x0030 + (c) * 4)
#define SUNXI_CPUCFG_L2_STS_REG		(SUNXI_CPUCFG_BASE + 0x003c)
#define SUNXI_CPUCFG_RST_CTRL_REG(c)	(SUNXI_CPUCFG_BASE + 0x0080 + (c) * 4)
#define SUNXI_CPUCFG_RVBAR_LO_REG(n)	(SUNXI_CPUCFG_BASE + 0x00a0 + (n) * 8)
#define SUNXI_CPUCFG_RVBAR_HI_REG(n)	(SUNXI_CPUCFG_BASE + 0x00a4 + (n) * 8)

#define SUNXI_CPU_POWER_CLAMP_REG(c, n)	(SUNXI_R_PRCM_BASE + 0x0140 + \
					 (c) * 16 + (n) * 4)
#define SUNXI_POWEROFF_GATING_REG(c)	(SUNXI_R_PRCM_BASE + 0x0100 + (c) * 4)
#define SUNXI_R_CPUCFG_CPUS_RST_REG	(SUNXI_R_CPUCFG_BASE + 0x0000)
#define SUNXI_POWERON_RST_REG(c)	(SUNXI_R_CPUCFG_BASE + 0x0030 + (c) * 4)
#define SUNXI_R_CPUCFG_SYS_RST_REG	(SUNXI_R_CPUCFG_BASE + 0x0140)
#define SUNXI_R_CPUCFG_SS_FLAG_REG	(SUNXI_R_CPUCFG_BASE + 0x01a0)
#define SUNXI_R_CPUCFG_CPU_ENTRY_REG	(SUNXI_R_CPUCFG_BASE + 0x01a4)
#define SUNXI_R_CPUCFG_SS_ENTRY_REG	(SUNXI_R_CPUCFG_BASE + 0x01a8)
#define SUNXI_R_CPUCFG_HP_FLAG_REG	(SUNXI_R_CPUCFG_BASE + 0x01ac)

#endif /* SUNXI_CPUCFG_H */
