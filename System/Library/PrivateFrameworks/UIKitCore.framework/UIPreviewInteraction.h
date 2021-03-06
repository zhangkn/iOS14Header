/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPreviewInteractionImpl;
@class UIView;

@interface UIPreviewInteraction : NSObject {

	id<_UIPreviewInteractionImpl> _interactionImpl;

}

@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider; 
@property (nonatomic,__weak,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<UIPreviewInteractionDelegate> delegate; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initClickBasedImplementationWithView:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)initWithView:(id)arg1 ;
@end

