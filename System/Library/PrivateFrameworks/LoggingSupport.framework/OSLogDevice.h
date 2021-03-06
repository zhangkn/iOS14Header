/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SimDevice, NSString;

@interface OSLogDevice : NSObject {

	long long _devType;
	void* _mobDev;
	SimDevice* _simDev;
	NSString* _uid;

}

@property (assign,nonatomic) long long devType;               //@synthesize devType=_devType - In the implementation block
@property (assign,nonatomic) void* mobDev;                    //@synthesize mobDev=_mobDev - In the implementation block
@property (nonatomic,retain) SimDevice * simDev;              //@synthesize simDev=_simDev - In the implementation block
@property (nonatomic,retain) NSString * uid;                  //@synthesize uid=_uid - In the implementation block
-(void*)mobDev;
-(SimDevice *)simDev;
-(id)initWithMobileDevice:(void*)arg1 andID:(id)arg2 ;
-(id)initWithSimualatedDevice:(id)arg1 ;
-(void)setDevType:(long long)arg1 ;
-(void)setMobDev:(void*)arg1 ;
-(void)setSimDev:(SimDevice *)arg1 ;
-(long long)devType;
-(id)init;
-(void)setUid:(NSString *)arg1 ;
-(id)description;
-(NSString *)uid;
@end

