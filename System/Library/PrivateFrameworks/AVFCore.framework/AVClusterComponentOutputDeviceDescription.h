/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVOutputDeviceDescription.h>

@class NSString;

@interface AVClusterComponentOutputDeviceDescription : NSObject <AVOutputDeviceDescription> {

	NSString* _deviceID;
	NSString* _deviceName;
	long long _deviceType;
	long long _deviceSubType;
	BOOL _isClusterLeader;

}

@property (nonatomic,readonly) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) long long deviceType;                 //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) long long deviceSubType;              //@synthesize deviceSubType=_deviceSubType - In the implementation block
@property (nonatomic,readonly) BOOL isClusterLeader;                 //@synthesize isClusterLeader=_isClusterLeader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)deviceName;
-(long long)deviceSubType;
-(BOOL)isClusterLeader;
-(long long)deviceType;
-(id)initWithDeviceID:(id)arg1 deviceName:(id)arg2 deviceSubType:(long long)arg3 isClusterLeader:(BOOL)arg4 ;
-(void)dealloc;
-(NSString *)deviceID;
@end
