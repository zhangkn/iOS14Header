/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSNumber;

@interface ADUserDeviceUtilities : NSObject {

	NSNumber* _lastiTunesAccountID;
	id<NSObject> _notifyToken;

}

@property (retain) NSNumber * lastiTunesAccountID;                    //@synthesize lastiTunesAccountID=_lastiTunesAccountID - In the implementation block
@property (nonatomic,retain) id<NSObject> notifyToken;                //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,readonly) BOOL deviceHasHomeButton; 
+(id)sharedInstance;
+(BOOL)educationModeEnabled;
+(id)iTunesAccountIdentifier;
+(id)iTunesStoreAccount;
+(BOOL)isiCloudAccountAvailable;
+(BOOL)isiCloudManagedAppleId;
+(BOOL)isiTunesAccountAvailable;
+(BOOL)isManagedAppleId;
+(BOOL)isiTunesManagedAppleId;
+(id)iCloudAccount;
-(BOOL)deviceHasHomeButton;
-(void)setNotifyToken:(id<NSObject>)arg1 ;
-(id<NSObject>)notifyToken;
-(void)unregisterForiTunesAccountChanges;
-(NSNumber *)lastiTunesAccountID;
-(void)setLastiTunesAccountID:(NSNumber *)arg1 ;
@end

