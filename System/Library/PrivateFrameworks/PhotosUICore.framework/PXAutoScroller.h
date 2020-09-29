/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXAnonymousScrollView, PXAutoScrollerDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSObject;

@interface PXAutoScroller : NSObject {

	SCD_Struct_PX38 _delegateRespondsTo;
	BOOL __repeating;
	NSObject*<PXAnonymousScrollView> _scrollView;
	id<PXAutoScrollerDelegate> _delegate;
	double __margin;
	double __maximumSpeed;
	double __lastUpdateTimestamp;
	CGPoint __autoscrollDirection;

}

@property (nonatomic,readonly) double _margin;                                                          //@synthesize _margin=__margin - In the implementation block
@property (nonatomic,readonly) double _maximumSpeed;                                                    //@synthesize _maximumSpeed=__maximumSpeed - In the implementation block
@property (assign,setter=_setAutoscrollDirection:,nonatomic) CGPoint _autoscrollDirection;              //@synthesize _autoscrollDirection=__autoscrollDirection - In the implementation block
@property (assign,setter=_setRepeating:,getter=_isRepeating,nonatomic) BOOL _repeating;                 //@synthesize _repeating=__repeating - In the implementation block
@property (assign,setter=_setLastUpdateTimestamp:,nonatomic) double _lastUpdateTimestamp;               //@synthesize _lastUpdateTimestamp=__lastUpdateTimestamp - In the implementation block
@property (nonatomic,readonly) NSObject*<PXAnonymousScrollView> scrollView;                             //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<PXAutoScrollerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
-(double)_margin;
-(void)updateWithTimestamp:(double)arg1 ;
-(void)stopRepeating;
-(double)_lastUpdateTimestamp;
-(void)_setRepeating:(BOOL)arg1 ;
-(void)_setAutoscrollDirection:(CGPoint)arg1 ;
-(double)_maximumSpeed;
-(CGPoint)_autoscrollDirection;
-(void)_setLastUpdateTimestamp:(double)arg1 ;
-(void)updateWithUserInteractionLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(BOOL)autoscrollWithOffset:(CGPoint)arg1 ;
-(id)init;
-(void)setDelegate:(id<PXAutoScrollerDelegate>)arg1 ;
-(id)initWithTargetScrollView:(id)arg1 ;
-(void)startRepeating;
-(CGRect)visibleRectForScrollView:(id)arg1 ;
-(id<PXAutoScrollerDelegate>)delegate;
-(BOOL)_isRepeating;
-(void)stop;
-(NSObject*<PXAnonymousScrollView>)scrollView;
@end
