/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSObservation.h>

@protocol NSObservable;
@class NSObject;

@interface _NSConcreteBlockSinkObservation : NSObservation {

	NSObject*<NSObservable> _LHSobservable;
	/*^block*/id _block;
	int _tag;

}
-(void)remove;
-(void)_receiveBox:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithObservable:(id)arg1 blockSink:(/*^block*/id)arg2 tag:(int)arg3 ;
-(id*)_observerStorage;
-(BOOL)isEqual:(id)arg1 ;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
-(void)finishObserving;
@end

