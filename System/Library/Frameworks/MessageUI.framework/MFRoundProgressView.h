/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimer, NSDate, UIView, CAShapeLayer;

@interface MFRoundProgressView : UIView {

	CGPoint _pieCenter;
	double _pieRadius;
	NSTimer* _progressTimer;
	NSDate* _prevUpdateTime;
	double _uiProgress;
	double _realProgress;
	double _increaseRate;
	UIView* _contentView;
	CAShapeLayer* _sliceLayer;
	CAShapeLayer* _circleLayer;
	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
-(double)toRadian:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPieRadius:(double)arg1 ;
-(void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(void)stopProgressTimer;
-(void)increaseUIProgress:(id)arg1 ;
-(void)_updateUIProgress;
-(void)_updateSubviews;
-(double)progress;
-(void)resetProgress;
-(void)startProgressTimer;
@end
