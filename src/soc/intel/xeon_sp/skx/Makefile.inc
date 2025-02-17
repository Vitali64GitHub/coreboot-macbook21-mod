## SPDX-License-Identifier: GPL-2.0-only

ifeq ($(CONFIG_SOC_INTEL_SKYLAKE_SP),y)

subdirs-y += ../../../../cpu/intel/microcode
subdirs-y += ../../../../cpu/intel/turbo
subdirs-y += ../../../../cpu/x86/lapic
subdirs-y += ../../../../cpu/x86/cache

postcar-y += soc_util.c

romstage-y += soc_util.c
romstage-y += romstage.c
romstage-y += soc_util.c
romstage-y += hob_display.c
romstage-$(CONFIG_DISPLAY_UPD_DATA) += upd_display.c
romstage-$(CONFIG_DISPLAY_HOBS) += hob_display.c

ramstage-y += soc_acpi.c
ramstage-y += chip.c
ramstage-y += soc_util.c
ramstage-y += cpu.c
ramstage-$(CONFIG_DISPLAY_UPD_DATA) += upd_display.c
ramstage-$(CONFIG_DISPLAY_HOBS) += hob_display.c
ramstage-y += hob_display.c

CPPFLAGS_common += -I$(src)/soc/intel/xeon_sp/skx/include -I$(src)/soc/intel/xeon_sp/skx

cpu_microcode_bins += 3rdparty/intel-microcode/intel-ucode/06-55-04

endif ## CONFIG_SOC_INTEL_SKYLAKE_SP
