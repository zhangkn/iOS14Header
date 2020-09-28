/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray;

@interface ARUIObserverStore : NSObject {

	NSPointerArray* _observers;

}

@property (nonatomic,readonly) unsigned long long count; 
-(void)addObserver:(id)arg1 ;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
@end
