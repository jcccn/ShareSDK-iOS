///#begin zh-cn
//
//  Created by ShareSDK.cn on 13-1-14.
//  官网地址:http://www.ShareSDK.cn
//  技术支持邮箱:support@sharesdk.cn
//  官方微信:ShareSDK   （如果发布新版本的话，我们将会第一时间通过微信将版本更新内容推送给您。如果使用过程中有任何问题，也可以通过微信与我们取得联系，我们将会在24小时内给予回复）
//  商务QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
///#end
///#begin en
//
//  Created by ShareSDK.cn on 13-1-14.
//  Website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
///#end

#import <Foundation/Foundation.h>
#import "SSCTypeDef.h"

///#begin zh-cn
/**
 *	@brief	开放应用用户信息
 */
///#end
///#begin en
/**
 *	@brief	User descriptor.
 */
///#end
@protocol ISSCUserDescriptor <NSObject>

@required

///#begin zh-cn
/**
 *	@brief	获取用户ID
 *
 *	@return	用户ID
 */
///#end
///#begin en
/**
 *	@brief	Get user id.
 *
 *	@return	User id.
 */
///#end
- (NSString *)uid;

///#begin zh-cn
/**
 *	@brief	获取昵称
 *
 *	@return	昵称
 */
///#end
///#begin en
/**
 *	@brief	Get nickname.
 *
 *	@return	Nickname.
 */
///#end
- (NSString *)nickname;

///#begin zh-cn
/**
 *	@brief	获取用户头像
 *
 *	@return	用户头像
 */
///#end
///#begin en
/**
 *	@brief	Get avatar path.
 *
 *	@return	Avatar path.
 */
///#end
- (NSString *)icon;

///#begin zh-cn
/**
 *	@brief	获取性别，0 男； 1 女； 2 未知
 *
 *	@return	性别
 */
///#end
///#begin en
/**
 *	@brief	Get gender，0 Male； 1 Female； 2 Unknown.
 *
 *	@return	Gender.
 */
///#end
- (NSInteger)gender;

///#begin zh-cn
/**
 *	@brief	获取用户个人主页
 *
 *	@return	个人主页
 */
///#end
///#begin en
/**
 *	@brief	Get personal homepage.
 *
 *	@return	Personal homepage.
 */
///#end
- (NSString *)url;

///#begin zh-cn
/**
 *	@brief	获取个人简介
 *
 *	@return 个人简介
 */
///#end
///#begin en
/**
 *	@brief	Get profile.
 *
 *	@return Profile.
 */
///#end
- (NSString *)aboutMe;

///#begin zh-cn
/**
 *	@brief	获取认证类型：－1 未知； 0 未认证； 1 认证。
 *
 *	@return	认证类型
 */
///#end
///#begin en
/**
 *	@brief	Get verify type：－1 Unknown； 0 Not certified. 1 certification.
 *
 *	@return	Verify type.
 */
///#end
- (NSInteger)verifyType;

///#begin zh-cn
/**
 *	@brief	获取认证信息
 *
 *	@return	认证信息
 */
///#end
///#begin en
/**
 *	@brief	Get verify reason.
 *
 *	@return	Verify reason.
 */
///#end
- (NSString *)verifyReason;

///#begin zh-cn
/**
 *	@brief	获取生日
 *
 *	@return	生日
 */
///#end
///#begin en
/**
 *	@brief	Get Birthday.
 *
 *	@return	Birthday.
 */
///#end
- (NSString *)birthday;

///#begin zh-cn
/**
 *	@brief	获取粉丝数
 *
 *	@return	粉丝数
 */
///#end
///#begin en
/**
 *	@brief	Get fans count.
 *
 *	@return	Fans count.
 */
///#end
- (NSInteger)followerCount;

///#begin zh-cn
/**
 *	@brief	获取关注数
 *
 *	@return	关注数
 */
///#end
///#begin en
/**
 *	@brief	Get friends count.
 *
 *	@return	Friends count.
 */
///#end
- (NSInteger)friendCount;

///#begin zh-cn
/**
 *	@brief	获取分享数
 *
 *	@return	分享数
 */
///#end
///#begin en
/**
 *	@brief	Get share count.
 *
 *	@return	Share count.
 */
///#end
- (NSInteger)shareCount;

///#begin zh-cn
/**
 *	@brief	获取注册时间
 *
 *	@return	注册时间（秒）
 */
///#end
///#begin en
/**
 *	@brief	Get Registered time.
 *
 *	@return	Registered time（unit: seconds）
 */
///#end
- (NSTimeInterval)regAt;

///#begin zh-cn
/**
 *	@brief	获取用户等级
 *
 *	@return	用户等级
 */
///#end
///#begin en
/**
 *	@brief	Get user level.
 *
 *	@return	User level.
 */
///#end
- (NSInteger)level;

///#begin zh-cn
/**
 *	@brief	获取教育信息
 *
 *	@return	教育信息
 */
///#end
///#begin en
/**
 *	@brief	Get education information
 *
 *	@return	Education information.
 */
///#end
- (NSArray *)educations;

///#begin zh-cn
/**
 *	@brief	获取职业信息
 *
 *	@return	职业信息
 */
///#end
///#begin en
/**
 *	@brief	Get career information
 *
 *	@return	Career information.
 */
///#end
- (NSArray *)works;

///#begin zh-cn
/**
 *	@brief	获取分享平台类型
 *
 *  @since  ver1.2.4
 *
 *	@return	分享平台类型
 */
///#end
///#begin en
/**
 *	@brief	Get platform type.
 *
 *  @since  ver1.2.4
 *
 *	@return	Platform type.
 */
///#end
- (SSCShareType)type;

///#begin zh-cn
/**
 *	@brief	获取于平台相关的用户信息，用户结构可以参考各个平台连接器中定义
 *
 *	@return	用户信息
 */
///#end
///#begin en
/**
 *	@brief	Get user information in the platform, the user can refer to each platform structure defined connector
 *
 *	@return	User information.
 */
///#end
- (id)localUser;

///#begin zh-cn
/**
 *	@brief	获取源用户信息数据，此属性根据不同平台取得的用户信息结构不相同，详细请参考官方API文档描述。
 *
 *	@return	源用户信息数据
 */
///#end
///#begin en
/**
 *	@brief	Get user information data sources, this property based on the user information structure made ​​of different platforms are not the same, please refer to the official detailed API documentation describes.
 *
 *	@return	Raw data.
 */
///#end
- (NSDictionary *)sourceData;

@end
