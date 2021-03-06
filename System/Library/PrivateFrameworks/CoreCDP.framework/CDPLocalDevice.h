/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPLocalDeviceSecretProxy;
@interface CDPLocalDevice : NSObject {

	id<CDPLocalDeviceSecretProxy> _localSecretProxy;

}
+(id)sharedInstance;
+(BOOL)hasLocalSecret;
-(id)deviceName;
-(id)modelVersion;
-(id)osVersion;
-(id)serialNumber;
-(id)deviceClass;
-(id)init;
-(id)hardwareModel;
-(BOOL)hasLocalSecret;
-(BOOL)supportsSecureBackupRecovery;
-(id)marketingModel;
-(BOOL)_currentProcessCreatesDaemonTypeProxy;
-(BOOL)_isHomePod;
-(BOOL)_currentProcessHasEntitlement:(id)arg1 ;
@end

