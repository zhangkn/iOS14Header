/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:46 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ASDBetaAppLaunchInfo;

@interface TFBetaLaunchHandleConfiguration : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	ASDBetaAppLaunchInfo* _launchInfo;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) ASDBetaAppLaunchInfo * launchInfo;              //@synthesize launchInfo=_launchInfo - In the implementation block
+(id)configurationFromUserInfo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(ASDBetaAppLaunchInfo *)launchInfo;
-(id)initWithBundleIdentifier:(id)arg1 preloadingLaunchInfo:(id)arg2 ;
-(id)encodedAsUserInfo;
@end

