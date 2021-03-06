/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSFormMetadata, NSTimer, NSMutableSet, NSString, NSSet;

@interface WBSMultiRoundAutoFillManager : NSObject {

	unsigned long long _autoFillAttemptTrigger;
	WBSFormMetadata* _formMetadataFromPreviousAutoFillAttempt;
	BOOL _userDidInteractWithForm;
	unsigned long long _numberOfFollowUpAutoFillAttempts;
	NSTimer* _timerForFollowUpAutoFill;
	NSMutableSet* _controlUniqueIDToBeIgnoredByFollowUpAutoFill;
	NSString* _addressSetLabelUsedDuringFirstAutoFillPass;
	NSSet* _addressBookPropertiesThatCanBeFilled;

}

@property (nonatomic,copy) NSString * addressSetLabelUsedDuringFirstAutoFillPass;              //@synthesize addressSetLabelUsedDuringFirstAutoFillPass=_addressSetLabelUsedDuringFirstAutoFillPass - In the implementation block
@property (nonatomic,copy) NSSet * addressBookPropertiesThatCanBeFilled;                       //@synthesize addressBookPropertiesThatCanBeFilled=_addressBookPropertiesThatCanBeFilled - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned long long)currentAutoFillAttemptTrigger;
-(BOOL)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg1 ;
-(NSString *)addressSetLabelUsedDuringFirstAutoFillPass;
-(NSSet *)addressBookPropertiesThatCanBeFilled;
-(void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)didEditFormText;
-(void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg1 autoFillBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)setAddressBookPropertiesThatCanBeFilled:(NSSet *)arg1 ;
-(void)setAddressSetLabelUsedDuringFirstAutoFillPass:(NSString *)arg1 ;
@end

