/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@interface CAExternalAnimation : CAPropertyAnimation {

	/*^block*/id _presentationBlock;

}

@property (readonly) unsigned long long animId; 
@property (copy) id presentationBlock;                       //@synthesize presentationBlock=_presentationBlock - In the implementation block
+(id)animationWithKeyPath:(id)arg1 ;
-(unsigned long long)animId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(void)dealloc;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setAnimId:(unsigned long long)arg1 ;
-(void)setPresentationBlock:(id)arg1 ;
-(id)presentationBlock;
@end
