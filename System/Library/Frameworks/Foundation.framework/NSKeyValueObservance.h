/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSKeyValueProperty;

@interface NSKeyValueObservance : NSObject {

	NSObject* _observer;
	NSKeyValueProperty* _property;
	void* _context;
	NSObject* _originalObservable;
	unsigned _options : 6;
	unsigned _cachedIsShareable : 1;
	unsigned _isInternalObservationHelper : 1;

}
-(BOOL)isEqual:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 originalObservable:(id)arg5 ;
-(unsigned long long)hash;
-(id)description;
@end

