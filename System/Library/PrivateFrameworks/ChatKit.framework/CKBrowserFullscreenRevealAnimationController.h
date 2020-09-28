/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIViewPropertyAnimator, NSString;

@interface CKBrowserFullscreenRevealAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;
	UIViewPropertyAnimator* _ascentDescentAnimator;

}

@property (nonatomic,retain) UIViewPropertyAnimator * ascentDescentAnimator;              //@synthesize ascentDescentAnimator=_ascentDescentAnimator - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                         //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPresenting:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)ascentDescentAnimator;
-(id)initWithDirection:(BOOL)arg1 ;
-(void)setAscentDescentAnimator:(UIViewPropertyAnimator *)arg1 ;
-(BOOL)isPresenting;
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
@end
