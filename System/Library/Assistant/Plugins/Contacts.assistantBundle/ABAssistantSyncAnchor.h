/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABAssistantSyncAnchor : NSObject {

	int _contactLegacyIdentifier;
	long long _sequenceNumber;

}

@property (nonatomic,readonly) long long sequenceNumber;                                              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) int contactLegacyIdentifier;                                           //@synthesize contactLegacyIdentifier=_contactLegacyIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL shouldResetSync; 
@property (nonatomic,readonly) BOOL shouldFullSync; 
@property (nonatomic,readonly) BOOL shouldResumePreviousFullSync; 
@property (nonatomic,readonly) BOOL shouldClearChangeHistoryForPreviouslySyncedContacts; 
+(id)anchorWithString:(id)arg1 forContactStore:(id)arg2 ;
+(id)stringValueWithSequenceNumber:(long long)arg1 contactLegacyIdentifier:(int)arg2 ;
+(id)stringValueForFullSyncWithContactLegacyIdentifier:(int)arg1 ;
-(long long)sequenceNumber;
-(id)shortDescription;
-(NSString *)stringValue;
-(id)init;
-(id)description;
-(id)initWithSequenceNumber:(long long)arg1 contactLegacyIdentifier:(int)arg2 ;
-(BOOL)shouldFullSync;
-(BOOL)isOlderThanAnchor:(id)arg1 ;
-(void)resetSync;
-(BOOL)shouldResetSync;
-(BOOL)shouldClearChangeHistoryForPreviouslySyncedContacts;
-(BOOL)shouldResumePreviousFullSync;
-(int)contactLegacyIdentifier;
@end
