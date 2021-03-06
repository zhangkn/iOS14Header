/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPFinder/SPFinderStateManagement.h>

@protocol SPFinderStateXPCProtocol, OS_dispatch_queue;
@class FMXPCServiceDescription, FMXPCSession, NSObject, NSString;

@interface SPFinderStateManager : NSObject <SPFinderStateManagement> {

	/*^block*/id stateInfoChangedBlock;
	/*^block*/id _stateChangedBlock;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPFinderStateXPCProtocol> _proxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;              //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPFinderStateXPCProtocol> proxy;                        //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id stateChangedBlock;                                        //@synthesize stateChangedBlock=_stateChangedBlock - In the implementation block
@property (nonatomic,copy) id stateInfoChangedBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stateChangedBlock;
-(void)setProxy:(id<SPFinderStateXPCProtocol>)arg1 ;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(void)enableFinderModeWithCompletion:(/*^block*/id)arg1 ;
-(id<SPFinderStateXPCProtocol>)proxy;
-(FMXPCServiceDescription *)serviceDescription;
-(id)stateInfoChangedBlock;
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)setStateChangedBlock:(id)arg1 ;
-(void)setStateInfoChangedBlock:(id)arg1 ;
-(FMXPCSession *)session;
-(void)setActiveCache:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)start;
-(void)disableFinderModeWithCompletion:(/*^block*/id)arg1 ;
-(void)updateStateBlock;
-(id)init;
-(id)remoteInterface;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchFinderState:(/*^block*/id)arg1 ;
-(void)stateInfoWithCompletion:(/*^block*/id)arg1 ;
@end

