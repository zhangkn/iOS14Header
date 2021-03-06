/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:18 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ShazamKitUI.framework/ShazamKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class NSArray, CAMediaTimingFunction;

@interface SHTaggingViewInnerCirclesLayer : CALayer {

	NSArray* _innerCircleLayers;

}

@property (nonatomic,retain) NSArray * innerCircleLayers;                                    //@synthesize innerCircleLayers=_innerCircleLayers - In the implementation block
@property (nonatomic,readonly) CAMediaTimingFunction * inOutSineTimingFunction; 
@property (nonatomic,readonly) CAMediaTimingFunction * linearTimingFunction; 
-(void)layoutSublayers;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(CAMediaTimingFunction *)linearTimingFunction;
-(void)setupSublayers;
-(id)buildInnerCircleLayers;
-(void)setInnerCircleLayers:(NSArray *)arg1 ;
-(NSArray *)innerCircleLayers;
-(void)addCoreAnimationToInnerCircleLayer:(id)arg1 withStartOffset:(double)arg2 ;
-(void)addScaleNullAnimationToInnerCircleLayer:(id)arg1 ;
-(id)innerCircleCoreAnimation;
-(id)innerCircleScaleNullAnimation;
-(CAMediaTimingFunction *)inOutSineTimingFunction;
-(void)startTaggingAnimation;
@end

