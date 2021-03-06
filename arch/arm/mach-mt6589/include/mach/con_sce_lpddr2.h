#if (defined(FHD))
#define MTK_1080P
#endif
#ifdef MTK_1080P //FIXME: the BW value is not ready.
/* video record mp4 */
X_CON_SCE(CON_SCE_VR_MP4, 0x40105808, 0x00007801, 0x030FD807, 0x20205005, 0xA0A05002, 0xA0A05029)

/* video record h.264 */
X_CON_SCE(CON_SCE_VR_H264, 0x40105803, 0x00007801, 0x030FD807, 0x20205005, 0xA0A05002, 0xA0A0502E)

/* video conference */
X_CON_SCE(CON_SCE_VC, 0x40105805, 0x00007801, 0x030FD809, 0x20205007, 0xA0A05002, 0xA0A05028)

/* video playback */
X_CON_SCE(CON_SCE_VP, 0x40105803, 0x00007801, 0x030FD809, 0x20205006, 0xA0A05002, 0xA0A0502C)

/* image capture */
X_CON_SCE(CON_SCE_IC, 0x4010580D, 0x00007801, 0x030FD808, 0x20205006, 0xA0A05001, 0xA0A05023)

/* image playback */
X_CON_SCE(CON_SCE_IP, 0x40105813, 0x00007801, 0x030FD808, 0x20205006, 0xA0A05001, 0xA0A0501D)

/* zero shutter delay */
X_CON_SCE(CON_SCE_ZSD, 0x40105805, 0x00007801, 0x030FD808, 0x20205006, 0xA0A05001, 0xA0A05028)

/* normal */
X_CON_SCE(CON_SCE_NORMAL, 0x40085813, 0x00007801, 0x030FD808, 0x20205006, 0xA0A05001, 0xA0A0501D)

#else
/* video record mp4 */
X_CON_SCE(CON_SCE_VR_MP4, 0x4010580A, 0x00007801, 0x030FD807, 0x20205005, 0xA0A0501F, 0xA0A0400A)

/* video record h.264 */
X_CON_SCE(CON_SCE_VR_H264, 0x40105805, 0x00007801, 0x030FD80A, 0x20205008, 0xA0A0401E, 0xA0A0400A)

/* video conference */
X_CON_SCE(CON_SCE_VC, 0x40105805, 0x00007801, 0x030FD809, 0x20205007, 0xA0A05020, 0xA0A0400A)

/* video playback */
X_CON_SCE(CON_SCE_VP, 0x40105805, 0x00007801, 0x030FD809, 0x20205007, 0xA0A05028, 0xA0A04002)

/* image capture */
X_CON_SCE(CON_SCE_IC, 0x40105814, 0x00007801, 0x030FD808, 0x20205006, 0xA0A04013, 0xA0A0400A)

/* image playback */
X_CON_SCE(CON_SCE_IP, 0x40105821, 0x00007801, 0x030FD807, 0x20205005, 0xA0A04011, 0xA0A04001)

/* zero shutter delay */
X_CON_SCE(CON_SCE_ZSD, 0x40105810, 0x00007801, 0x030FD808, 0x20205006, 0xA0A04017, 0xA0A0400A)

/* normal */
X_CON_SCE(CON_SCE_NORMAL, 0x40085821, 0x00007801, 0x030FD807, 0x20205005, 0xA0A04011, 0xA0A04001)
#endif
