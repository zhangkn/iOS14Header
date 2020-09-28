/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFCancelable.h>

@protocol EFObserver, EFCancelable;
@class EFObservable, NSString;

@interface EFDebouncer : NSObject <EFCancelable> {

	EFObservable*<EFObserver> _observable;
	id<EFCancelable> _cancelable;

}

@property (nonatomic,readonly) EFObservable*<EFObserver> observable;              //@synthesize observable=_observable - In the implementation block
@property (nonatomic,readonly) id<EFCancelable> cancelable;                       //@synthesize cancelable=_cancelable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)debounceResult:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2 startAfter:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(EFObservable*<EFObserver>)observable;
-(id<EFCancelable>)cancelable;
@end
