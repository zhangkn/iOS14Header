/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/PKScribbleInteractionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, NSString;

@interface _PXUITextView : UITextView <PKScribbleInteractionDelegate, UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)becomeFirstResponder;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_linkTappedByGesture:(id)arg1 charIndexAtPoint:(unsigned long long*)arg2 ;
-(double)_distanceFromContentToGivenPoint:(CGPoint)arg1 charIndexAtPoint:(unsigned long long*)arg2 ;
-(BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2 ;
-(void)setEditable:(BOOL)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(BOOL)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2 ;
-(void)_handleTapGesture:(id)arg1 ;
@end
