#
# Be sure to run `pod lib lint ApexAdxSdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ApexAdxSdk'
  s.version          = '2.2.8'
  s.summary          = 'ApexAdx iOS 聚合广告 SDK，一次接入全网优质广告源，支持开屏/激励/插屏/信息流/Banner 等主流广告形态。'

  s.description      = <<-DESC
                       ApexAdxSdk 是一款 iOS 端广告聚合 SDK，通过智能 waterfall 调度
                       接入穿山甲、优量汇、快手、百度等多家广告网络，提供开屏、激励视频、
                       插屏、信息流、Banner 等全场景广告形态，助力开发者流量变现收益最大化。
                       DESC

  s.homepage         = 'https://github.com/hzysjx/ApexAdxSdk'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'jinwanhuijiama@foxmail.com' => 'jinwanhuijiama@foxmail.com' }
  s.source           = { :git => 'https://github.com/hzysjx/ApexAdxSdk.git', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'
  s.swift_versions = ['5.0']

  s.source_files = 'ApexAdxSdk/Classes/**/*'
  s.public_header_files = ['ApexAdxSdk/Classes/**/ApexAdxSdk_iOS.h', 'ApexAdxSdk/Classes/**/ApexAdxAdRequest.h', 'ApexAdxSdk/Classes/**/ApexAdxSplashAd.h', 'ApexAdxSdk/Classes/**/ApexAdxInterstitialAd.h', 'ApexAdxSdk/Classes/**/ApexAdxRewardedAd.h', 'ApexAdxSdk/Classes/**/ApexAdxSdk.h', 'ApexAdxSdk/Classes/**/ApexAdxBannerView.h', 'ApexAdxSdk/Classes/**/ApexAdxNativeAdView.h', 'ApexAdxSdk/Classes/**/ApexAdxNativeAd.h', 'ApexAdxSdk/Classes/**/ApexAdxNativeAdManager.h']
  s.vendored_frameworks = 'ApexAdxSdk/Libraries/ApexAdxSdk.xcframework'
  s.preserve_paths = 'ApexAdxSdk/Libraries/ApexAdxSdk.xcframework/**/*'

  s.frameworks = "Foundation","UIKit","MobileCoreServices","CoreGraphics","Security","SystemConfiguration","CoreTelephony","AdSupport","CoreData","StoreKit","AVFoundation","MediaPlayer","CoreMedia","WebKit","Accelerate","CoreLocation","AVKit","MessageUI","QuickLook","AudioToolBox","JavaScriptCore","CoreMotion","Photos"
  s.libraries = "z","resolv.9","sqlite3","c++","c++abi"
  s.dependency 'ToBid-iOS-RC/GDTAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/BaiduAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/KSAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/CSJAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/GromoreAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/AdScopeAdapter','5.5.6'
  s.static_framework = true
end
