# SPDX-License-Identifier: GPL-2.0-only

romstage-y += fixme.c

ramstage-y += fixme.c
ramstage-y += chip_name.c
ramstage-y += model_16_init.c
ramstage-y += update_microcode.c

subdirs-y += ../../mtrr
subdirs-y += ../../../x86/lapic
subdirs-y += ../../../x86/cache
