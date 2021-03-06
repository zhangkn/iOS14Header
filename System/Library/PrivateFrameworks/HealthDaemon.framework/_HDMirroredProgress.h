/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <Foundation/NSProgress.h>

@class NSProgress;

@interface _HDMirroredProgress : NSProgress {

	NSProgress* _originalProgress;
	os_unfair_lock_s _lock;

}
+(id)_KVOKeyPaths;
-(id)initWithMirroredProgress:(id)arg1 ;
-(void)dealloc;
-(void)_unregisterForKVO;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_registerForKVO;
-(void)_update;
@end

