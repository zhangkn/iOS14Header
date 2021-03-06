/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class MTVisualStylingProvider;

@interface SBUIActionKeylineView : UIView {

	MTVisualStylingProvider* _visualStylingProvider;
	double _height;

}

@property (assign,nonatomic) double height;              //@synthesize height=_height - In the implementation block
-(void)setHeight:(double)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(double)height;
-(void)layoutSubviews;
-(id)init;
-(void)_updateCornerMask;
-(void)_updateVisualStylingIfNecessary;
-(void)_invalidateVisualStyling;
-(double)heightInPixels;
@end

