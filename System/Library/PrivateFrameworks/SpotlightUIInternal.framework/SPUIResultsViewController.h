/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIResultsViewController.h>
#import <libobjc.A.dylib/SPSearchAgentDelegate.h>
#import <libobjc.A.dylib/SPUIResultsViewTestingDelegate.h>

@class SFSearchResult, NSArray, SFResultSection;

@interface SPUIResultsViewController : SearchUIResultsViewController <SPSearchAgentDelegate, SPUIResultsViewTestingDelegate> {

	unsigned long long _startTime;
	BOOL _isHighlighting;
	BOOL _hasResultsWaitingToUpdate;
	/*^block*/id didFinishGettingAllResultsHandler;
	SFSearchResult* _goTakeoverResult;
	NSArray* _resultSections;
	SFResultSection* _suggestionsSection;
	SFResultSection* _searchThroughSection;
	unsigned long long _previousQueryId;
	SFSearchResult* _highlightedResult;

}

@property (retain) NSArray * resultSections;                                           //@synthesize resultSections=_resultSections - In the implementation block
@property (retain) SFResultSection * suggestionsSection;                               //@synthesize suggestionsSection=_suggestionsSection - In the implementation block
@property (readonly) SFSearchResult * actualSearchSuggestionResult; 
@property (assign) BOOL hasResultsWaitingToUpdate;                                     //@synthesize hasResultsWaitingToUpdate=_hasResultsWaitingToUpdate - In the implementation block
@property (retain) SFResultSection * searchThroughSection;                             //@synthesize searchThroughSection=_searchThroughSection - In the implementation block
@property (assign) unsigned long long previousQueryId;                                 //@synthesize previousQueryId=_previousQueryId - In the implementation block
@property (retain) SFSearchResult * highlightedResult;                                 //@synthesize highlightedResult=_highlightedResult - In the implementation block
@property (assign,nonatomic,__weak) id<SPUIResultsViewDelegate> delegate; 
@property (nonatomic,retain) SFSearchResult * goTakeoverResult;                        //@synthesize goTakeoverResult=_goTakeoverResult - In the implementation block
@property (nonatomic,readonly) BOOL isHighlighting;                                    //@synthesize isHighlighting=_isHighlighting - In the implementation block
@property (nonatomic,copy) id didFinishGettingAllResultsHandler; 
-(void)setResultSections:(NSArray *)arg1 ;
-(BOOL)isResultOriginalSearchSuggestion:(id)arg1 ;
-(void)setGoTakeoverResult:(SFSearchResult *)arg1 ;
-(void)searchAgentFinishedQueryWithoutAdditionalResults:(id)arg1 ;
-(id)asTypedSearchResult;
-(SFSearchResult *)actualSearchSuggestionResult;
-(void)setSearchThroughSection:(SFResultSection *)arg1 ;
-(SFSearchResult *)goTakeoverResult;
-(BOOL)_hasRealSuggestions;
-(void)setDidFinishGettingAllResultsHandler:(id)arg1 ;
-(void)removeCompletionAndHighlightAsTyped:(BOOL)arg1 ;
-(void)searchUpdatedWithString:(id)arg1 tokenEntity:(id)arg2 queryId:(unsigned long long)arg3 wantsCompletions:(BOOL)arg4 ;
-(void)searchAgentClearedResults:(id)arg1 ;
-(SFSearchResult *)highlightedResult;
-(NSArray *)resultSections;
-(void)insertYahooAttributionIfNecessaryForResult:(id)arg1 ;
-(BOOL)hasResultsWaitingToUpdate;
-(void)changeTextFieldsReturnKeyType:(long long)arg1 withGoTakeoverResult:(id)arg2 ;
-(SFResultSection *)suggestionsSection;
-(void)clearSuggestionSection;
-(BOOL)isHighlighting;
-(SFResultSection *)searchThroughSection;
-(id)initWithSearchModel:(id)arg1 ;
-(id)makeAsYouTypeSuggestionSearchResultWithSearchString:(id)arg1 detailText:(id)arg2 suggestionIdentifier:(id)arg3 queryId:(unsigned long long)arg4 ;
-(void)setHasResultsWaitingToUpdate:(BOOL)arg1 ;
-(void)forceHighlightForResult:(id)arg1 ;
-(void)setSuggestionsSection:(SFResultSection *)arg1 ;
-(void)_pushSectionsUpdate;
-(void)setHighlightedResult:(SFSearchResult *)arg1 ;
-(unsigned long long)previousQueryId;
-(void)searchAgentUpdatedResults:(id)arg1 ;
-(id)didFinishGettingAllResultsHandler;
-(void)setPreviousQueryId:(unsigned long long)arg1 ;
@end
