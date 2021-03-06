/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AUAudioUnitHostProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, AUAudioUnit;

@interface AUHostDelegate : NSObject <AUAudioUnitHostProtocol> {

	NSObject*<OS_dispatch_queue> mParameterQueue;
	AUAudioUnit* _audioUnit;

}

@property (assign,nonatomic,__weak) AUAudioUnit * audioUnit;              //@synthesize audioUnit=_audioUnit - In the implementation block
-(AUAudioUnit *)audioUnit;
-(id)init;
-(void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned)arg5 ;
-(void)propertiesChanged:(id)arg1 ;
-(void)speechSynthesisMetadataAvailable:(id)arg1 speechRequest:(id)arg2 ;
-(void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(id)arg3 enabled:(BOOL)arg4 ;
-(void)setAudioUnit:(AUAudioUnit *)arg1 ;
@end

