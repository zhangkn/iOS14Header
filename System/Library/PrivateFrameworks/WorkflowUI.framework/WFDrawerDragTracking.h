/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFDrawerDragTracking <NSObject>
@property (readonly) double minTranslationY; 
@property (readonly) double maxTranslationY; 
@required
-(void)beginDragging;
-(void)endDraggingWithAnimation:(id)arg1;
-(void)endDragging;
-(void)updateDragForVerticalTranslation:(double)arg1;
-(double)minTranslationY;
-(double)maxTranslationY;

@end
