/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSObject;

@interface CBHIDService : NSObject {

	NSObject*<OS_os_log> _logHandle;
	IOHIDServiceClientRef _service;
	unsigned long long _registryID;
	IOHIDEventRef _event;
	BOOL _builtIn;

}

@property (readonly) IOHIDServiceClientRef service;              //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long registryID;              //@synthesize registryID=_registryID - In the implementation block
@property (assign) IOHIDEventRef event;                          //@synthesize event=_event - In the implementation block
@property (readonly) BOOL builtIn;                               //@synthesize builtIn=_builtIn - In the implementation block
-(id)copyPropertyForKey:(id)arg1 ;
-(void)setEvent:(IOHIDEventRef)arg1 ;
-(IOHIDEventRef)event;
-(void)dealloc;
-(unsigned long long)registryID;
-(BOOL)builtIn;
-(id)init;
-(IOHIDServiceClientRef)service;
-(BOOL)conformsToHIDService:(IOHIDServiceClientRef)arg1 ;
-(BOOL)updateEventData;
-(id)initWithHIDServiceClient:(IOHIDServiceClientRef)arg1 andIdentifier:(id)arg2 ;
-(BOOL)conformsToUsagePage:(unsigned long long)arg1 andUsage:(unsigned long long)arg2 ;
-(BOOL)setPropertyForKey:(id)arg1 withValue:(id)arg2 ;
@end
