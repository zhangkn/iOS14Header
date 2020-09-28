/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSTopHitSearchQuery, NSArray;

@interface EMSearchableIndexTopHitsQueryResult : NSObject {

	CSTopHitSearchQuery* _topHitSearchQuery;
	NSArray* _foundItems;
	NSArray* _searchableItemIdentifiers;

}

@property (nonatomic,retain) CSTopHitSearchQuery * topHitSearchQuery;              //@synthesize topHitSearchQuery=_topHitSearchQuery - In the implementation block
@property (nonatomic,copy) NSArray * foundItems;                                   //@synthesize foundItems=_foundItems - In the implementation block
@property (nonatomic,retain) NSArray * searchableItemIdentifiers;                  //@synthesize searchableItemIdentifiers=_searchableItemIdentifiers - In the implementation block
-(void)setSearchableItemIdentifiers:(NSArray *)arg1 ;
-(NSArray *)searchableItemIdentifiers;
-(NSArray *)foundItems;
-(long long)rankingIndexForMessageLibraryID:(id)arg1 ;
-(CSTopHitSearchQuery *)topHitSearchQuery;
-(long long)rankingIndexForConversationID:(id)arg1 ;
-(id)initWithTopHitSearchQuery:(id)arg1 foundItems:(id)arg2 ;
-(void)userDidInteractWithLibraryIdentifier:(id)arg1 ;
-(void)userDidInteractWithConversationID:(id)arg1 ;
-(void)setTopHitSearchQuery:(CSTopHitSearchQuery *)arg1 ;
-(void)setFoundItems:(NSArray *)arg1 ;
@end
