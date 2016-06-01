//
//  ISSCUserInfo.h
//  Comment
//
//  Created by hanweitao on 16/1/6.
//  Copyright © 2016年 掌淘科技. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	用户信息
 */
@protocol ISSCUserInfo <NSObject>

/**
 *	@brief	用户标识
 */
- (NSString *)uid;

/**
 *	@brief	昵称
 */
- (NSString *)nickname;

/**
 *	@brief	图标
 */
- (NSString *)profileImage;

/**
 *	@brief	性别
 *
 */
- (NSInteger)gender;

/**
 *	@brief	平台类型
 *
 */
- (NSInteger)type;


@end