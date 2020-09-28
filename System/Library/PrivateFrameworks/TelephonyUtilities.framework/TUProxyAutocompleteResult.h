/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUSearchResult.h>

@class CNAutocompleteResult, NSString, CNContact, NSArray;

@interface TUProxyAutocompleteResult : NSObject <TUSearchResult> {

	CNAutocompleteResult* _autocompleteResult;

}

@property (nonatomic,retain) CNAutocompleteResult * autocompleteResult;              //@synthesize autocompleteResult=_autocompleteResult - In the implementation block
@property (readonly) NSString * displayName; 
@property (readonly) NSString * callerId; 
@property (readonly) CNContact * backingContact; 
@property (readonly) NSString * backingContactId; 
@property (readonly) NSString * backingContactIdentifier; 
@property (readonly) NSString * destinationId; 
@property (readonly) NSString * isoCountryCode; 
@property (readonly) NSArray * handles; 
@property (readonly) long long mostRecentCallType; 
@property (readonly) BOOL mostRecentCallWasMissed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * idsCanonicalDestinations; 
-(NSString *)displayName;
-(CNContact *)backingContact;
-(NSString *)callerId;
-(long long)mostRecentCallType;
-(NSString *)destinationId;
-(NSString *)backingContactId;
-(NSString *)backingContactIdentifier;
-(BOOL)mostRecentCallWasMissed;
-(NSArray *)idsCanonicalDestinations;
-(id)initWithAutocompleteResult:(id)arg1 ;
-(CNAutocompleteResult *)autocompleteResult;
-(NSString *)isoCountryCode;
-(id)init;
-(NSArray *)handles;
-(void)setAutocompleteResult:(CNAutocompleteResult *)arg1 ;
@end
