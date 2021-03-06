/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBSInvalidatable;
@class NSMutableSet, NSSet;

@interface RBSStateCaptureSetSegment : NSObject {

	id<RBSInvalidatable> _invalidatable;
	NSMutableSet* _items;

}

@property (nonatomic,readonly) NSSet * items; 
-(NSSet *)items;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 withLength:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)_stateCapture;
-(id)init;
-(unsigned long long)count;
-(BOOL)containsItem:(id)arg1 ;
@end

