/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class EKEventDetailsHighlightControl, EKEventViewController;

@interface EKEventReportJunkView : UIView {

	EKEventDetailsHighlightControl* _control;
	EKEventViewController* _controller;
	BOOL _isLargeDayView;

}

@property (assign) BOOL isLargeDayView;              //@synthesize isLargeDayView=_isLargeDayView - In the implementation block
-(void)setIsLargeDayView:(BOOL)arg1 ;
-(BOOL)isLargeDayView;
-(void)tapped:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)viewDidMoveToSuperview;
@end

