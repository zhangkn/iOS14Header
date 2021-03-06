/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class ASCodableDatabaseCompetition;

@interface ASDatabaseCompetitionJournalEntry : HDJournalEntry {

	ASCodableDatabaseCompetition* _databaseCompetition;

}

@property (nonatomic,readonly) ASCodableDatabaseCompetition * databaseCompetition;              //@synthesize databaseCompetition=_databaseCompetition - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDatabaseCompetition:(id)arg1 ;
-(ASCodableDatabaseCompetition *)databaseCompetition;
@end

