/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectSubview.h>

@class _UIVisualEffectViewBackdropCaptureGroup, CABackdropLayer;

@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {

	_UIVisualEffectViewBackdropCaptureGroup* _captureGroup;

}

@property (assign,nonatomic) long long renderMode; 
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * captureGroup; 
@property (nonatomic,readonly) CABackdropLayer * backdropLayer; 
+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)applyRequestedFilterEffects;
-(void)setRenderMode:(long long)arg1 ;
-(CABackdropLayer *)backdropLayer;
-(void)removeFromCurrentCaptureGroup;
-(void)applyIdentityFilterEffects;
-(void)setCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(void)_applyScaleHintAsRequested:(BOOL)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(_UIVisualEffectViewBackdropCaptureGroup *)captureGroup;
-(long long)renderMode;
@end

