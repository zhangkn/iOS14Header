/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKDeviceQueryClientInterface.h>

@class NSMutableArray, NSString;

@interface HKDeviceQuery : HKQuery <HKDeviceQueryClientInterface> {

	NSMutableArray* _resultDevices;
	/*^block*/id _resultsHandler;

}

@property (nonatomic,copy,readonly) id resultsHandler;              //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(void)clientRemote_deliverDevices:(id)arg1 done:(BOOL)arg2 reset:(BOOL)arg3 query:(id)arg4 ;
-(id)initWithObjectType:(id)arg1 predicate:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(id)resultsHandler;
@end
