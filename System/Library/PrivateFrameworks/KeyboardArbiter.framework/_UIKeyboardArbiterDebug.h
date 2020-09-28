/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _UIKeyboardArbiterDebug : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _importantCount;
	NSMutableArray* _entries;
	BOOL _disable;
	BOOL _pause;

}

@property (assign,nonatomic) BOOL pause;              //@synthesize pause=_pause - In the implementation block
+(id)sharedInstance;
-(BOOL)pause;
-(void)getDebugInfoDictionariesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addEntry:(id)arg1 ;
-(void)debugWithFormat:(const char*)arg1 ;
-(void)errorWithFormat:(const char*)arg1 ;
-(void)addAsynchronousData:(/*^block*/id)arg1 ;
-(id)init;
-(void)infoWithFormat:(const char*)arg1 ;
-(void)setPause:(BOOL)arg1 ;
@end
