/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoAccessoryItemTransitioning.h>

@class UIViewPropertyAnimator, NSString;

@interface SVVideoAccessoryItemFadeInTransitionCoordinator : NSObject <SVVideoAccessoryItemTransitioning> {

	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,retain) UIViewPropertyAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (nonatomic,readonly) BOOL animated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelTransition;
-(UIViewPropertyAnimator *)animator;
-(BOOL)animated;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)animateWithContext:(id)arg1 ;
@end

