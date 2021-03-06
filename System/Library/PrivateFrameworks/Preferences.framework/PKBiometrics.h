/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKDevicePearl, BKDeviceTouchID;

@interface PKBiometrics : NSObject {

	BKDevicePearl* _pearlDevice;
	BKDeviceTouchID* _touchIDDevice;

}

@property (nonatomic,retain) BKDevicePearl * pearlDevice;                  //@synthesize pearlDevice=_pearlDevice - In the implementation block
@property (nonatomic,retain) BKDeviceTouchID * touchIDDevice;              //@synthesize touchIDDevice=_touchIDDevice - In the implementation block
+(id)sharedInstance;
-(BKDevicePearl *)pearlDevice;
-(id)deviceForType:(long long)arg1 ;
-(long long)deviceTypeForIdentityType:(long long)arg1 ;
-(BKDeviceTouchID *)touchIDDevice;
-(void)setTouchIDDevice:(BKDeviceTouchID *)arg1 ;
-(id)identitiesForIdentityType:(long long)arg1 ;
-(long long)maximumIdentityCountForIdentityType:(long long)arg1 ;
-(void)setPearlDevice:(BKDevicePearl *)arg1 ;
-(id)nextIdentityNameForIdentityType:(long long)arg1 ;
-(BOOL)removeIdentity:(id)arg1 ;
-(id)init;
-(id)nameForIdentity:(id)arg1 ;
-(BOOL)setName:(id)arg1 forIdentity:(id)arg2 ;
@end

