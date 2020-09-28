/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSError, NSString, NSArray, ICSearchQuery, ICTopHitSearchQuery, NSMutableDictionary;

@interface ICSearchQueryOperation : NSOperation {

	BOOL _modernResultsOnly;
	BOOL _performTopHitSearch;
	BOOL _performNLSearch;
	BOOL _allowEmptySearchString;
	/*^block*/id _foundItemsHandler;
	NSMutableArray* _results;
	NSError* _error;
	long long _requestIndex;
	NSString* _searchString;
	NSArray* _searchSuggestions;
	ICSearchQuery* _defaultQuery;
	ICSearchQuery* _fuzzyQuery;
	ICSearchQuery* _substringQuery;
	ICSearchQuery* _nlQuery;
	ICSearchQuery* _spellingQuery;
	ICTopHitSearchQuery* _topHitQuery;
	NSMutableArray* _relatedWordQueries;
	NSMutableDictionary* _resultsDictionary;
	NSMutableDictionary* _uniqueIdentifiersOfAttachmentsFoundInNotes;
	NSString* _suggestionsQueryString;
	NSString* _keyboardLanguage;
	unsigned long long _rankingStrategy;

}

@property (nonatomic,retain) ICSearchQuery * defaultQuery;                                                  //@synthesize defaultQuery=_defaultQuery - In the implementation block
@property (nonatomic,retain) ICSearchQuery * fuzzyQuery;                                                    //@synthesize fuzzyQuery=_fuzzyQuery - In the implementation block
@property (nonatomic,retain) ICSearchQuery * substringQuery;                                                //@synthesize substringQuery=_substringQuery - In the implementation block
@property (nonatomic,retain) ICSearchQuery * nlQuery;                                                       //@synthesize nlQuery=_nlQuery - In the implementation block
@property (nonatomic,retain) ICSearchQuery * spellingQuery;                                                 //@synthesize spellingQuery=_spellingQuery - In the implementation block
@property (nonatomic,retain) ICTopHitSearchQuery * topHitQuery;                                             //@synthesize topHitQuery=_topHitQuery - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedWordQueries;                                           //@synthesize relatedWordQueries=_relatedWordQueries - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                                                      //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resultsDictionary;                                       //@synthesize resultsDictionary=_resultsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uniqueIdentifiersOfAttachmentsFoundInNotes;              //@synthesize uniqueIdentifiersOfAttachmentsFoundInNotes=_uniqueIdentifiersOfAttachmentsFoundInNotes - In the implementation block
@property (nonatomic,copy) NSString * searchString;                                                         //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSString * suggestionsQueryString;                                               //@synthesize suggestionsQueryString=_suggestionsQueryString - In the implementation block
@property (nonatomic,copy) NSString * keyboardLanguage;                                                     //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (assign,nonatomic) BOOL performTopHitSearch;                                                      //@synthesize performTopHitSearch=_performTopHitSearch - In the implementation block
@property (assign,nonatomic) BOOL performNLSearch;                                                          //@synthesize performNLSearch=_performNLSearch - In the implementation block
@property (nonatomic,retain) NSError * error;                                                               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL allowEmptySearchString;                                                 //@synthesize allowEmptySearchString=_allowEmptySearchString - In the implementation block
@property (assign,nonatomic) BOOL modernResultsOnly;                                                        //@synthesize modernResultsOnly=_modernResultsOnly - In the implementation block
@property (assign,nonatomic) unsigned long long rankingStrategy;                                            //@synthesize rankingStrategy=_rankingStrategy - In the implementation block
@property (nonatomic,copy) id foundItemsHandler;                                                            //@synthesize foundItemsHandler=_foundItemsHandler - In the implementation block
@property (assign,nonatomic) long long requestIndex;                                                        //@synthesize requestIndex=_requestIndex - In the implementation block
@property (nonatomic,readonly) NSArray * searchSuggestions;                                                 //@synthesize searchSuggestions=_searchSuggestions - In the implementation block
+(void)initialize;
+(void*)nlpParser;
+(id)fuzzyMatchingQueryStringForSearchString:(id)arg1 ;
+(id)substringMatchingQueryStringForSearchString:(id)arg1 ;
+(void)nlSearchQueryWithSearchString:(id)arg1 queryString:(id*)arg2 rankingQueries:(id*)arg3 highlightString:(id*)arg4 ;
+(id)nlpSerialQueue;
+(id)highlightStringForAttributedInputs:(id)arg1 ;
+(id)prefixMatchingQueryStringForSearchString:(id)arg1 ;
+(id)exactMatchingQueryStringForTitleSearchString:(id)arg1 ;
+(id)newOperationQueueWithName:(id)arg1 ;
+(id)searchableItemsFromSortableItems:(id)arg1 ;
-(void)cancel;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSMutableArray *)results;
-(void)setResults:(NSMutableArray *)arg1 ;
-(id)suggestionsQueryStringFromSuggestions:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 performNLSearch:(BOOL)arg2 performTopHitSearch:(BOOL)arg3 suggestions:(id)arg4 modernResultsOnly:(BOOL)arg5 ;
-(id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 performTopHitSearch:(BOOL)arg3 modernResultsOnly:(BOOL)arg4 ;
-(NSString *)suggestionsQueryString;
-(ICSearchQuery *)defaultQuery;
-(id)jointQueryWithSuggestions:(id)arg1 ;
-(void)setDefaultQuery:(ICSearchQuery *)arg1 ;
-(id)foundItemsHandler;
-(id)runICSearchQuery:(id)arg1 ;
-(unsigned long long)countOfNonSpaceCharsInSearchString;
-(ICSearchQuery *)fuzzyQuery;
-(void)setFuzzyQuery:(ICSearchQuery *)arg1 ;
-(ICSearchQuery *)substringQuery;
-(void)setSubstringQuery:(ICSearchQuery *)arg1 ;
-(ICSearchQuery *)spellingQuery;
-(void)setSpellingQuery:(ICSearchQuery *)arg1 ;
-(void)setRelatedWordQueries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)relatedWordQueries;
-(void)setTopHitQuery:(ICTopHitSearchQuery *)arg1 ;
-(ICTopHitSearchQuery *)topHitQuery;
-(id)retrieveNotesOfFoundAttachmentsForSearchResults:(id)arg1 ;
-(void)appendSortableSearchableItemsToResults:(id)arg1 ;
-(BOOL)allowEmptySearchString;
-(void)setRankingStrategy:(unsigned long long)arg1 ;
-(void)setResultsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setUniqueIdentifiersOfAttachmentsFoundInNotes:(NSMutableDictionary *)arg1 ;
-(BOOL)performTopHitSearch;
-(void)performTopHitSearchQuery;
-(void)performPrefixAndFuzzyAndSubstringQueries;
-(BOOL)performNLSearch;
-(void)setNlQuery:(ICSearchQuery *)arg1 ;
-(void)performSpellCheckerAPIQueryIfNeeded;
-(unsigned long long)rankingStrategy;
-(NSMutableDictionary *)resultsDictionary;
-(NSString *)keyboardLanguage;
-(void)performRelatedWordQueriesIfNeeded;
-(NSMutableDictionary *)uniqueIdentifiersOfAttachmentsFoundInNotes;
-(id)initWithUserInput:(id)arg1 performNLSearch:(BOOL)arg2 performTopHitSearch:(BOOL)arg3 modernResultsOnly:(BOOL)arg4 ;
-(id)initWithSearchString:(id)arg1 performNLSearch:(BOOL)arg2 performTopHitSearch:(BOOL)arg3 suggestions:(id)arg4 ;
-(void)setRequestIndex:(long long)arg1 ;
-(id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 ;
-(void)setSuggestionsQueryString:(NSString *)arg1 ;
-(void)setPerformTopHitSearch:(BOOL)arg1 ;
-(void)setPerformNLSearch:(BOOL)arg1 ;
-(NSString *)searchString;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)init;
-(void)setFoundItemsHandler:(id)arg1 ;
-(ICSearchQuery *)nlQuery;
-(void)setSearchString:(NSString *)arg1 ;
-(long long)requestIndex;
-(NSArray *)searchSuggestions;
-(void)main;
-(BOOL)modernResultsOnly;
-(void)setModernResultsOnly:(BOOL)arg1 ;
@end
