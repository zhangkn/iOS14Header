/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalAccountEntityUpdateJournalEntry.h>

@class NSNumber;

@interface HDClinicalAccountUpdateLastSubmittedJournalEntry : HDClinicalAccountEntityUpdateJournalEntry {

	NSNumber* _lastSubmittedRowID;
	NSNumber* _expectedRulesVersion;

}

@property (nonatomic,copy,readonly) NSNumber * lastSubmittedRowID;                //@synthesize lastSubmittedRowID=_lastSubmittedRowID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * expectedRulesVersion;              //@synthesize expectedRulesVersion=_expectedRulesVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)lastSubmittedRowID;
-(id)initWithLastSubmittedRowID:(id)arg1 expectedRulesVersion:(id)arg2 accountIdentifier:(id)arg3 ;
-(NSNumber *)expectedRulesVersion;
@end

