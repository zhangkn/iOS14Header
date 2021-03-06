/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVOutputContextImpl, AVOutputContextCommunicationChannelDelegate;
@class NSObject;

@interface AVOutputContextInternal : NSObject {

	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	id<AVOutputContextImpl> impl;
	unsigned long long outputDeviceFeatures;
	int applicationPID;
	BOOL applicationPIDWasSet;
	id<AVOutputContextCommunicationChannelDelegate> communicationChannelDelegate;

}
@end

