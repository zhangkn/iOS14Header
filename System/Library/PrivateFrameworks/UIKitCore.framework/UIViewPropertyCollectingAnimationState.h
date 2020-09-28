/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewInProcessAnimationState.h>

@class _UICompoundObjectMap;

@interface UIViewPropertyCollectingAnimationState : UIViewInProcessAnimationState {

	_UICompoundObjectMap* _capturedProperties;

}

@property (nonatomic,retain) _UICompoundObjectMap * capturedProperties;              //@synthesize capturedProperties=_capturedProperties - In the implementation block
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(_UICompoundObjectMap *)capturedProperties;
-(id)init;
-(void)setCapturedProperties:(_UICompoundObjectMap *)arg1 ;
@end
