/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SearchUI/SearchUI-Structs.h>
@interface SearchUIUtilities : NSObject
+(id)localizedStringForKey:(id)arg1 ;
+(BOOL)isLargeIpad;
+(double)onePixelForCurrentScreenResolution;
+(id)uiColorForSFColor:(id)arg1 ;
+(void)presentViewController:(id)arg1 environment:(id)arg2 prefersModalPresentation:(BOOL)arg3 ;
+(BOOL)deviceIsAuthenticated;
+(void)openApplicationWithBundleIdentifier:(id)arg1 ;
+(id)addAspectRatioConstraintForSize:(CGSize)arg1 toView:(id)arg2 ;
+(id)bundleIdentifierForApp:(unsigned long long)arg1 ;
+(void)openPunchout:(id)arg1 fromCardSection:(id)arg2 toListener:(id)arg3 triggerEvent:(unsigned long long)arg4 queryId:(unsigned long long)arg5 ;
+(id)hyphenatableStringForString:(id)arg1 ;
+(id)defaultBrowserBundleIdentifier;
+(void)openURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(BOOL)appIsValidForBundleIdentifier:(id)arg1 ;
+(BOOL)resultIsSiriAction:(id)arg1 ;
+(id)pointerKeyMapTable;
+(void)performAnimatableChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)openPunchout:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)openUserActivity:(id)arg1 applicationBundleIdentifier:(id)arg2 ;
+(id)stringForSFRichTextArray:(id)arg1 ;
+(double)standardTableCellContentInset;
+(id)fileProviderItemIDForFileResult:(id)arg1 ;
+(void)openPunchout:(id)arg1 ;
+(void)requestDeviceUnlockWithSuccessHandler:(/*^block*/id)arg1 ;
+(void)openApplicationWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)stringForSFRichText:(id)arg1 ;
+(BOOL)isMinimizedHardwareKeyboardMode;
+(BOOL)isPortraitForWindow:(id)arg1 ;
+(void)fetchURLForFileResult:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)sendFeedbackForPunchout:(id)arg1 toListener:(id)arg2 fromCardSection:(id)arg3 triggerEvent:(unsigned long long)arg4 queryId:(unsigned long long)arg5 ;
+(BOOL)deviceSupportsRotation;
+(void)openPunchout:(id)arg1 fromCardSection:(id)arg2 toListener:(id)arg3 triggerEvent:(unsigned long long)arg4 queryId:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
+(BOOL)resultBlockedForScreenTime:(id)arg1 ;
+(void)openUserActivity:(id)arg1 applicationBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)backgroundColorPrefersWhiteForegroundText:(id)arg1 ;
+(BOOL)bundleIdentifierIsBlockedForScreenTimeExpiration:(id)arg1 ;
+(void)requestDeviceUnlock:(/*^block*/id)arg1 ;
+(void)playNegativeHaptic;
+(id)environmentForDelegate:(id)arg1 ;
+(id)openOptions;
+(id)imageForBlockedApp;
+(BOOL)isWideScreen;
+(void)dispatchMainIfNecessary:(/*^block*/id)arg1 ;
+(BOOL)shouldHandleCardSectionEngagement:(id)arg1 feedbackListener:(id)arg2 ;
+(void)dispatchAsyncIfNecessary:(/*^block*/id)arg1 ;
+(void)performOpenTask:(/*^block*/id)arg1 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 ;
@end

