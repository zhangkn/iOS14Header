/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, NSSet, NSDictionary;

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {

	NSMutableSet* _scheduledLogLocations;
	NSMutableSet* _pendingLogLocations;
	NSMutableSet* _failedLogLocations;
	NSMutableSet* _ignoredLogLocations;
	NSMutableDictionary* _logLocationsToEncounteredErrors;
	int _lock;

}

@property (nonatomic,readonly) NSSet * pendingLogLocations;                                 //@synthesize pendingLogLocations=_pendingLogLocations - In the implementation block
@property (nonatomic,readonly) NSSet * scheduledLogLocations;                               //@synthesize scheduledLogLocations=_scheduledLogLocations - In the implementation block
@property (nonatomic,readonly) NSSet * failedLogLocations;                                  //@synthesize failedLogLocations=_failedLogLocations - In the implementation block
@property (nonatomic,readonly) NSSet * ignoredLogLocations;                                 //@synthesize ignoredLogLocations=_ignoredLogLocations - In the implementation block
@property (nonatomic,readonly) NSDictionary * logLocationsToEncounteredErrors;              //@synthesize logLocationsToEncounteredErrors=_logLocationsToEncounteredErrors - In the implementation block
-(void)dealloc;
-(NSSet *)pendingLogLocations;
-(void)transactionLogAtLocation:(id)arg1 failedToOpenWithError:(id)arg2 ;
-(void)transactionLogAtLocationWasIgnored:(id)arg1 ;
-(void)transactionLogAtLocationWasScheduled:(id)arg1 ;
-(NSDictionary *)logLocationsToEncounteredErrors;
-(NSSet *)failedLogLocations;
-(NSSet *)scheduledLogLocations;
-(void)addPendingLogLocation:(id)arg1 ;
-(id)init;
-(void)addPendingLogLocations:(id)arg1 ;
-(NSSet *)ignoredLogLocations;
-(id)initWithPendingLogLocations:(id)arg1 ;
-(void)failedTransactionLogAtLocationRecovered:(id)arg1 ;
-(void)unionWithSchedulingContext:(id)arg1 ;
-(id)description;
@end
