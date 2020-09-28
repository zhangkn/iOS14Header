/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface SGQuickResponsesReplyOption : NSObject {

	NSNumber* _position;
	NSNumber* _ucb;

}

@property (nonatomic,readonly) NSNumber * position;              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) NSNumber * ucb;                   //@synthesize ucb=_ucb - In the implementation block
+(double)ucbCombinedForSelected:(double)arg1 displayed:(double)arg2 actualOptionsDisplayed:(double)arg3 matched:(double)arg4 imputedDisplayed:(double)arg5 imputedOptionsDisplayed:(double)arg6 explorationFactor:(double)arg7 ;
+(double)ucbTunedVarianceForMean:(double)arg1 displayed:(double)arg2 totalDisplayed:(double)arg3 ;
+(double)ucbWithMean:(double)arg1 varianceOfMean:(double)arg2 explorationFactor:(double)arg3 ;
+(double)ucbCombinedWithMeanA:(double)arg1 meanB:(double)arg2 varianceA:(double)arg3 varianceB:(double)arg4 explorationFactor:(double)arg5 ;
+(id)sortedReplyOptionsForRecords:(id)arg1 config:(id)arg2 ;
+(double)totalDisplayedCountForRecords:(id)arg1 ;
+(id)imputedDisplayedForRecords:(id)arg1 config:(id)arg2 ;
-(NSNumber *)ucb;
-(NSNumber *)position;
-(long long)compare:(id)arg1 ;
-(id)initWithPosition:(unsigned long long)arg1 records:(id)arg2 actualOptionsDisplayedCount:(double)arg3 imputedOptionsDisplayedCount:(double)arg4 imputedOptionsDisplayed:(id)arg5 config:(id)arg6 ;
@end
