/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:44 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSUKeyValueObserver : NSObject {

	id _target;
	NSString* _keyPath;
	/*^block*/id _changeHandler;

}
+(id)observerWithTarget:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 changeHandler:(/*^block*/id)arg4 ;
+(id)observerWithTarget:(id)arg1 keyPath:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithTarget:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 changeHandler:(/*^block*/id)arg4 ;
@end
