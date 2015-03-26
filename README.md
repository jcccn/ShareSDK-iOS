ShareSDK-iOS
============
这是一个 [ShareSDK 社会化分享](http://sharesdk.mob.com/) SDK 的非官方镜像。

官方集成指南请参照 [http://wiki.mob.com/快速集成指南/](http://wiki.mob.com/快速集成指南/)。

## 使用CocoaPods安装
[CocoaPods](http://cocoapods.org) 是开发 OS X 和 iOS 应用程序的一个第三方库的依赖管理工具。

要使用 ShareSDK 社会化分享，推荐这样配置 Podfile:

```ruby
# The front repo is prior if conflicted
# CocoaPods private repo
source 'https://github.com/jcccn/PodSpecs.git'
# CocoaPods master repo
source 'https://github.com/CocoaPods/Specs.git'

platform :ios,'7.0'

# ignore all warnings from all pods
inhibit_all_warnings!

pod 'ShareSDK'
#pod 'ShareSDK/Frequent'
#pod 'ShareSDK/EverNote'
#pod 'ShareSDK/Pocket'

```

也可以这样配置Podfile:

```ruby
# CocoaPods master repo
source 'https://github.com/CocoaPods/Specs.git'

platform :ios,'7.0'

# ignore all warnings from all pods
inhibit_all_warnings!

pod 'ShareSDK', :git => 'https://github.com/jcccn/ShareSDK-iOS.git'

```

## 使用
### 初始化
在AppDelegate.m文件的 `- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions`方法中添加如下代码完成SDK的初始化：

```objective-c
[ShareSDK registerApp:ShareSDKAppKey];
[ShareSDK ssoEnabled:YES];  //开启SSO登录

//添加新浪微博应用
[ShareSDK connectSinaWeiboWithAppKey:AppKeySinaWeibo
                           appSecret:AppSecretSinaWeibo                           
                         redirectUri:RedirectUrlSinaWeibo];
```

### 一键分享
在需要调出一键分享的地方，完成如下代码：

```objective-c
id<ISSContent> publishContent = [ShareSDK content:@"分享内容"
                                   defaultContent:@"分享内容"
                                            image:nil
                                            title:@"标题"
                                              url:@"链接地址"
                                      description:nil
                                        mediaType:SSPublishContentMediaTypeText];

id<ISSAuthOptions> authOptions = [ShareSDK authOptionsWithAutoAuth:YES
                                                     allowCallback:NO
                                                     authViewStyle:SSAuthViewStylePopup
                                                      viewDelegate:nil
                                           authManagerViewDelegate:nil];
[authOptions setPowerByHidden:YES];

NSMutableArray *shareList = [NSMutableArray array];
if ([QQApiInterface isQQInstalled]) {
    [shareList addObjectsFromArray:[ShareSDK getShareListWithType:
                                    ShareTypeQQ,
                                    ShareTypeQQSpace,
                                    nil]];
}

[shareList addObjectsFromArray:[ShareSDK getShareListWithType:ShareTypeSinaWeibo, nil]];

if ([WXApi isWXAppInstalled]) {
    [shareList addObjectsFromArray:[ShareSDK getShareListWithType:
                                    ShareTypeWeixiTimeline,
                                    ShareTypeWeixiSession,
                                    nil]];
}

id<ISSShareOptions> shareOptions = [ShareSDK defaultShareOptionsWithTitle:@"分享视图标题"
                                                          oneKeyShareList:shareList
                                                           qqButtonHidden:NO
                                                    wxSessionButtonHidden:NO
                                                   wxTimelineButtonHidden:NO
                                                     showKeyboardOnAppear:NO
                                                        shareViewDelegate:nil
                                                      friendsViewDelegate:nil
                                                    picViewerViewDelegate:nil];

id<ISSContainer> container = [ShareSDK container];
[container setIPhoneContainerWithViewController:viewController];

[ShareSDK showShareActionSheet:container
                     shareList:shareList
                       content:publishContent
                 statusBarTips:NO
                   authOptions:authOptions
                  shareOptions:shareOptions
                        result:^(ShareType type, SSResponseState state, id<ISSPlatformShareInfo> statusInfo, id<ICMErrorInfo> error, BOOL end) {
                            //分享结果处理
                        }];
```

详细的社会化分享功能使用，请参考[官方文档](http://wiki.mob.com/快速集成指南/)。