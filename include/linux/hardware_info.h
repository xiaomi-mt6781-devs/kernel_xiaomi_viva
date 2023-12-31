#ifndef __HARDWARE_H__
#define __HARDWARE_H__

#define HARDWARE_MAX_ITEM_LONGTH		64

enum{
	HARDWARE_LCD = 0,
	HARDWARE_TP,
	HARDWARE_FLASH,
	HARDWARE_FRONT_CAM,
	HARDWARE_BACK_CAM,
	HARDWARE_BACK_SUBCAM,
	HARDWARE_WIDE_ANGLE_CAM,
	HARDWARE_MACRO_CAM,
	HARDWARE_BT,
	HARDWARE_WIFI,
	HARDWARE_ACCELEROMETER,
	HARDWARE_ALSPS,
	HARDWARE_GYROSCOPE,
	HARDWARE_MAGNETOMETER,
	HARDWARE_SAR,//bug 417945 , add sar info, chenrongli.wt, 20181218
	HARDWARE_GPS,
	HARDWARE_FM,
	HARDWARE_NFC,
	HARDWARE_BATTERY_ID,
	HARDWARE_CHARGER_IC_INFO,  //bug 436809  modify getian.wt 20190403 Add charger IC model information in factory mode
	HARDWARE_SUB_CHARGER_MASTER_IC_INFO,
	HARDWARE_SUB_CHARGER_SLAVE_IC_INFO,
	HARDWARE_BACK_CAM_MOUDULE_ID,
	HARDWARE_BACK_SUBCAM_MODULEID,
	HARDWARE_FRONT_CAM_MOUDULE_ID,
	HARDWARE_WIDE_ANGLE_CAM_MOUDULE_ID,
	HARDWARE_MACRO_CAM_MOUDULE_ID,
	HARDWARE_BOARD_ID,
	HARDWARE_HARDWARE_ID,
	HARDWARE_SMART_PA_ID,
	HARDWARE_BMS_GAUGE_ID, //Bug493560,lili5.wt,ADD,20191112,Add fuel gauge information in factory mode
	HARDWARE_MAX_ITEM
};


#define HARDWARE_ID                               'H'
#define HARDWARE_LCD_GET                          _IOWR(HARDWARE_ID, 0x01, char[HARDWARE_MAX_ITEM_LONGTH])      //  LCD
#define HARDWARE_TP_GET                           _IOWR(HARDWARE_ID, 0x02, char[HARDWARE_MAX_ITEM_LONGTH])      //  TP
#define HARDWARE_ACCELEROMETER_GET                _IOWR(HARDWARE_ID, 0x06, char[HARDWARE_MAX_ITEM_LONGTH])      //  加速度传感器
#define HARDWARE_ALSPS_GET                        _IOWR(HARDWARE_ID, 0x07, char[HARDWARE_MAX_ITEM_LONGTH])      //  距离光感
#define HARDWARE_GYROSCOPE_GET                    _IOWR(HARDWARE_ID, 0x08, char[HARDWARE_MAX_ITEM_LONGTH])      //  陀螺仪
#define HARDWARE_MAGNETOMETER_GET                 _IOWR(HARDWARE_ID, 0x09, char[HARDWARE_MAX_ITEM_LONGTH])      //  地磁
#define HARDWARE_BT_GET                           _IOWR(HARDWARE_ID, 0x10, char[HARDWARE_MAX_ITEM_LONGTH])      //  蓝牙
#define HARDWARE_WIFI_GET                         _IOWR(HARDWARE_ID, 0x11, char[HARDWARE_MAX_ITEM_LONGTH])      //  WIFI
#define HARDWARE_GPS_GET                          _IOWR(HARDWARE_ID, 0x12, char[HARDWARE_MAX_ITEM_LONGTH])      //  GPS
#define HARDWARE_FM_GET                           _IOWR(HARDWARE_ID, 0x13, char[HARDWARE_MAX_ITEM_LONGTH])      //  FM
#define HARDWARE_BATTERY_ID_GET                   _IOWR(HARDWARE_ID, 0x15, char[HARDWARE_MAX_ITEM_LONGTH])      //  电池
#define HARDWARE_BOARD_ID_GET                     _IOWR(HARDWARE_ID, 0x18, char[HARDWARE_MAX_ITEM_LONGTH])      //  board id
#define HARDWARE_HALL_GET                         _IOWR(HARDWARE_ID, 0x1B, char[HARDWARE_MAX_ITEM_LONGTH])      //  hall sensor
#define HARDWARE_PRESSURE_GET                     _IOWR(HARDWARE_ID, 0x1C, char[HARDWARE_MAX_ITEM_LONGTH])      //  气压传感器
#define HARDWARE_NFC_GET                          _IOWR(HARDWARE_ID, 0x1D, char[HARDWARE_MAX_ITEM_LONGTH])      //  NFC
#define HARDWARE_HARDWARE_ID_GET                  _IOWR(HARDWARE_ID, 0x22, char[HARDWARE_MAX_ITEM_LONGTH])      //hardwareid

//bug 349613,20180409,huwei2,add Sar in hardwareInfo
#define HARDWARE_SAR_GET                          _IOWR(HARDWARE_ID, 0x33, char[HARDWARE_MAX_ITEM_LONGTH])      //sar

#define HARDWARE_SMARTPA_IC_GET                   _IOWR(HARDWARE_ID, 0x40, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BMS_GAUGE_GET                    _IOWR(HARDWARE_ID, 0x41, char[HARDWARE_MAX_ITEM_LONGTH])      //Bug493560,lili5.wt,ADD,20191112,Add fuel gauge information in factory mode
#define HARDWARE_SDCARD_STATUS                    _IOWR(HARDWARE_ID, 0x83, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FINGER_GET                       _IOWR(HARDWARE_ID, 0x84, char[HARDWARE_MAX_ITEM_LONGTH])


/*+Bug 313110 -  guojunbo.wt;add;20171026;add for lg sku */
#define HARDWARE_SKU_INFO_GET                     _IOWR(HARDWARE_ID, 0x85, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_CHARGER_IC_INFO_GET              _IOWR(HARDWARE_ID, 0x86, char[HARDWARE_MAX_ITEM_LONGTH])

/*-Bug 313110 -  guojunbo.wt;add;20171026;add for lg sku */

#define HARDWARE_SECURE_INFO_GET                  _IOWR(HARDWARE_ID, 0x87, char[HARDWARE_MAX_ITEM_LONGTH])
#define SOFTWARE_SECURE_INFO_GET                  _IOWR(HARDWARE_ID, 0x88, char[HARDWARE_MAX_ITEM_LONGTH])

#define HARDWARE_SUB_CHARGER_MASTER_IC_INFO_GET          _IOWR(HARDWARE_ID, 0x89, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_SUB_CHARGER_SLAVE_IC_INFO_GET          _IOWR(HARDWARE_ID, 0x90, char[HARDWARE_MAX_ITEM_LONGTH])


/*    add for camera start    */
enum {
	HARDWARE_BACK_CAM_M = 0,
	HARDWARE_FRONT_CAM_M,
	HARDWARE_ULTRA_CAM_M,
	HARDWARE_DEPTH_CAM_M,
	HARDWARE_MACRO_CAM_M,
	HARDWARE_FRONT_SUBCAM_M,
	HARDWARE_BACK_FISH_CAM_M,
	HARDWARE_FRONT_FISH_CAM_M,
	HARDWARE_IR_CAM_M,
	HARDWARE_BACK_CAM_MODULE_ID_M,
	HARDWARE_FRONT_CAM_MDULE_ID_M,
	HARDWARE_ULTRA_CAM_MODULE_ID_M,
	HARDWARE_DEPTH_CAM_MODULE_ID_M,
	HARDWARE_MACRO_CAM_MODULE_ID_M,
	HARDWARE_FRONT_SUBCAM_MODULE_ID_M,
	HARDWARE_BACK_FISH_CAM_MODULE_ID_M,
	HARDWARE_FRONT_FISH_CAM_MUDULE_ID_M,
	HARDWARE_IR_CAM_MODULE_ID_M,
	HARDWARE_BACK_CAM_EFUSEID_M,
	HARDWARE_FRONT_CAM_EFUSEID_M,
	HARDWARE_ULTRA_CAM_EFUSEID_M,
	HARDWARE_DEPTH_CAM_EFUSEID_M,
	HARDWARE_MACRO_CAM_EFUSEID_M,
	HARDWARE_FRONT_SUBCAM_EFUSEID_M,
	HARDWARE_BACK_FISH_CAM_EFUSEID_M,
	HARDWARE_FRONT_FISH_CAM_EFUSEID_M,
	HARDWARE_IR_CAM_EFUSEID_M,
	HARDWARE_BACK_CAM_SENSORID_M,
	HARDWARE_FRONT_CAM_SENSORID_M,
	HARDWARE_ULTRA_CAM_SENSORID_M,
	HARDWARE_DEPTH_CAM_SENSORID_M,
	HARDWARE_MACRO_CAM_SENSORID_M,
	HARDWARE_FRONT_SUBCAM_SENSORID_M,
	HARDWARE_BACK_FISH_CAM_SENSORID_M,
	HARDWARE_FRONT_FISH_CAM_SENSORID_M,
	HARDWARE_IR_CAM_SENSORID_M,
	HARDWARE_CAMERA_MASK_MAX
};
#define HARDWARE_CAM_ID                           'C'

//camera module name
#define HARDWARE_BACK_CAM                     _IOWR(HARDWARE_CAM_ID, 0x00, char[HARDWARE_MAX_ITEM_LONGTH])      //  后摄 模组名
#define HARDWARE_FRONT_CAM                    _IOWR(HARDWARE_CAM_ID, 0x01, char[HARDWARE_MAX_ITEM_LONGTH])      //  前摄 模组名
#define HARDWARE_ULTRA_CAM                    _IOWR(HARDWARE_CAM_ID, 0x02, char[HARDWARE_MAX_ITEM_LONGTH])      //  广角 模组名
#define HARDWARE_DEPTH_CAM                    _IOWR(HARDWARE_CAM_ID, 0x03, char[HARDWARE_MAX_ITEM_LONGTH])      //  景深 模组名
#define HARDWARE_MACRO_CAM                    _IOWR(HARDWARE_CAM_ID, 0x04, char[HARDWARE_MAX_ITEM_LONGTH])      //  微距 模组名
#define HARDWARE_FRONT_SUBCAM                 _IOWR(HARDWARE_CAM_ID, 0x05, char[HARDWARE_MAX_ITEM_LONGTH])      //  前副摄 模组名
#define HARDWARE_BACK_FISH_CAM                _IOWR(HARDWARE_CAM_ID, 0x06, char[HARDWARE_MAX_ITEM_LONGTH])      //  后鱼眼 模组名
#define HARDWARE_FRONT_FISH_CAM               _IOWR(HARDWARE_CAM_ID, 0x07, char[HARDWARE_MAX_ITEM_LONGTH])      //  前鱼眼 模组名
#define HARDWARE_IR_CAM                       _IOWR(HARDWARE_CAM_ID, 0x08, char[HARDWARE_MAX_ITEM_LONGTH])      //  红外CAM 模组名

//camera module id
#define HARDWARE_BACK_CAM_MODULE_ID           _IOWR(HARDWARE_CAM_ID, 0x10, char[HARDWARE_MAX_ITEM_LONGTH])      //  后摄 module id
#define HARDWARE_FRONT_CAM_MDULE_ID           _IOWR(HARDWARE_CAM_ID, 0x11, char[HARDWARE_MAX_ITEM_LONGTH])      //  前摄 module id
#define HARDWARE_ULTRA_CAM_MODULE_ID          _IOWR(HARDWARE_CAM_ID, 0x12, char[HARDWARE_MAX_ITEM_LONGTH])      //  广角 module id
#define HARDWARE_DEPTH_CAM_MODULE_ID          _IOWR(HARDWARE_CAM_ID, 0x13, char[HARDWARE_MAX_ITEM_LONGTH])      //  景深 module id
#define HARDWARE_MACRO_CAM_MODULE_ID          _IOWR(HARDWARE_CAM_ID, 0x14, char[HARDWARE_MAX_ITEM_LONGTH])      //  微距 module id
#define HARDWARE_FRONT_SUBCAM_MODULE_ID       _IOWR(HARDWARE_CAM_ID, 0x15, char[HARDWARE_MAX_ITEM_LONGTH])      //  前副摄 module id
#define HARDWARE_BACK_FISH_CAM_MODULE_ID      _IOWR(HARDWARE_CAM_ID, 0x16, char[HARDWARE_MAX_ITEM_LONGTH])      //  后鱼眼 module id
#define HARDWARE_FRONT_FISH_CAM_MUDULE_ID     _IOWR(HARDWARE_CAM_ID, 0x17, char[HARDWARE_MAX_ITEM_LONGTH])      //  前鱼眼 module id
#define HARDWARE_IR_CAM_MODULE_ID             _IOWR(HARDWARE_CAM_ID, 0x18, char[HARDWARE_MAX_ITEM_LONGTH])      //  红外CAM module id


//camera efuseid id
#define HARDWARE_BACK_CAM_EFUSEID             _IOWR(HARDWARE_CAM_ID, 0x20, char[HARDWARE_MAX_ITEM_LONGTH])      //  后摄 efuseId
#define HARDWARE_FRONT_CAM_EFUSEID            _IOWR(HARDWARE_CAM_ID, 0x21, char[HARDWARE_MAX_ITEM_LONGTH])      //  前摄 efuseId
#define HARDWARE_ULTRA_CAM_EFUSEID            _IOWR(HARDWARE_CAM_ID, 0x22, char[HARDWARE_MAX_ITEM_LONGTH])      //  广角 efuseId
#define HARDWARE_DEPTH_CAM_EFUSEID            _IOWR(HARDWARE_CAM_ID, 0x23, char[HARDWARE_MAX_ITEM_LONGTH])      //  景深 efuseId
#define HARDWARE_MACRO_CAM_EFUSEID            _IOWR(HARDWARE_CAM_ID, 0x24, char[HARDWARE_MAX_ITEM_LONGTH])      //  微距 efuseId
#define HARDWARE_FRONT_SUBCAM_EFUSEID         _IOWR(HARDWARE_CAM_ID, 0x25, char[HARDWARE_MAX_ITEM_LONGTH])      //  前副摄 efuseId
#define HARDWARE_BACK_FISH_CAM_EFUSEID        _IOWR(HARDWARE_CAM_ID, 0x26, char[HARDWARE_MAX_ITEM_LONGTH])      //  后鱼眼 efuseId
#define HARDWARE_FRONT_FISH_CAM_EFUSEID       _IOWR(HARDWARE_CAM_ID, 0x27, char[HARDWARE_MAX_ITEM_LONGTH])      //  前鱼眼 efuseId
#define HARDWARE_IR_CAM_EFUSEID               _IOWR(HARDWARE_CAM_ID, 0x28, char[HARDWARE_MAX_ITEM_LONGTH])      //  红外CAM efuseId


//camera sensor id
#define HARDWARE_BACK_CAM_SENSORID            _IOWR(HARDWARE_CAM_ID, 0x30, char[HARDWARE_MAX_ITEM_LONGTH])      //  后摄 sensorId
#define HARDWARE_FRONT_CAM_SENSORID           _IOWR(HARDWARE_CAM_ID, 0x31, char[HARDWARE_MAX_ITEM_LONGTH])      //  前摄 sensorId
#define HARDWARE_ULTRA_CAM_SENSORID           _IOWR(HARDWARE_CAM_ID, 0x32, char[HARDWARE_MAX_ITEM_LONGTH])      //  广角CAM sensorId
#define HARDWARE_DEPTH_CAM_SENSORID           _IOWR(HARDWARE_CAM_ID, 0x33, char[HARDWARE_MAX_ITEM_LONGTH])      //  后副摄 sensorId
#define HARDWARE_MACRO_CAM_SENSORID           _IOWR(HARDWARE_CAM_ID, 0x34, char[HARDWARE_MAX_ITEM_LONGTH])      //  微距CAM sensorId
#define HARDWARE_FRONT_SUBCAM_SENSORID        _IOWR(HARDWARE_CAM_ID, 0x35, char[HARDWARE_MAX_ITEM_LONGTH])      //  前副摄 sensorId
#define HARDWARE_BACK_FISH_CAM_SENSORID       _IOWR(HARDWARE_CAM_ID, 0x36, char[HARDWARE_MAX_ITEM_LONGTH])      //  后鱼眼 efuseId
#define HARDWARE_FRONT_FISH_CAM_SENSORID      _IOWR(HARDWARE_CAM_ID, 0x37, char[HARDWARE_MAX_ITEM_LONGTH])      //  前鱼眼 efuseId
#define HARDWARE_IR_CAM_SENSORID              _IOWR(HARDWARE_CAM_ID, 0x38, char[HARDWARE_MAX_ITEM_LONGTH])      //  红外CAM sensor

//flash light
#define HARDWARE_FLASH                        _IOWR(HARDWARE_CAM_ID, 0x40, char[HARDWARE_MAX_ITEM_LONGTH])      //  FLASH

/*    add for camera end    */

int hardwareinfo_set_prop(int cmd, const char *name);

#endif //__HARDWARE_H__
