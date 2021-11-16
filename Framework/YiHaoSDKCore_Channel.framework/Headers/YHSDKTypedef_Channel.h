//
//  YHSDKTypedef_Offical.h
//  YiHaoSDKCore_Channel
//
//  Created by 凌天子 on 2021/11/16.
//

#ifndef YHSDKTypedef_Offical_h
#define YHSDKTypedef_Offical_h

typedef enum YHSDKChannelReportType {
    YHSDKChannelReportTypePlaceHolder        = 0,
    YHSDKChannelReportTypeCreateRole         = 1,//创建角色上报
    YHSDKChannelReportTypeRoleLogin          = 2,//角色登陆成功上报
    YHSDKChannelReportTypeRoleLogout         = 3 //角色成功登出上报
}YHSDKChannelReportType;

#endif /* YHSDKTypedef_Offical_h */
