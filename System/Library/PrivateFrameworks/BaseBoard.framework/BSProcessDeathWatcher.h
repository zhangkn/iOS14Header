/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject {

	BSDispatchSource* _source;
	/*^block*/id _deathHandler;

}
-(void)invalidate;
-(void)dealloc;
-(id)initWithPID:(int)arg1 queue:(id)arg2 deathHandler:(/*^block*/id)arg3 ;
@end
