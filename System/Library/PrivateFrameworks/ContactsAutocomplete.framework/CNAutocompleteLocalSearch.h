/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CNContactStore, NSString;

@interface CNAutocompleteLocalSearch : NSObject <CNAutocompleteSearch> {

	CNContactStore* _contactStore;
	CNContactStore* _contactFetcherStore;

}

@property (nonatomic,retain) CNContactStore * contactStore;                     //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactFetcherStore;              //@synthesize contactFetcherStore=_contactFetcherStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContactStore *)contactStore;
-(id)init;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CNContactStore *)contactFetcherStore;
-(void)setContactFetcherStore:(CNContactStore *)arg1 ;
-(id)initWithContactStore:(id)arg1 contactFetcherStore:(id)arg2 ;
-(id)groupsForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3 ;
-(id)peopleForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3 ;
@end

