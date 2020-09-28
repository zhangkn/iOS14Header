/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact;

@interface _CNAUICRRecentContactCNContext : NSObject {

	CNContact* _existingContact;
	CNContact* _interimContact;

}

@property (nonatomic,retain) CNContact * existingContact;              //@synthesize existingContact=_existingContact - In the implementation block
@property (nonatomic,retain) CNContact * interimContact;               //@synthesize interimContact=_interimContact - In the implementation block
-(CNContact *)existingContact;
-(void)setExistingContact:(CNContact *)arg1 ;
-(CNContact *)interimContact;
-(void)setInterimContact:(CNContact *)arg1 ;
@end
