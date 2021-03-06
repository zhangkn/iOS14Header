/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKDateRangeQueryClientInterface.h>

@class NSString;

@interface _HKDateRangeQuery : HKQuery <HKDateRangeQueryClientInterface> {

	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithDateIntervalHandler:(/*^block*/id)arg1 ;
-(void)client_deliverDateIntervals:(id)arg1 forQuery:(id)arg2 ;
-(void)queue_validate;
-(id)initWithHandler:(/*^block*/id)arg1 ;
@end

