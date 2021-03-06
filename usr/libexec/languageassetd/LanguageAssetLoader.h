//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface LanguageAssetLoader : NSObject
{
    NSDictionary *_langugeAssetsInfoPlist;	// 8 = 0x8
    struct __CFString *_productType;	// 16 = 0x10
    _Bool _needRedownload;	// 24 = 0x18
    _Bool _isKeyboardsChanged;	// 25 = 0x19
    struct __SCNetworkReachability *_reachabilityRef;	// 32 = 0x20
    long long _compatibilityVersion;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100002a64
- (void)reachabilityChanged;	// IMP=0x00000001000064e4
- (id)oldDictionaryAssetsWithLanguageAssetInfo:(id)arg1;	// IMP=0x0000000100006260
- (void)downloadLanguageAssets;	// IMP=0x00000001000061a8
- (void)actualDownloadLanguageAssets;	// IMP=0x0000000100005694
- (id)normalizedLanguage:(id)arg1;	// IMP=0x00000001000054c0
- (_Bool)shouldExcludeProductWithLanguageAssetInfo:(id)arg1;	// IMP=0x0000000100005374
- (_Bool)checkFontAssetsSanityWithLanguageAssetInfo:(id)arg1;	// IMP=0x00000001000052d8
- (void)purgeLocalFontAssetsWithType:(id)arg1 mobileAssetVersionV2:(_Bool)arg2;	// IMP=0x0000000100005000
- (_Bool)isPowerRequestSatisfied;	// IMP=0x0000000100004fbc
- (void)setDownloadFlagToAssetFlagArray:(id)arg1 primaryLanguages:(id)arg2 assetInfo:(id)arg3;	// IMP=0x00000001000048a8
- (id)effectiveAssetFlagArrayForAssetType:(id)arg1;	// IMP=0x0000000100004188
- (id)filterIncompatibleFontAssets:(id)arg1;	// IMP=0x0000000100003dc4
- (id)localAssetsWithType:(id)arg1 assetInfo:(id)arg2;	// IMP=0x0000000100003c20
- (id)notificationStringWithPrimaryLanguage:(id)arg1 assetInfo:(id)arg2;	// IMP=0x0000000100003be0
- (_Bool)primaryLanguageIsInBlackList:(id)arg1 assetType:(id)arg2 assetInfo:(id)arg3;	// IMP=0x0000000100003b64
- (id)alreadyInstalledAssetsWithPrimaryLanguages:(id)arg1 results:(id)arg2 assetInfo:(id)arg3;	// IMP=0x0000000100003850
- (id)downloadOptions:(id)arg1;	// IMP=0x00000001000037fc
- (_Bool)fontAssetMatched:(id)arg1 primaryLanguage:(id)arg2 assetInfo:(id)arg3;	// IMP=0x0000000100003534
- (_Bool)dictionaryAssetMatched:(id)arg1 primaryLanguages:(id)arg2 assetInfo:(id)arg3;	// IMP=0x00000001000034a4
- (id)assetIdentifier:(id)arg1 assetInfo:(id)arg2;	// IMP=0x0000000100003348
- (_Bool)alreadyHandledLanguageOrID:(struct __CFString *)arg1;	// IMP=0x00000001000032dc
- (void)updatePreferenceWithLanguageOrID:(struct __CFString *)arg1;	// IMP=0x0000000100003228
- (void)updatePreferenceWithAssetIdentifier:(struct __CFString *)arg1;	// IMP=0x0000000100003174
- (void)reset;	// IMP=0x0000000100002fdc
- (void)logAssetsWithAssetType:(id)arg1;	// IMP=0x0000000100002c30
- (id)assetServerWithAssetType:(id)arg1;	// IMP=0x0000000100002c24
- (void)setIsKeyboardsChanged:(_Bool)arg1;	// IMP=0x0000000100002c1c
- (void)dealloc;	// IMP=0x0000000100002b9c
- (id)init;	// IMP=0x0000000100002ac8

@end

