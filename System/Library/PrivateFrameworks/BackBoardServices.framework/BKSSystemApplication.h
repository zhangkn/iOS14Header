/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSSystemApplicationClientDelegate.h>

@protocol OS_dispatch_queue, BKSSystemApplicationDelegate;
@class NSObject, BKSSystemApplicationClient, NSString;

@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BKSSystemApplicationClient* _client;
	id<BKSSystemApplicationDelegate> _delegate;
	BOOL _waitForDataMigration;
	double _systemIdleSleepInterval;

}

@property (assign,nonatomic,__weak) id<BKSSystemApplicationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL waitForDataMigration;                                     //@synthesize waitForDataMigration=_waitForDataMigration - In the implementation block
@property (assign,nonatomic) double systemIdleSleepInterval;                                //@synthesize systemIdleSleepInterval=_systemIdleSleepInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendActions:(id)arg1 ;
-(BOOL)clientIsAliveForWatchdog:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)bootstrap;
-(void)setWaitForDataMigration:(BOOL)arg1 ;
-(double)systemIdleSleepInterval;
-(void)dealloc;
-(void)start;
-(void)setSystemIdleSleepInterval:(double)arg1 ;
-(void)setDelegate:(id<BKSSystemApplicationDelegate>)arg1 ;
-(BOOL)waitForDataMigration;
-(id<BKSSystemApplicationDelegate>)delegate;
-(void)finishBooting;
@end
