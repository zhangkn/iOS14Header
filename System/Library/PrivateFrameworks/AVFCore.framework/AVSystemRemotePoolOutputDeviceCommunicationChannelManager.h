/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceCommunicationChannelManager.h>

@protocol OS_dispatch_queue;
@class AVOutputDevice, NSString, AVOutputContext, NSObject;

@interface AVSystemRemotePoolOutputDeviceCommunicationChannelManager : NSObject <AVOutputDeviceCommunicationChannelManager> {

	AVOutputDevice* _parentOutputDevice;
	NSString* _deviceID;
	AVOutputContext* _outputContext;
	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	CFDictionaryRef _communicationChannelsForUUIDs;

}

@property (__weak) AVOutputDevice * parentOutputDevice;              //@synthesize parentOutputDevice=_parentOutputDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSystemRemotePool;
+(id)sharedSystemRemotePoolImpl;
-(void)_didCloseCommChannelWithUUID:(CFStringRef)arg1 forDeviceWithID:(CFStringRef)arg2 ;
-(id)initWithDeviceID:(id)arg1 ;
-(void)dealloc;
-(void)openCommunicationChannelWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(AVOutputDevice *)parentOutputDevice;
-(void)setParentOutputDevice:(AVOutputDevice *)arg1 ;
-(void)_didReceiveData:(CFDataRef)arg1 fromDeviceWithID:(CFStringRef)arg2 fromChannelWithUUID:(CFStringRef)arg3 ;
@end

