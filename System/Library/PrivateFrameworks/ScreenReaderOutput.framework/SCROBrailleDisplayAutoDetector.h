/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSMutableDictionary, NSObject;

@interface SCROBrailleDisplayAutoDetector : NSObject {

	BOOL _isDetectingDisplays;
	IONotificationPortRef _notificationPort;
	NSMutableDictionary* _iteratorDict;
	NSObject*<OS_dispatch_source> _serialSource;

}
+(void)initialize;
+(id)sharedDetector;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)_driverBundleIdentifiers;
-(void)_autodetectIOServices:(id)arg1 ;
-(void)_initializeAutodetectSerialPorts:(id)arg1 ;
-(BOOL)_serialDataMatchesDriver:(id)arg1 driverBundleIdentifiers:(id)arg2 fileDescriptor:(int)arg3 ;
-(void)serialPortsWerePublished:(unsigned)arg1 ;
-(void)_detectSerialPorts:(id)arg1 ;
-(id)_serialPortMatchingDictionary;
-(void)_registerForSerialPortNotifications;
-(void)_openSerialPortService:(id)arg1 sortedDriverBundleIdentifiers:(id)arg2 ;
-(BOOL)isAutoDetectEnabled;
-(void)detectDisplays;
-(void)stopDetectingDisplays;
@end

