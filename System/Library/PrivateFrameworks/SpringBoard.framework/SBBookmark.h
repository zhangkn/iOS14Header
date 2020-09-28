/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBLeafIconDataSource.h>

@class UIWebClip, NSString, NSURL;

@interface SBBookmark : NSObject <SBLeafIconDataSource> {

	UIWebClip* _webClip;

}

@property (nonatomic,readonly) UIWebClip * webClip;                                         //@synthesize webClip=_webClip - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * launchURL; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSString * configurationStorageIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bookmarkWithWebClip:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)supportedGridSizeClassesForIcon:(id)arg1 ;
-(BOOL)isUninstallSupported;
-(NSURL *)launchURL;
-(unsigned long long)priorityForIcon:(id)arg1 ;
-(BOOL)isTimedOutForIcon:(id)arg1 ;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2 ;
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(void)dealloc;
-(id)icon:(id)arg1 unmaskedImageWithInfo:(SBIconImageInfo)arg2 ;
-(BOOL)iconCompleteUninstall:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(UIWebClip *)webClip;
-(BOOL)iconSupportsUninstall:(id)arg1 ;
-(id)initWithWebClip:(id)arg1 ;
-(void)_deviceUnlockedForFirstTime:(id)arg1 ;
@end
