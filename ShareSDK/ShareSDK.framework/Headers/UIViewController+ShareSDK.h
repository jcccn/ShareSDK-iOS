//
//  Created by ShareSDK.cn on 13-1-14.
//  Website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "SSAwardViewController.h"

@interface UIViewController (ShareSDK)

/**
 *	@brief	Present an award view controller.
 *
 *	@param 	animated 	The need for animated transitions
 *
 *	@return	Award view controller.
 */
- (SSAwardViewController *)presentAwardViewController:(BOOL)animated;

/**
 *	@brief	push an award view controller.
 *
 *	@param 	animated 	The need for animated transitions
 *
 *	@return	Award view controller.
 */
- (SSAwardViewController *)pushAwardViewController:(BOOL)animated;


@end
