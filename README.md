ShareSDK-iOS
============
这是一个 [ShareSDK 社会化分享](http://sharesdk.mob.com/) SDK 的非官方镜像。

官方集成指南请参照 [http://wiki.mob.com/ios简洁版快速集成/](http://wiki.mob.com/ios简洁版快速集成/)。

或者使用官方的 repo : [https://github.com/MobClub/ShareSDK3.x-for-iOS](https://github.com/MobClub/ShareSDK3.x-for-iOS)

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

pod 'ShareSDK/Core'
pod 'ShareSDK/ShareSDKUI'
pod 'ShareSDK/ShareSDKPlatforms/QQ'
pod 'ShareSDK/ShareSDKPlatforms/SinaWeibo'
pod 'ShareSDK/ShareSDKPlatforms/WeChat'
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

```objc
-   (BOOL)application:(UIApplication )application didFinishLaunchingWithOptions:(NSDictionary )launchOptions 
{     
     [ShareSDK registerApp:@"*****"  // *** is the AppKey that you just got 
           activePlatforms:@[
                            @(SSDKPlatformTypeSinaWeibo),
                            @(SSDKPlatformTypeMail),
                            @(SSDKPlatformTypeSMS),
                            @(SSDKPlatformTypeCopy),
                            @(SSDKPlatformTypeWechat),
                            @(SSDKPlatformTypeQQ),
                            @(SSDKPlatformTypeGooglePlus)]
           onImport:^(SSDKPlatformType platformType)    
           {
               switch (platformType)
               {
                  case SSDKPlatformTypeWechat:
                       [ShareSDKConnector connectWeChat:[WXApi class]];
                    break;
                  case SSDKPlatformTypeQQ:
                       [ShareSDKConnector connectQQ:[QQApiInterface class] tencentOAuthClass:[TencentOAuth class]];
                    break;
                  case SSDKPlatformTypeSinaWeibo:
                          [ShareSDKConnector connectWeibo:[WeiboSDK class]];
                    break;
                  default:
                    break;
                }
          }
          onConfiguration:^(SSDKPlatformType platformType, NSMutableDictionary *appInfo) 
          {
                switch (platformType)
                {
                  case SSDKPlatformTypeSinaWeibo:
                      //设置新浪微博应用信息,其中authType设置为使用SSO＋Web形式授权
                      [appInfo SSDKSetupSinaWeiboByAppKey:@"568898243"
                                                appSecret:@"38a4f8204cc784f81f9f0daaf31e02e3"
                                              redirectUri:@"http://www.sharesdk.cn"
                                                 authType:SSDKAuthTypeBoth];
                   break;
                   case SSDKPlatformTypeWechat:
                      [appInfo SSDKSetupWeChatByAppId:@"wx4868b35061f87885"
                                            appSecret:@"64020361b8ec4c99936c0e3999a9f249"];
                   break;
                   case SSDKPlatformTypeQQ:
                      [appInfo SSDKSetupQQByAppId:@"100371282"
                                           appKey:@"aed9b0303e3ed1e27bae87c33761161d"
                                         authType:SSDKAuthTypeBoth];
                   break;
                   case SSDKPlatformTypeGooglePlus:
                      [appInfo SSDKSetupGooglePlusByClientID:@"232554794995.apps.googleusercontent.com"
                                                clientSecret:@"PEdFgtrMw97aCvf0joQj7EMk"
                                                 redirectUri:@"http://localhost"];
                    break;
                   default:
                    break;
              }
          }];
 return YES;
}
```

### 分享
在需要分享的地方，完成如下代码：

```objc
    //1、Create Share parameters
    NSArray* imageArray = @[[UIImage imageNamed:@"shareImg.png"]];
    if (imageArray) {
 
        NSMutableDictionary *shareParams = [NSMutableDictionary dictionary];
        [shareParams SSDKSetupShareParamsByText:@"Share Content"
                                         images:imageArray
                                            url:[NSURL URLWithString:@"http://mob.com"]
                                          title:@"ShareTitle"
                                           type:SSDKContentTypeAuto];
        //2、To show the share content view
        [ShareSDK showShareActionSheet:nil //The way to share content for iPad : we recommend you to use a child view of ViewController as the "anchor" to be the container. It can be an button、custom view etc. Only in this way do the share view and authorization view display correctly. 
                                 items:nil
                           shareParams:shareParams
                   onShareStateChanged:^(SSDKResponseState state, SSDKPlatformType platformType, NSDictionary *userData, SSDKContentEntity *contentEntity, NSError *error, BOOL end) {
 
                       switch (state) {
                           case SSDKResponseStateSuccess:
                           {
                               UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"Share Success!"
                                                                                   message:nil
                                                                                  delegate:nil
                                                                         cancelButtonTitle:@"OK"
                                                                         otherButtonTitles:nil];
                               [alertView show];
                               break;
                           }
                           case SSDKResponseStateFail:
                           {
                               UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Share Fail"
                                                                                   message:[NSString stringWithFormat:@"%@",error]
                                                                                  delegate:nil
                                                                         cancelButtonTitle:@"OK"
                                                                         otherButtonTitles:nil, nil];
                                [alert show];
                                break;
                               }
                            default:
                               break;
                       }
 
                   }];
```

详细的社会化分享功能使用，请参考[官方文档](http://wiki.mob.com/ios简洁版快速集成/)。