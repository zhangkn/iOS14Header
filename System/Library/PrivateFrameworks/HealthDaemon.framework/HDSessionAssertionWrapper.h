/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDAssertion;

@interface HDSessionAssertionWrapper : NSObject {

	HDAssertion* _currentAssertion;
	/*^block*/id _createAndTakeBlock;

}

@property (nonatomic,copy,readonly) id createAndTakeBlock;              //@synthesize createAndTakeBlock=_createAndTakeBlock - In the implementation block
@property (nonatomic,readonly) BOOL taken; 
-(void)_releaseAssertion;
-(BOOL)taken;
-(void)dealloc;
-(id)initWithCreateAndTakeBlock:(/*^block*/id)arg1 ;
-(void)_takeAssertion;
-(id)createAndTakeBlock;
@end
