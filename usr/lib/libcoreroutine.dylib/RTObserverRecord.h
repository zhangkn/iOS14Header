/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RTObserverRecord : NSObject {

	id _observer;
	SEL _selector;

}

@property (assign,nonatomic,__weak) id observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) SEL selector;                    //@synthesize selector=_selector - In the implementation block
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(id)initWithObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)setObserver:(id)arg1 ;
-(id)observer;
@end

