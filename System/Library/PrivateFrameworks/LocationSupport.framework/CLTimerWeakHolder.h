/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLTimer;

@interface CLTimerWeakHolder : NSObject {

	CLTimer* _timer;

}

@property (nonatomic,__weak,readonly) CLTimer * timer;              //@synthesize timer=_timer - In the implementation block
+(id)holderWithTimer:(id)arg1 ;
-(CLTimer *)timer;
-(id)initWithTimer:(id)arg1 ;
@end
