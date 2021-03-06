/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFContact.h>

@class NSString, CNContact;

@interface WFCNContact : WFContact {

	BOOL _fromVCard;
	int _propertyID;
	NSString* _accountIdentifier;
	long long _multivalueIndex;
	CNContact* _contact;

}

@property (nonatomic,readonly) BOOL fromVCard;                                 //@synthesize fromVCard=_fromVCard - In the implementation block
@property (nonatomic,copy,readonly) CNContact * contact;                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactIdentifier; 
@property (nonatomic,copy,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(id)changeObservers;
+(void)contactStoreDidChange:(id)arg1 ;
+(id)contactWithCNContact:(id)arg1 ;
+(id)requiredKeysToFetch;
+(id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 ;
+(id)allContactsWithSortOrder:(long long)arg1 passingTest:(/*^block*/id)arg2 ;
+(id)allContactsWithSortOrder:(long long)arg1 ;
+(id)contactsWithName:(id)arg1 ;
+(id)contactsWithVCardData:(id)arg1 ;
+(id)addContactsChangeObserver:(/*^block*/id)arg1 ;
+(void)removeContactsChangeObserver:(id)arg1 ;
+(id)contactWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 ;
+(id)contactsWithName:(id)arg1 keysToFetch:(id)arg2 ;
+(void)updateContactStoreObservation;
-(id)imageData;
-(id)dates;
-(id)nameSuffix;
-(id)instantMessageAddresses;
-(id)emailAddresses;
-(id)lastName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)organization;
-(NSString *)contactIdentifier;
-(id)URLs;
-(id)firstName;
-(CNContact *)contact;
-(id)namePrefix;
-(id)birthday;
-(id)nickname;
-(id)socialProfiles;
-(NSString *)accountIdentifier;
-(id)middleName;
-(BOOL)hasImageData;
-(id)phoneNumbers;
-(BOOL)isEqual:(id)arg1 ;
-(id)thumbnailImageData;
-(unsigned long long)hash;
-(id)formattedName;
-(BOOL)hasValueForPropertyID:(int)arg1 ;
-(id)valueForPropertyID:(int)arg1 ;
-(id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2 ;
-(id)vCardRepresentationWithFullData:(BOOL)arg1 ;
-(id)streetAddresses;
-(int)propertyID;
-(long long)multivalueIndex;
-(id)initWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 fromVCard:(BOOL)arg4 ;
-(void)refetchContact;
-(BOOL)isPropertyIDRepresented:(int)arg1 ;
-(BOOL)fromVCard;
@end

