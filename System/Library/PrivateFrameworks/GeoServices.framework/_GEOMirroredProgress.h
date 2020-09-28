/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {

	NSProgress* _originalProgress;

}
-(id)initWithMirroredProgress:(id)arg1 ;
-(void)dealloc;
-(void)_unregisterForKVO;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_replaceObservedProgressWith:(id)arg1 ;
-(void)_registerForKVO;
-(void)_update;
-(id)_initWithMirroredProgressForSubclasses:(id)arg1 ;
@end
