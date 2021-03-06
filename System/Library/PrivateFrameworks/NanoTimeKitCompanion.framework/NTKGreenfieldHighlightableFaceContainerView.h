/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NTKFace, NTKFaceViewController, UIView, NSMutableDictionary, NSMutableSet;

@interface NTKGreenfieldHighlightableFaceContainerView : UIView {

	NTKFace* _originalFace;
	NTKFaceViewController* _faceViewController;
	UIView* _overlayView;
	UIView* _highlightedDisplaysContainerView;
	NSMutableDictionary* _highlightedSlotToDisplayWrapperViewMapping;
	NSMutableSet* _highlightedSlots;
	NSMutableDictionary* _slotToTemplateMapping;

}
+(id)_createFaceForDisplayingFrom:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFace:(id)arg1 ;
-(void)setTemplate:(id)arg1 forSlot:(id)arg2 ;
-(void)setComplicationDisplayViewState:(long long)arg1 forSlot:(id)arg2 ;
-(void)_updateTemplateForSlot:(id)arg1 ;
-(void)_toggleHighlight:(BOOL)arg1 forComplicationWrapperViewAtSlot:(id)arg2 ;
@end

