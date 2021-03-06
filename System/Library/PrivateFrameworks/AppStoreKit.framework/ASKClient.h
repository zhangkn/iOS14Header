/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:21 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <AppStoreKit/AppStoreKit-Structs.h>
#import <libobjc.A.dylib/ASKClientExports.h>

@class NSString, ACAccount;

@interface ASKClient : NSObject <ASKClientExports> {

	ACAccount* _activeiTunesAccount;

}

@property (retain) ACAccount * activeiTunesAccount;                                    //@synthesize activeiTunesAccount=_activeiTunesAccount - In the implementation block
@property (readonly) CGSize screenSize; 
@property (readonly) double screenCornerRadius; 
@property (copy,readonly) NSString * guid; 
@property (copy,readonly) NSString * thinnedApplicationVariantIdentifier; 
@property (readonly) BOOL newPaymentMethodEnabled; 
@property (copy,readonly) NSString * storefrontIdentifier; 
@property (readonly) NSString * deviceType; 
@property (readonly) NSString * buildType; 
@property (readonly) BOOL isActivityAvailable; 
@property (readonly) BOOL isElectrocardiogramInstallationAllowed; 
@property (readonly) BOOL isSidepackingEnabled; 
@property (readonly) BOOL isTinkerWatch; 
@property (readonly) BOOL supportsHEIF; 
@property (copy,readonly) NSString * activePairedWatchSystemVersion; 
-(ACAccount *)activeiTunesAccount;
-(NSString *)storefrontIdentifier;
-(void)accountStoreDidChange:(id)arg1 ;
-(NSString *)deviceType;
-(void)setActiveiTunesAccount:(ACAccount *)arg1 ;
-(void)dealloc;
-(BOOL)isElectrocardiogramInstallationAllowed;
-(BOOL)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)arg1 ;
-(BOOL)isSidepackingEnabled;
-(BOOL)isActivityAvailable;
-(NSString *)thinnedApplicationVariantIdentifier;
-(NSString *)guid;
-(id)isPairedSystemVersionAtLeast:(id)arg1 ;
-(id)init;
-(BOOL)isTinkerWatch;
-(double)screenCornerRadius;
-(BOOL)deviceHasCapabilities:(id)arg1 ;
-(BOOL)newPaymentMethodEnabled;
-(NSString *)activePairedWatchSystemVersion;
-(CGSize)screenSize;
-(BOOL)supportsHEIF;
-(NSString *)buildType;
-(BOOL)isAutomaticDownloadingEnabled;
-(BOOL)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3 ;
@end

