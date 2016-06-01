Pod::Spec.new do |s|
  s.name     = 'ShareSDK'
  s.version  = '3.3.1'
  s.summary  = 'ShareSDK is a SNS share kit.'
  s.homepage = 'https://github.com/jcccn/ShareSDK-iOS'
  s.author   = { 'Chuncheng Jiang' => 'jccuestc@gmail.com' }
  s.license  = { :type => 'Copyright', :text => <<-LICENSE
                   Copyright © 2012-1015 mob All Rights Reserved 掌淘网络 版权所有
                 LICENSE
               }
  s.source   = { :git => 'https://github.com/jcccn/ShareSDK-iOS.git', :tag => '3.3.1' }
  s.platform     = :ios, '6.0'
  s.requires_arc = true
  s.frameworks       = 'UIKit', 'JavaScriptCore'
  s.libraries        = 'icucore', 'z.1.2.5', 'stdc++'

  s.default_subspecs    = 'Normal'
  s.vendored_frameworks = 'ShareSDK/ShareSDK.framework'

    s.subspec 'Normal' do |sp|
        sp.dependency 'ShareSDK/ShareSDKPlatforms/SinaWeibo'
        sp.dependency 'ShareSDK/ShareSDKPlatforms/QQ'
        sp.dependency 'ShareSDK/ShareSDKPlatforms/WeChat'
    end

    # 核心模块
    s.subspec 'Core' do |sp|
        sp.dependency 'MOBFoundation'
        sp.vendored_frameworks = 'ShareSDK/Support/Required/ShareSDKConnector.framework', 'ShareSDK/Support/Optional/ShareSDKExtension.framework'
        sp.libraries = 'icucore', 'z', 'stdc++'
        sp.resources = 'ShareSDK/Support/Required/ShareSDK.bundle'
    end

    # ShareSDK提供的UI
    s.subspec 'ShareSDKUI' do |sp|
        sp.dependency 'ShareSDK/Core'
        sp.vendored_frameworks = 'ShareSDK/Support/Optional/ShareSDKUI.framework'
        sp.resources = 'ShareSDK/Support/Optional/ShareSDKUI.bundle'
    end

    # 各个平台的SDK
    s.subspec 'ShareSDKPlatforms' do |sp|
        #sp.default_subspecs = 'QQ', 'SinaWeibo', 'WeChat', 'RenRen', 'Yixin', 'Messenger' - Errors: Can't set `default_subspecs` attribute for subspecs

        # QQ
        sp.subspec 'QQ' do |ssp|
            ssp.dependency 'ShareSDK/Core'
            ssp.vendored_frameworks = 'ShareSDK/Support/PlatformSDK/QQSDK/TencentOpenAPI.framework'
            ssp.resource = 'ShareSDK/Support/PlatformSDK/QQSDK/TencentOpenApi_IOS_Bundle.bundle'
            ssp.libraries = 'sqlite3'
        end

        # SinaWeibo
        sp.subspec 'SinaWeibo' do |ssp|
            ssp.dependency 'ShareSDK/Core'
            ssp.vendored_libraries = "ShareSDK/Support/PlatformSDK/SinaWeiboSDK/*.a"
            ssp.resource = 'ShareSDK/Support/PlatformSDK/SinaWeiboSDK/WeiboSDK.bundle'
            ssp.frameworks = 'ImageIO'
            ssp.libraries = 'sqlite3'
            ssp.source_files = "ShareSDK/Support/PlatformSDK/SinaWeiboSDK/*.{h,m}"
            ssp.public_header_files = "ShareSDK/Support/PlatformSDK/SinaWeiboSDK/*.h"
        end

        # WeChat
        sp.subspec 'WeChat' do |ssp|
            ssp.dependency 'ShareSDK/Core'
            ssp.vendored_libraries = "ShareSDK/Support/PlatformSDK/WeChatSDK/*.a"
            ssp.source_files = "ShareSDK/Support/PlatformSDK/WeChatSDK/*.{h,m}"
            ssp.public_header_files = "ShareSDK/Support/PlatformSDK/WeChatSDK/*.h"
            ssp.libraries = 'sqlite3'
        end

        # RenRen
        sp.subspec 'RenRen' do |ssp|
            ssp.dependency 'ShareSDK/Core'
            ssp.vendored_frameworks = 'ShareSDK/Support/PlatformSDK/RenRenSDK/RennSDK.framework'
            ssp.resource = 'ShareSDK/Support/PlatformSDK/RenRenSDK/RennSDK.bundle'
        end

        # 支付宝（AliPaySocial）
        sp.subspec 'AliPaySocial' do |ssp|
            ssp.dependency 'ShareSDK/Core'
            ssp.vendored_libraries = 'ShareSDK/Support/PlatformSDK/APSocialSDK/*.a'
            ssp.source_files = "ShareSDK/Support/PlatformSDK/APSocialSDK/*.{h,m}"
            ssp.public_header_files = "ShareSDK/Support/PlatformSDK/APSocialSDK/*.h"
        end

        # Kakao
        sp.subspec 'Kakao' do |ssp|
            ssp.dependency 'ShareSDK/Core'
            ssp.vendored_frameworks = 'ShareSDK/Support/PlatformSDK/KaKaoSDK/KakaoOpenSDK.framework'
        end

        # Yixin
        sp.subspec 'Yixin' do |ssp|
            ssp.dependency 'ShareSDK/Core'
            ssp.vendored_libraries = "ShareSDK/Support/PlatformSDK/YiXinSDK/*.a"
            ssp.source_files = "ShareSDK/Support/PlatformSDK/YiXinSDK/*.{h,m}"
            ssp.public_header_files = "ShareSDK/Support/PlatformSDK/YiXinSDK/*.h"
        end

        # Messenger
        sp.subspec 'Messenger' do |ssp|
            ssp.dependency 'ShareSDK/Core'
            ssp.vendored_frameworks = 'ShareSDK/Support/PlatformSDK/FacebookMessengerSDK/FBSDKMessengerShareKit.framework'
        end

    end
end
