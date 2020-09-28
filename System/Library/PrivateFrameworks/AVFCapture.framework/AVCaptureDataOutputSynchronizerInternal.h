/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSArray;

@interface AVCaptureDataOutputSynchronizerInternal : NSObject {

	AVCaptureDataOutputDelegateCallbackHelper* delegateCallbackHelper;
	AVWeakReference* weakReference;
	NSArray* dataOutputs;
	OpaqueFigSimpleMutexRef dataOutputsStorageMutex;
	NSArray* dataOutputsStorage;
	int masterSynchronizedDataQueueMaxDepth;
	BOOL synchronizingVideoAndDepth;
	BOOL synchronizingVideoAndVisionData;

}
@end
