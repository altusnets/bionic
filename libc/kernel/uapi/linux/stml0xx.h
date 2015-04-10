/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __STML0XX_H__
#define __STML0XX_H__
#define ENABLE_VERBOSE_LOGGING 0
#define SPI_FLASH_CLK_SPD_HZ 4000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPI_NORMAL_CLK_SPD_HZ 4000000
#define SPI_BUFF_SIZE 1152
#define SPI_RETRIES 5
#define SPI_RETRY_DELAY 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPI_SENSORHUB_TIMEOUT 5000
#define SPI_BARKER_1 0xF9
#define SPI_BARKER_2 0xAE
#define SPI_HEADER_SIZE 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPI_CRC_SIZE 2
#define SPI_WRITE_REG_HDR_SIZE 6
#define SPI_READ_REG_HDR_SIZE 6
#define SPI_CRC_LEN 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPI_READ_SENSORS_HDR_SIZE 3
#define SPI_TX_PAYLOAD_LEN 88
#define SPI_MSG_SIZE   (SPI_HEADER_SIZE+SPI_TX_PAYLOAD_LEN+SPI_CRC_SIZE)
#define SPI_RX_PAYLOAD_LEN   (SPI_MSG_SIZE - SPI_CRC_SIZE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IOCTL_BASE 77
#define STML0XX_IOCTL_BOOTLOADERMODE   _IOW(STML0XX_IOCTL_BASE, 0, unsigned char)
#define STML0XX_IOCTL_NORMALMODE   _IOW(STML0XX_IOCTL_BASE, 1, unsigned char)
#define STML0XX_IOCTL_MASSERASE   _IOW(STML0XX_IOCTL_BASE, 2, unsigned char)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IOCTL_SETSTARTADDR   _IOW(STML0XX_IOCTL_BASE, 3, unsigned int)
#define STML0XX_IOCTL_TEST_READ   _IOR(STML0XX_IOCTL_BASE, 4, unsigned char)
#define STML0XX_IOCTL_TEST_WRITE   _IOW(STML0XX_IOCTL_BASE, 5, unsigned char)
#define STML0XX_IOCTL_TEST_WRITE_READ   _IOWR(STML0XX_IOCTL_BASE, 6, unsigned short)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IOCTL_SET_MAG_DELAY   _IOW(STML0XX_IOCTL_BASE, 7, unsigned short)
#define STML0XX_IOCTL_TEST_BOOTMODE   _IOW(STML0XX_IOCTL_BASE, 8, unsigned char)
#define STML0XX_IOCTL_SET_ACC_DELAY   _IOW(STML0XX_IOCTL_BASE, 9, unsigned short)
#define STML0XX_IOCTL_SET_MOTION_DELAY   _IOW(STML0XX_IOCTL_BASE, 10, unsigned char)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IOCTL_SET_GYRO_DELAY   _IOW(STML0XX_IOCTL_BASE, 11, unsigned short)
#define STML0XX_IOCTL_SET_DEBUG   _IOW(STML0XX_IOCTL_BASE, 12, unsigned char)
#define STML0XX_IOCTL_SET_USER_PROFILE   _IOW(STML0XX_IOCTL_BASE, 13, int)
#define STML0XX_IOCTL_SET_GPS_DATA   _IOW(STML0XX_IOCTL_BASE, 14, int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IOCTL_SET_PRES_DELAY   _IOW(STML0XX_IOCTL_BASE, 15, unsigned short)
#define STML0XX_IOCTL_SET_REF_ALTITUDE   _IOW(STML0XX_IOCTL_BASE, 16, int)
#define STML0XX_IOCTL_SET_ACTIVE_MODE   _IOW(STML0XX_IOCTL_BASE, 17, unsigned char)
#define STML0XX_IOCTL_SET_PASSIVE_MODE   _IOW(STML0XX_IOCTL_BASE, 18, unsigned char)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IOCTL_SET_FACTORY_MODE   _IOW(STML0XX_IOCTL_BASE, 19, unsigned char)
#define STML0XX_IOCTL_GET_SENSORS   _IOR(STML0XX_IOCTL_BASE, 20, unsigned char)
#define STML0XX_IOCTL_SET_SENSORS   _IOW(STML0XX_IOCTL_BASE, 21, unsigned char)
#define STML0XX_IOCTL_GET_VERSION   _IOR(STML0XX_IOCTL_BASE, 22, unsigned char)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IOCTL_SET_MONITOR_DELAY   _IOW(STML0XX_IOCTL_BASE, 23, unsigned char)
#define STML0XX_IOCTL_GET_DOCK_STATUS   _IOR(STML0XX_IOCTL_BASE, 24, unsigned char)
#define STML0XX_IOCTL_SET_ORIENTATION_DELAY   _IOW(STML0XX_IOCTL_BASE, 25, unsigned char)
#define STML0XX_IOCTL_SET_EQUIPMENT_TYPE   _IOW(STML0XX_IOCTL_BASE, 26, unsigned char)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IOCTL_SET_POWER_MODE   _IOW(STML0XX_IOCTL_BASE, 27, unsigned char)
#define STML0XX_IOCTL_GET_ALGOS   _IOR(STML0XX_IOCTL_BASE, 28, char[STML0XX_ALGO_SIZE])
#define STML0XX_IOCTL_SET_ALGOS   _IOW(STML0XX_IOCTL_BASE, 29, char[STML0XX_ALGO_SIZE])
#define STML0XX_IOCTL_GET_MAG_CAL   _IOR(STML0XX_IOCTL_BASE, 30, char[STML0XX_MAG_CAL_SIZE])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IOCTL_SET_MAG_CAL   _IOW(STML0XX_IOCTL_BASE, 31, char[STML0XX_MAG_CAL_SIZE])
#define STML0XX_IOCTL_SET_MOTION_DUR   _IOW(STML0XX_IOCTL_BASE, 33, unsigned int)
#define STML0XX_IOCTL_SET_ZRMOTION_DUR   _IOW(STML0XX_IOCTL_BASE, 35, unsigned int)
#define STML0XX_IOCTL_GET_WAKESENSORS   _IOR(STML0XX_IOCTL_BASE, 36, unsigned char)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IOCTL_SET_WAKESENSORS   _IOW(STML0XX_IOCTL_BASE, 37, unsigned char)
#define STML0XX_IOCTL_GET_VERNAME   _IOW(STML0XX_IOCTL_BASE, 38, char[FW_VERSION_SIZE])
#define STML0XX_IOCTL_SET_POSIX_TIME   _IOW(STML0XX_IOCTL_BASE, 39, unsigned long)
#define STML0XX_IOCTL_SET_ALGO_REQ   _IOR(STML0XX_IOCTL_BASE, 43, char[1])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IOCTL_GET_ALGO_EVT   _IOR(STML0XX_IOCTL_BASE, 44, char[1])
#define STML0XX_IOCTL_ENABLE_BREATHING   _IOW(STML0XX_IOCTL_BASE, 45, unsigned char)
#define STML0XX_IOCTL_WRITE_REG   _IOR(STML0XX_IOCTL_BASE, 46, char[1])
#define STML0XX_IOCTL_READ_REG   _IOR(STML0XX_IOCTL_BASE, 47, char[1])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IOCTL_GET_BOOTED   _IOR(STML0XX_IOCTL_BASE, 53, unsigned char)
#define STML0XX_IOCTL_SET_LOWPOWER_MODE   _IOW(STML0XX_IOCTL_BASE, 54, char)
#define STML0XX_IOCTL_SET_ACC2_DELAY   _IOW(STML0XX_IOCTL_BASE, 55, unsigned short)
#define STML0XX_IOCTL_SET_FLUSH   _IOW(STML0XX_IOCTL_BASE, 56, int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FW_VERSION_SIZE 12
#define STML0XX_CONTROL_REG_SIZE 200
#define STML0XX_STATUS_REG_SIZE 8
#define STML0XX_TOUCH_REG_SIZE 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_POWER_REG_SIZE 3
#define STML0XX_MAG_CAL_SIZE 26
#define STML0XX_AS_DATA_BUFF_SIZE 20
#define STML0XX_MS_DATA_BUFF_SIZE 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_ALGO_SIZE 2
#define STML0XX_CAMERA_DATA 0x01
#define M_ACCEL 0x000001
#define M_GYRO 0x000002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_PRESSURE 0x000004
#define M_ECOMPASS 0x000008
#define M_TEMPERATURE 0x000010
#define M_ALS 0x000020
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_LIN_ACCEL 0x000100
#define M_QUATERNION 0x000200
#define M_GRAVITY 0x000400
#define M_DISP_ROTATE 0x000800
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_DISP_BRIGHTNESS 0x001000
#define M_UNCALIB_GYRO 0x008000
#define M_UNCALIB_MAG 0x010000
#define M_ACCEL2 0x020000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_DOCK 0x000001
#define M_PROXIMITY 0x000002
#define M_TOUCH 0x000004
#define M_COVER 0x000008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_HEADSET 0x000020
#define M_INIT_COMPLETE 0x000040
#define M_HUB_RESET 0x000080
#define M_FLATUP 0x000100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_FLATDOWN 0x000200
#define M_STOWED 0x000400
#define M_CAMERA_ACT 0x000800
#define M_NFC 0x001000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_SIM 0x002000
#define M_LIFT 0x004000
#define M_LOG_MSG 0x008000
#define M_CHOPCHOP 0x010000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_MMOVEME 0x0001
#define M_NOMMOVE 0x0002
#define M_ALGO_MODALITY 0x0008
#define M_ALGO_ORIENTATION 0x0010
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_ALGO_STOWED 0x0020
#define M_ALGO_ACCUM_MODALITY 0x0040
#define M_ALGO_ACCUM_MVMT 0x0080
#define M_GENERIC_INTRPT 0x0080
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IDX_MODALITY 0
#define STML0XX_IDX_ORIENTATION 1
#define STML0XX_IDX_STOWED 2
#define STML0XX_IDX_ACCUM_MODALITY 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_IDX_ACCUM_MVMT 4
#define STML0XX_NUM_ALGOS 5
#define STML0XX_EVT_SZ_TRANSITION 7
#define STML0XX_EVT_SZ_ACCUM_STATE 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STML0XX_EVT_SZ_ACCUM_MVMT 4
#define SH_HEADSET_EMPTY 0x00
#define SH_HEADPHONE_DETECTED 0x01
#define SH_HEADSET_DETECTED 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SH_HEADSET_BUTTON_1_DOWN 0x04
#define SH_HEADSET_BUTTON_2_DOWN 0x08
#define SH_HEADSET_BUTTON_3_DOWN 0x10
#define SH_HEADSET_BUTTON_4_DOWN 0x20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct stml0xx_android_sensor_data {
 int64_t timestamp;
 unsigned char type;
 unsigned char data[STML0XX_AS_DATA_BUFF_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int size;
 unsigned char status;
};
struct stml0xx_moto_sensor_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int64_t timestamp;
 unsigned char type;
 unsigned char data[STML0XX_MS_DATA_BUFF_SIZE];
 int size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum STML0XX_data_types {
 DT_ACCEL,
 DT_GYRO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_PRESSURE,
 DT_MAG,
 DT_ORIENT,
 DT_TEMP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_ALS,
 DT_LIN_ACCEL,
 DT_QUATERNION,
 DT_GRAVITY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_DISP_ROTATE,
 DT_DISP_BRIGHT,
 DT_DOCK,
 DT_PROX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_COVER,
 DT_FLAT_UP,
 DT_FLAT_DOWN,
 DT_STOWED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_MMMOVE,
 DT_NOMOVE,
 DT_CAMERA_ACT,
 DT_NFC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_ALGO_EVT,
 DT_ACCUM_MVMT,
 DT_SIM,
 DT_RESET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_GENERIC_INT,
 DT_UNCALIB_GYRO,
 DT_UNCALIB_MAG,
 DT_ACCEL2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_FLUSH,
 DT_LIFT,
 DT_CHOPCHOP,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 NO_DOCK,
 DESK_DOCK,
 CAR_DOCK
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum stm_mode {
 UNINITIALIZED,
 BOOTMODE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NORMALMODE,
 FACTORYMODE
};
enum stm_commands {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PASSWORD_RESET,
 MASS_ERASE,
 PROGRAM_CODE,
 END_FIRMWARE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PASSWORD_RESET_DEFAULT,
 CRC_CHECK
};
enum reset_option {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RESET_NOT_ALLOWED,
 RESET_ALLOWED
};
enum lowpower_mode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 LOWPOWER_DISABLED,
 LOWPOWER_ENABLED
};
enum sh_log_level {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SH_LOG_DISABLE,
 SH_LOG_ERROR,
 SH_LOG_VERBOSE,
 SH_LOG_DEBUG
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum sh_spi_msg {
 SPI_MSG_TYPE_READ_REG = 1,
 SPI_MSG_TYPE_WRITE_REG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SPI_MSG_TYPE_READ_IRQ_DATA,
 SPI_MSG_TYPE_READ_WAKE_IRQ_DATA
};
struct stm_response {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short header;
 unsigned char len_lsb;
 unsigned char len_msb;
 unsigned char cmd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char data;
 unsigned char crc_lsb;
 unsigned char crc_msb;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif

