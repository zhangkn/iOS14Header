/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSObject;

@interface NTKFirstUnlockQueue : NSObject {

	const char* _name;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isSuspended;
	BOOL _isBeforeFirstUnlock;
	os_unfair_lock_s _suspendLock;
	int _notifyToken;

}
-(id)initWithName:(const char*)arg1 ;
-(void)dealloc;
-(void)dispatch:(/*^block*/id)arg1 ;
-(void)_firstUnlock;
-(void)_suspendThreadBeforeFirstUnlock;
@end

