//
//  Created by ShareSDK.cn on 13-1-14.
//  website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <ShareSDKCoreService/ShareSDKCoreService.h>
#import <ShareSDK/ShareSDKPlugin.h>

/**
 *	@brief	DouBan Credential
 */
@interface SSDouBanCredential : NSObject <ISSPlatformCredential,
                                          NSCoding>
{
@private
    NSString *_uid;
    NSString *_token;
    NSDate *_expired;
    NSDictionary *_extInfo;
}

/**
 *	@brief	Extended Data
 */
@property (nonatomic,retain) NSDictionary *extInfo;

/**
 *	@brief	User id.
 */
@property (nonatomic,copy) NSString *uid;

/**
 *	@brief	Access Token
 */
@property (nonatomic,copy) NSString *token;

/**
 *	@brief	Expires
 */
@property (nonatomic,retain) NSDate *expired;

/**
 *	@brief	Determine the validity of the authorization data
 */
@property (nonatomic,readonly) BOOL available;

/**
 *	@brief	Using raw data to create a Credential.
 *
 *	@param 	sourceData 	Raw data.
 *
 *	@return	Credential.
 */
+ (SSDouBanCredential *)credentialWithSourceData:(NSDictionary *)sourceData;

@end
