/************************************************************
  *  * EaseMob CONFIDENTIAL 
  * __________________ 
  * Copyright (C) 2013-2014 EaseMob Technologies. All rights reserved. 
  *  
  * NOTICE: All information contained herein is, and remains 
  * the property of EaseMob Technologies.
  * Dissemination of this information or reproduction of this material 
  * is strictly forbidden unless prior written permission is obtained
  * from EaseMob Technologies.
  */

#ifndef ChatDemo_UI2_0_ChatDemoUIDefine_h
#define ChatDemo_UI2_0_ChatDemoUIDefine_h

#define IS_IPHONE_5 ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )568 ) < DBL_EPSILON )

#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]

#define KNOTIFICATION_LOGINCHANGE @"loginStateChange"
#define KNOTIFICATION_CHAT @"chat"
#define KNOTIFICATION_SETTINGCHANGE @"settingChange"
#define KNOTIFICATION_ADDMSG_TO_LIST @"addmsgtolist"

#define CHATVIEWBACKGROUNDCOLOR [UIColor colorWithRed:0.936 green:0.932 blue:0.907 alpha:1]

#define kDefaultAppKey @"155-255#guoxinapp0104"
#define kDefaultCustomerName @"u1423191635866"
//#define kDefaultCustomerName @"130121"
//#define kDefaultAppKey @"culiukeji#99baoyou"
//#define kDefaultCustomerName @"culiutest3"
#define kAppKey @"CSEM_appkey"
#define kCustomerName @"CSEM_name"
#define kCustomerNickname @"CSEM_nickname"
#define kCustomerTenantId @"26512"
#define kCustomerProjectId @"184562"

#endif
