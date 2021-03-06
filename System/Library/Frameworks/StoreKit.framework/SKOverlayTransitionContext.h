/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKit/StoreKit-Structs.h>
@class ASOOverlayTransitionContext;

@interface SKOverlayTransitionContext : NSObject {

	ASOOverlayTransitionContext* _backing;

}

@property (nonatomic,retain) ASOOverlayTransitionContext * backing;              //@synthesize backing=_backing - In the implementation block
@property (nonatomic,readonly) CGRect startFrame; 
@property (nonatomic,readonly) CGRect endFrame; 
-(CGRect)endFrame;
-(ASOOverlayTransitionContext *)backing;
-(CGRect)startFrame;
-(void)addAnimationBlock:(/*^block*/id)arg1 ;
-(id)initWithASOOverlayTransitionContext:(id)arg1 ;
-(void)setBacking:(ASOOverlayTransitionContext *)arg1 ;
@end

