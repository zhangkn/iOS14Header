/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface TSCHCallbackAnimationDelegate : NSObject <CAAnimationDelegate> {

	id target;
	SEL selector;

}

@property (nonatomic,retain) id target; 
@property (assign,nonatomic) SEL selector; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)target;
-(void)setTarget:(id)arg1 ;
@end

