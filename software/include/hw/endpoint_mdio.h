/*
  Register definitions for slave core: WR Endpoint 1000base-X TBI PCS register block

  * File           : endpoint_mdio.h
  * Author         : auto-generated by wbgen2 from pcs_regs.wb
  * Created        : Tue Jan 14 10:24:03 2014
  * Standard       : ANSI C

    THIS FILE WAS GENERATED BY wbgen2 FROM SOURCE FILE pcs_regs.wb
    DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!

*/

#ifndef __WBGEN2_REGDEFS_PCS_REGS_WB
#define __WBGEN2_REGDEFS_PCS_REGS_WB

#include <inttypes.h>

#if defined( __GNUC__)
#define PACKED __attribute__ ((packed))
#else
#error "Unsupported compiler?"
#endif

#ifndef __WBGEN2_MACROS_DEFINED__
#define __WBGEN2_MACROS_DEFINED__
#define WBGEN2_GEN_MASK(offset, size) (((1<<(size))-1) << (offset))
#define WBGEN2_GEN_WRITE(value, offset, size) (((value) & ((1<<(size))-1)) << (offset))
#define WBGEN2_GEN_READ(reg, offset, size) (((reg) >> (offset)) & ((1<<(size))-1))
#define WBGEN2_SIGN_EXTEND(value, bits) (((value) & (1<<bits) ? ~((1<<(bits))-1): 0 ) | (value))
#endif


/* definitions for register: MDIO Control Register */

/* definitions for field: Reserved in reg: MDIO Control Register */
#define MDIO_MCR_RESV_MASK                    WBGEN2_GEN_MASK(0, 5)
#define MDIO_MCR_RESV_SHIFT                   0
#define MDIO_MCR_RESV_W(value)                WBGEN2_GEN_WRITE(value, 0, 5)
#define MDIO_MCR_RESV_R(reg)                  WBGEN2_GEN_READ(reg, 0, 5)

/* definitions for field: Unidirectional Enable in reg: MDIO Control Register */
#define MDIO_MCR_UNI_EN                       WBGEN2_GEN_MASK(5, 1)

/* definitions for field: Speed Selection (MSB) in reg: MDIO Control Register */
#define MDIO_MCR_SPEED1000_MASK               WBGEN2_GEN_MASK(6, 1)
#define MDIO_MCR_SPEED1000_SHIFT              6
#define MDIO_MCR_SPEED1000_W(value)           WBGEN2_GEN_WRITE(value, 6, 1)
#define MDIO_MCR_SPEED1000_R(reg)             WBGEN2_GEN_READ(reg, 6, 1)

/* definitions for field: Collision Test in reg: MDIO Control Register */
#define MDIO_MCR_CTST_MASK                    WBGEN2_GEN_MASK(7, 1)
#define MDIO_MCR_CTST_SHIFT                   7
#define MDIO_MCR_CTST_W(value)                WBGEN2_GEN_WRITE(value, 7, 1)
#define MDIO_MCR_CTST_R(reg)                  WBGEN2_GEN_READ(reg, 7, 1)

/* definitions for field: Duplex Mode in reg: MDIO Control Register */
#define MDIO_MCR_FULLDPLX_MASK                WBGEN2_GEN_MASK(8, 1)
#define MDIO_MCR_FULLDPLX_SHIFT               8
#define MDIO_MCR_FULLDPLX_W(value)            WBGEN2_GEN_WRITE(value, 8, 1)
#define MDIO_MCR_FULLDPLX_R(reg)              WBGEN2_GEN_READ(reg, 8, 1)

/* definitions for field: Restart Auto-Negotiation in reg: MDIO Control Register */
#define MDIO_MCR_ANRESTART                    WBGEN2_GEN_MASK(9, 1)

/* definitions for field: Isolate in reg: MDIO Control Register */
#define MDIO_MCR_ISOLATE_MASK                 WBGEN2_GEN_MASK(10, 1)
#define MDIO_MCR_ISOLATE_SHIFT                10
#define MDIO_MCR_ISOLATE_W(value)             WBGEN2_GEN_WRITE(value, 10, 1)
#define MDIO_MCR_ISOLATE_R(reg)               WBGEN2_GEN_READ(reg, 10, 1)

/* definitions for field: Power Down in reg: MDIO Control Register */
#define MDIO_MCR_PDOWN                        WBGEN2_GEN_MASK(11, 1)

/* definitions for field: Auto-Negotiation Enable in reg: MDIO Control Register */
#define MDIO_MCR_ANENABLE                     WBGEN2_GEN_MASK(12, 1)

/* definitions for field: Speed Selection (LSB) in reg: MDIO Control Register */
#define MDIO_MCR_SPEED100_MASK                WBGEN2_GEN_MASK(13, 1)
#define MDIO_MCR_SPEED100_SHIFT               13
#define MDIO_MCR_SPEED100_W(value)            WBGEN2_GEN_WRITE(value, 13, 1)
#define MDIO_MCR_SPEED100_R(reg)              WBGEN2_GEN_READ(reg, 13, 1)

/* definitions for field: Loopback in reg: MDIO Control Register */
#define MDIO_MCR_LOOPBACK                     WBGEN2_GEN_MASK(14, 1)

/* definitions for field: Reset in reg: MDIO Control Register */
#define MDIO_MCR_RESET                        WBGEN2_GEN_MASK(15, 1)

/* definitions for register: MDIO Status Register */

/* definitions for field: Extended Capability in reg: MDIO Status Register */
#define MDIO_MSR_ERCAP_MASK                   WBGEN2_GEN_MASK(0, 1)
#define MDIO_MSR_ERCAP_SHIFT                  0
#define MDIO_MSR_ERCAP_W(value)               WBGEN2_GEN_WRITE(value, 0, 1)
#define MDIO_MSR_ERCAP_R(reg)                 WBGEN2_GEN_READ(reg, 0, 1)

/* definitions for field: Jabber Detect in reg: MDIO Status Register */
#define MDIO_MSR_JCD_MASK                     WBGEN2_GEN_MASK(1, 1)
#define MDIO_MSR_JCD_SHIFT                    1
#define MDIO_MSR_JCD_W(value)                 WBGEN2_GEN_WRITE(value, 1, 1)
#define MDIO_MSR_JCD_R(reg)                   WBGEN2_GEN_READ(reg, 1, 1)

/* definitions for field: Link Status in reg: MDIO Status Register */
#define MDIO_MSR_LSTATUS                      WBGEN2_GEN_MASK(2, 1)

/* definitions for field: Auto-Negotiation Ability in reg: MDIO Status Register */
#define MDIO_MSR_ANEGCAPABLE_MASK             WBGEN2_GEN_MASK(3, 1)
#define MDIO_MSR_ANEGCAPABLE_SHIFT            3
#define MDIO_MSR_ANEGCAPABLE_W(value)         WBGEN2_GEN_WRITE(value, 3, 1)
#define MDIO_MSR_ANEGCAPABLE_R(reg)           WBGEN2_GEN_READ(reg, 3, 1)

/* definitions for field: Remote Fault in reg: MDIO Status Register */
#define MDIO_MSR_RFAULT                       WBGEN2_GEN_MASK(4, 1)

/* definitions for field: Auto-Negotiation Complete in reg: MDIO Status Register */
#define MDIO_MSR_ANEGCOMPLETE                 WBGEN2_GEN_MASK(5, 1)

/* definitions for field: MF Preamble Suppression in reg: MDIO Status Register */
#define MDIO_MSR_MFSUPPRESS_MASK              WBGEN2_GEN_MASK(6, 1)
#define MDIO_MSR_MFSUPPRESS_SHIFT             6
#define MDIO_MSR_MFSUPPRESS_W(value)          WBGEN2_GEN_WRITE(value, 6, 1)
#define MDIO_MSR_MFSUPPRESS_R(reg)            WBGEN2_GEN_READ(reg, 6, 1)

/* definitions for field: Unidirectional Ability in reg: MDIO Status Register */
#define MDIO_MSR_UNIDIRABLE_MASK              WBGEN2_GEN_MASK(7, 1)
#define MDIO_MSR_UNIDIRABLE_SHIFT             7
#define MDIO_MSR_UNIDIRABLE_W(value)          WBGEN2_GEN_WRITE(value, 7, 1)
#define MDIO_MSR_UNIDIRABLE_R(reg)            WBGEN2_GEN_READ(reg, 7, 1)

/* definitions for field: Extended Status Capable in reg: MDIO Status Register */
#define MDIO_MSR_ESTATEN_MASK                 WBGEN2_GEN_MASK(8, 1)
#define MDIO_MSR_ESTATEN_SHIFT                8
#define MDIO_MSR_ESTATEN_W(value)             WBGEN2_GEN_WRITE(value, 8, 1)
#define MDIO_MSR_ESTATEN_R(reg)               WBGEN2_GEN_READ(reg, 8, 1)

/* definitions for field: 100BASE-T2 Half Duplex in reg: MDIO Status Register */
#define MDIO_MSR_100HALF2_MASK                WBGEN2_GEN_MASK(9, 1)
#define MDIO_MSR_100HALF2_SHIFT               9
#define MDIO_MSR_100HALF2_W(value)            WBGEN2_GEN_WRITE(value, 9, 1)
#define MDIO_MSR_100HALF2_R(reg)              WBGEN2_GEN_READ(reg, 9, 1)

/* definitions for field: 100BASE-T2 Full Duplex in reg: MDIO Status Register */
#define MDIO_MSR_100FULL2_MASK                WBGEN2_GEN_MASK(10, 1)
#define MDIO_MSR_100FULL2_SHIFT               10
#define MDIO_MSR_100FULL2_W(value)            WBGEN2_GEN_WRITE(value, 10, 1)
#define MDIO_MSR_100FULL2_R(reg)              WBGEN2_GEN_READ(reg, 10, 1)

/* definitions for field: 10 Mbps Half Duplex in reg: MDIO Status Register */
#define MDIO_MSR_10HALF_MASK                  WBGEN2_GEN_MASK(11, 1)
#define MDIO_MSR_10HALF_SHIFT                 11
#define MDIO_MSR_10HALF_W(value)              WBGEN2_GEN_WRITE(value, 11, 1)
#define MDIO_MSR_10HALF_R(reg)                WBGEN2_GEN_READ(reg, 11, 1)

/* definitions for field: 10 Mbps Full Duplex in reg: MDIO Status Register */
#define MDIO_MSR_10FULL_MASK                  WBGEN2_GEN_MASK(12, 1)
#define MDIO_MSR_10FULL_SHIFT                 12
#define MDIO_MSR_10FULL_W(value)              WBGEN2_GEN_WRITE(value, 12, 1)
#define MDIO_MSR_10FULL_R(reg)                WBGEN2_GEN_READ(reg, 12, 1)

/* definitions for field: 100BASE-X Half Duplex in reg: MDIO Status Register */
#define MDIO_MSR_100HALF_MASK                 WBGEN2_GEN_MASK(13, 1)
#define MDIO_MSR_100HALF_SHIFT                13
#define MDIO_MSR_100HALF_W(value)             WBGEN2_GEN_WRITE(value, 13, 1)
#define MDIO_MSR_100HALF_R(reg)               WBGEN2_GEN_READ(reg, 13, 1)

/* definitions for field: 100BASE-X Full Duplex in reg: MDIO Status Register */
#define MDIO_MSR_100FULL_MASK                 WBGEN2_GEN_MASK(14, 1)
#define MDIO_MSR_100FULL_SHIFT                14
#define MDIO_MSR_100FULL_W(value)             WBGEN2_GEN_WRITE(value, 14, 1)
#define MDIO_MSR_100FULL_R(reg)               WBGEN2_GEN_READ(reg, 14, 1)

/* definitions for field: 100BASE-T4 in reg: MDIO Status Register */
#define MDIO_MSR_100BASE4_MASK                WBGEN2_GEN_MASK(15, 1)
#define MDIO_MSR_100BASE4_SHIFT               15
#define MDIO_MSR_100BASE4_W(value)            WBGEN2_GEN_WRITE(value, 15, 1)
#define MDIO_MSR_100BASE4_R(reg)              WBGEN2_GEN_READ(reg, 15, 1)

/* definitions for register: MDIO PHY Identification Register 1 */

/* definitions for field:  Organizationally Unique Identifier (bits 7-21) in reg: MDIO PHY Identification Register 1 */
#define MDIO_PHYSID1_OUI_MASK                 WBGEN2_GEN_MASK(0, 16)
#define MDIO_PHYSID1_OUI_SHIFT                0
#define MDIO_PHYSID1_OUI_W(value)             WBGEN2_GEN_WRITE(value, 0, 16)
#define MDIO_PHYSID1_OUI_R(reg)               WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: MDIO PHY Identification Register 2 */

/* definitions for field: Revision Number in reg: MDIO PHY Identification Register 2 */
#define MDIO_PHYSID2_REV_NUM_MASK             WBGEN2_GEN_MASK(0, 4)
#define MDIO_PHYSID2_REV_NUM_SHIFT            0
#define MDIO_PHYSID2_REV_NUM_W(value)         WBGEN2_GEN_WRITE(value, 0, 4)
#define MDIO_PHYSID2_REV_NUM_R(reg)           WBGEN2_GEN_READ(reg, 0, 4)

/* definitions for field: Manufacturer Model Number in reg: MDIO PHY Identification Register 2 */
#define MDIO_PHYSID2_MMNUM_MASK               WBGEN2_GEN_MASK(4, 6)
#define MDIO_PHYSID2_MMNUM_SHIFT              4
#define MDIO_PHYSID2_MMNUM_W(value)           WBGEN2_GEN_WRITE(value, 4, 6)
#define MDIO_PHYSID2_MMNUM_R(reg)             WBGEN2_GEN_READ(reg, 4, 6)

/* definitions for field: Organizationally Unique Identifier (bits 0-5) in reg: MDIO PHY Identification Register 2 */
#define MDIO_PHYSID2_OUI_MASK                 WBGEN2_GEN_MASK(10, 6)
#define MDIO_PHYSID2_OUI_SHIFT                10
#define MDIO_PHYSID2_OUI_W(value)             WBGEN2_GEN_WRITE(value, 10, 6)
#define MDIO_PHYSID2_OUI_R(reg)               WBGEN2_GEN_READ(reg, 10, 6)

/* definitions for register: MDIO Auto-Negotiation Advertisement Register */

/* definitions for field: Reserved in reg: MDIO Auto-Negotiation Advertisement Register */
#define MDIO_ADVERTISE_RSVD3_MASK             WBGEN2_GEN_MASK(0, 5)
#define MDIO_ADVERTISE_RSVD3_SHIFT            0
#define MDIO_ADVERTISE_RSVD3_W(value)         WBGEN2_GEN_WRITE(value, 0, 5)
#define MDIO_ADVERTISE_RSVD3_R(reg)           WBGEN2_GEN_READ(reg, 0, 5)

/* definitions for field: Full Duplex in reg: MDIO Auto-Negotiation Advertisement Register */
#define MDIO_ADVERTISE_FULL_MASK              WBGEN2_GEN_MASK(5, 1)
#define MDIO_ADVERTISE_FULL_SHIFT             5
#define MDIO_ADVERTISE_FULL_W(value)          WBGEN2_GEN_WRITE(value, 5, 1)
#define MDIO_ADVERTISE_FULL_R(reg)            WBGEN2_GEN_READ(reg, 5, 1)

/* definitions for field: Half Duplex in reg: MDIO Auto-Negotiation Advertisement Register */
#define MDIO_ADVERTISE_HALF_MASK              WBGEN2_GEN_MASK(6, 1)
#define MDIO_ADVERTISE_HALF_SHIFT             6
#define MDIO_ADVERTISE_HALF_W(value)          WBGEN2_GEN_WRITE(value, 6, 1)
#define MDIO_ADVERTISE_HALF_R(reg)            WBGEN2_GEN_READ(reg, 6, 1)

/* definitions for field: Pause in reg: MDIO Auto-Negotiation Advertisement Register */
#define MDIO_ADVERTISE_PAUSE_MASK             WBGEN2_GEN_MASK(7, 2)
#define MDIO_ADVERTISE_PAUSE_SHIFT            7
#define MDIO_ADVERTISE_PAUSE_W(value)         WBGEN2_GEN_WRITE(value, 7, 2)
#define MDIO_ADVERTISE_PAUSE_R(reg)           WBGEN2_GEN_READ(reg, 7, 2)

/* definitions for field: Reserved in reg: MDIO Auto-Negotiation Advertisement Register */
#define MDIO_ADVERTISE_RSVD2_MASK             WBGEN2_GEN_MASK(9, 3)
#define MDIO_ADVERTISE_RSVD2_SHIFT            9
#define MDIO_ADVERTISE_RSVD2_W(value)         WBGEN2_GEN_WRITE(value, 9, 3)
#define MDIO_ADVERTISE_RSVD2_R(reg)           WBGEN2_GEN_READ(reg, 9, 3)

/* definitions for field: Remote Fault in reg: MDIO Auto-Negotiation Advertisement Register */
#define MDIO_ADVERTISE_RFAULT_MASK            WBGEN2_GEN_MASK(12, 2)
#define MDIO_ADVERTISE_RFAULT_SHIFT           12
#define MDIO_ADVERTISE_RFAULT_W(value)        WBGEN2_GEN_WRITE(value, 12, 2)
#define MDIO_ADVERTISE_RFAULT_R(reg)          WBGEN2_GEN_READ(reg, 12, 2)

/* definitions for field: Reserved in reg: MDIO Auto-Negotiation Advertisement Register */
#define MDIO_ADVERTISE_RSVD1_MASK             WBGEN2_GEN_MASK(14, 1)
#define MDIO_ADVERTISE_RSVD1_SHIFT            14
#define MDIO_ADVERTISE_RSVD1_W(value)         WBGEN2_GEN_WRITE(value, 14, 1)
#define MDIO_ADVERTISE_RSVD1_R(reg)           WBGEN2_GEN_READ(reg, 14, 1)

/* definitions for field: Next Page in reg: MDIO Auto-Negotiation Advertisement Register */
#define MDIO_ADVERTISE_NPAGE_MASK             WBGEN2_GEN_MASK(15, 1)
#define MDIO_ADVERTISE_NPAGE_SHIFT            15
#define MDIO_ADVERTISE_NPAGE_W(value)         WBGEN2_GEN_WRITE(value, 15, 1)
#define MDIO_ADVERTISE_NPAGE_R(reg)           WBGEN2_GEN_READ(reg, 15, 1)

/* definitions for register: MDIO Auto-Negotiation Link Partner Ability Register */

/* definitions for field: Reserved in reg: MDIO Auto-Negotiation Link Partner Ability Register */
#define MDIO_LPA_RSVD3_MASK                   WBGEN2_GEN_MASK(0, 5)
#define MDIO_LPA_RSVD3_SHIFT                  0
#define MDIO_LPA_RSVD3_W(value)               WBGEN2_GEN_WRITE(value, 0, 5)
#define MDIO_LPA_RSVD3_R(reg)                 WBGEN2_GEN_READ(reg, 0, 5)

/* definitions for field: Full Duplex in reg: MDIO Auto-Negotiation Link Partner Ability Register */
#define MDIO_LPA_FULL                         WBGEN2_GEN_MASK(5, 1)

/* definitions for field: Half Duplex in reg: MDIO Auto-Negotiation Link Partner Ability Register */
#define MDIO_LPA_HALF                         WBGEN2_GEN_MASK(6, 1)

/* definitions for field: Pause in reg: MDIO Auto-Negotiation Link Partner Ability Register */
#define MDIO_LPA_PAUSE_MASK                   WBGEN2_GEN_MASK(7, 2)
#define MDIO_LPA_PAUSE_SHIFT                  7
#define MDIO_LPA_PAUSE_W(value)               WBGEN2_GEN_WRITE(value, 7, 2)
#define MDIO_LPA_PAUSE_R(reg)                 WBGEN2_GEN_READ(reg, 7, 2)

/* definitions for field: Reserved in reg: MDIO Auto-Negotiation Link Partner Ability Register */
#define MDIO_LPA_RSVD2_MASK                   WBGEN2_GEN_MASK(9, 3)
#define MDIO_LPA_RSVD2_SHIFT                  9
#define MDIO_LPA_RSVD2_W(value)               WBGEN2_GEN_WRITE(value, 9, 3)
#define MDIO_LPA_RSVD2_R(reg)                 WBGEN2_GEN_READ(reg, 9, 3)

/* definitions for field: Remote Fault in reg: MDIO Auto-Negotiation Link Partner Ability Register */
#define MDIO_LPA_RFAULT_MASK                  WBGEN2_GEN_MASK(12, 2)
#define MDIO_LPA_RFAULT_SHIFT                 12
#define MDIO_LPA_RFAULT_W(value)              WBGEN2_GEN_WRITE(value, 12, 2)
#define MDIO_LPA_RFAULT_R(reg)                WBGEN2_GEN_READ(reg, 12, 2)

/* definitions for field: Acknowledge in reg: MDIO Auto-Negotiation Link Partner Ability Register */
#define MDIO_LPA_LPACK                        WBGEN2_GEN_MASK(14, 1)

/* definitions for field: Next Page in reg: MDIO Auto-Negotiation Link Partner Ability Register */
#define MDIO_LPA_NPAGE                        WBGEN2_GEN_MASK(15, 1)

/* definitions for register: MDIO Auto-Negotiation Expansion Register */

/* definitions for field: Reserved in reg: MDIO Auto-Negotiation Expansion Register */
#define MDIO_EXPANSION_RSVD1_MASK             WBGEN2_GEN_MASK(0, 1)
#define MDIO_EXPANSION_RSVD1_SHIFT            0
#define MDIO_EXPANSION_RSVD1_W(value)         WBGEN2_GEN_WRITE(value, 0, 1)
#define MDIO_EXPANSION_RSVD1_R(reg)           WBGEN2_GEN_READ(reg, 0, 1)

/* definitions for field: Page Received in reg: MDIO Auto-Negotiation Expansion Register */
#define MDIO_EXPANSION_LWCP_MASK              WBGEN2_GEN_MASK(1, 1)
#define MDIO_EXPANSION_LWCP_SHIFT             1
#define MDIO_EXPANSION_LWCP_W(value)          WBGEN2_GEN_WRITE(value, 1, 1)
#define MDIO_EXPANSION_LWCP_R(reg)            WBGEN2_GEN_READ(reg, 1, 1)

/* definitions for field: Next Page Able in reg: MDIO Auto-Negotiation Expansion Register */
#define MDIO_EXPANSION_ENABLENPAGE_MASK       WBGEN2_GEN_MASK(2, 1)
#define MDIO_EXPANSION_ENABLENPAGE_SHIFT      2
#define MDIO_EXPANSION_ENABLENPAGE_W(value)   WBGEN2_GEN_WRITE(value, 2, 1)
#define MDIO_EXPANSION_ENABLENPAGE_R(reg)     WBGEN2_GEN_READ(reg, 2, 1)

/* definitions for field: Reserved in reg: MDIO Auto-Negotiation Expansion Register */
#define MDIO_EXPANSION_RSVD2_MASK             WBGEN2_GEN_MASK(3, 13)
#define MDIO_EXPANSION_RSVD2_SHIFT            3
#define MDIO_EXPANSION_RSVD2_W(value)         WBGEN2_GEN_WRITE(value, 3, 13)
#define MDIO_EXPANSION_RSVD2_R(reg)           WBGEN2_GEN_READ(reg, 3, 13)

/* definitions for register: MDIO Extended Status Register */

/* definitions for field: Reserved in reg: MDIO Extended Status Register */
#define MDIO_ESTATUS_RSVD1_MASK               WBGEN2_GEN_MASK(0, 12)
#define MDIO_ESTATUS_RSVD1_SHIFT              0
#define MDIO_ESTATUS_RSVD1_W(value)           WBGEN2_GEN_WRITE(value, 0, 12)
#define MDIO_ESTATUS_RSVD1_R(reg)             WBGEN2_GEN_READ(reg, 0, 12)

/* definitions for field: 1000Base-T Half Duplex in reg: MDIO Extended Status Register */
#define MDIO_ESTATUS_1000_THALF_MASK          WBGEN2_GEN_MASK(12, 1)
#define MDIO_ESTATUS_1000_THALF_SHIFT         12
#define MDIO_ESTATUS_1000_THALF_W(value)      WBGEN2_GEN_WRITE(value, 12, 1)
#define MDIO_ESTATUS_1000_THALF_R(reg)        WBGEN2_GEN_READ(reg, 12, 1)

/* definitions for field: 1000Base-T Full Duplex in reg: MDIO Extended Status Register */
#define MDIO_ESTATUS_1000_TFULL_MASK          WBGEN2_GEN_MASK(13, 1)
#define MDIO_ESTATUS_1000_TFULL_SHIFT         13
#define MDIO_ESTATUS_1000_TFULL_W(value)      WBGEN2_GEN_WRITE(value, 13, 1)
#define MDIO_ESTATUS_1000_TFULL_R(reg)        WBGEN2_GEN_READ(reg, 13, 1)

/* definitions for field: 1000Base-X Half Duplex in reg: MDIO Extended Status Register */
#define MDIO_ESTATUS_1000_XHALF_MASK          WBGEN2_GEN_MASK(14, 1)
#define MDIO_ESTATUS_1000_XHALF_SHIFT         14
#define MDIO_ESTATUS_1000_XHALF_W(value)      WBGEN2_GEN_WRITE(value, 14, 1)
#define MDIO_ESTATUS_1000_XHALF_R(reg)        WBGEN2_GEN_READ(reg, 14, 1)

/* definitions for field: 1000Base-X Full Duplex in reg: MDIO Extended Status Register */
#define MDIO_ESTATUS_1000_XFULL_MASK          WBGEN2_GEN_MASK(15, 1)
#define MDIO_ESTATUS_1000_XFULL_SHIFT         15
#define MDIO_ESTATUS_1000_XFULL_W(value)      WBGEN2_GEN_WRITE(value, 15, 1)
#define MDIO_ESTATUS_1000_XFULL_R(reg)        WBGEN2_GEN_READ(reg, 15, 1)

/* definitions for register: WhiteRabbit-specific Configuration Register */

/* definitions for field: TX Calibration Pattern in reg: WhiteRabbit-specific Configuration Register */
#define MDIO_WR_SPEC_TX_CAL                   WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Calibration Pattern RX Status in reg: WhiteRabbit-specific Configuration Register */
#define MDIO_WR_SPEC_RX_CAL_STAT              WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Reset calibration counter in reg: WhiteRabbit-specific Configuration Register */
#define MDIO_WR_SPEC_CAL_CRST                 WBGEN2_GEN_MASK(2, 1)

/* definitions for field: GTP RX Bitslide in reg: WhiteRabbit-specific Configuration Register */
#define MDIO_WR_SPEC_BSLIDE_MASK              WBGEN2_GEN_MASK(4, 5)
#define MDIO_WR_SPEC_BSLIDE_SHIFT             4
#define MDIO_WR_SPEC_BSLIDE_W(value)          WBGEN2_GEN_WRITE(value, 4, 5)
#define MDIO_WR_SPEC_BSLIDE_R(reg)            WBGEN2_GEN_READ(reg, 4, 5)
/* [0x0]: REG MDIO Control Register */
#define MDIO_REG_MCR 0x00000000
/* [0x4]: REG MDIO Status Register */
#define MDIO_REG_MSR 0x00000004
/* [0x8]: REG MDIO PHY Identification Register 1 */
#define MDIO_REG_PHYSID1 0x00000008
/* [0xc]: REG MDIO PHY Identification Register 2 */
#define MDIO_REG_PHYSID2 0x0000000c
/* [0x10]: REG MDIO Auto-Negotiation Advertisement Register */
#define MDIO_REG_ADVERTISE 0x00000010
/* [0x14]: REG MDIO Auto-Negotiation Link Partner Ability Register */
#define MDIO_REG_LPA 0x00000014
/* [0x18]: REG MDIO Auto-Negotiation Expansion Register */
#define MDIO_REG_EXPANSION 0x00000018
/* [0x3c]: REG MDIO Extended Status Register */
#define MDIO_REG_ESTATUS 0x0000003c
/* [0x40]: REG WhiteRabbit-specific Configuration Register */
#define MDIO_REG_WR_SPEC 0x00000040
#endif