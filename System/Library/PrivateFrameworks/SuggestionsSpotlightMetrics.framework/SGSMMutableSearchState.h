/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SuggestionsSpotlightMetrics.framework/SuggestionsSpotlightMetrics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SGMContactOpportunityInSpotlight, SGMContactResultInSpotlight, SGMContactResultSelectedInSpotlight, SGMNoResultSelectedInSpotlight, SGMOtherResultSelectedInSpotlight, NSMutableSet;

@interface SGSMMutableSearchState : NSObject {

	SGMContactOpportunityInSpotlight* _contactOpportunity;
	SGMContactResultInSpotlight* _contactResult;
	SGMContactResultSelectedInSpotlight* _contactSelected;
	SGMNoResultSelectedInSpotlight* _noneSelected;
	SGMOtherResultSelectedInSpotlight* _otherSelected;
	unsigned short _contactResultCount;
	unsigned short _contactOpportunityCount;
	unsigned char _contactConversionCount;
	unsigned char _contactLossCount;
	unsigned short _curatedOrPseudoContactOpportunityCount;
	unsigned char _otherSelectedCount;
	unsigned char _nonOpportunityCount;
	BOOL _justEngaged;
	NSMutableSet* _resultsSeen;

}
-(void)commit;
-(void)scoreAsOtherConversion;
-(void)scoreAsContactResult;
-(void)scoreAsContactConversion;
-(void)resetJustEngaged;
-(BOOL)justEngaged;
-(BOOL)isFirstTimeSeeingResult:(id)arg1 ;
-(id)init;
-(void)resetConversionCounts;
-(void)scoreAsContactOpportunity;
-(void)scoreAsNonOpportunity;
-(void)scoreAsContactLoss;
-(void)resetCounts;
-(void)setJustEngaged;
-(void)scoreAsCuratedOrPseudoContactOpportunity;
-(id)description;
@end
