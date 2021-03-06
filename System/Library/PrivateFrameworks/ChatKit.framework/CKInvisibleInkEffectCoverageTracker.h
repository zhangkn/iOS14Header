/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKInvisibleInkEffectCoverageTrackerDelegate;
#import <ChatKit/ChatKit-Structs.h>
@class NSTimer;

@interface CKInvisibleInkEffectCoverageTracker : NSObject {

	double* _expiryTimes;
	unsigned long long _width;
	unsigned long long _height;
	double _cellWidth;
	double _cellHeight;
	NSTimer* _recoverTimer;
	BOOL _uncovered;
	id<CKInvisibleInkEffectCoverageTrackerDelegate> _delegate;
	double _touchLifetime;
	CGSize _size;

}

@property (assign,getter=isUncovered,nonatomic) BOOL uncovered;                                            //@synthesize uncovered=_uncovered - In the implementation block
@property (assign,nonatomic,__weak) id<CKInvisibleInkEffectCoverageTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double touchLifetime;                                                       //@synthesize touchLifetime=_touchLifetime - In the implementation block
-(void)dealloc;
-(void)setSize:(CGSize)arg1 ;
-(void)reset;
-(void)recordTouchAtPoint:(CGPoint)arg1 ;
-(void)setDelegate:(id<CKInvisibleInkEffectCoverageTrackerDelegate>)arg1 ;
-(id<CKInvisibleInkEffectCoverageTrackerDelegate>)delegate;
-(CGSize)size;
-(BOOL)isUncovered;
-(void)setUncovered:(BOOL)arg1 ;
-(void)_checkForCover:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 touchLifetime:(double)arg2 ;
-(double)touchLifetime;
@end

