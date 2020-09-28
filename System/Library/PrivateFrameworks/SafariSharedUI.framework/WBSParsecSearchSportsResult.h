/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSParsecLegacySearchResult.h>
#import <libobjc.A.dylib/WBSParsecSearchSportsResult.h>
@class NSArray, NSString, WBSParsecSearchSportsAttributionExtraCompletionItem;


@protocol WBSParsecSearchSportsResult
@property (nonatomic,copy,readonly) NSArray * images; 
@property (nonatomic,copy,readonly) NSArray * individualScores; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) WBSParsecSearchSportsAttributionExtraCompletionItem * extraCompletionItem; 
@required
-(NSArray *)images;
-(NSString *)subtitle;
-(NSArray *)individualScores;
-(WBSParsecSearchSportsAttributionExtraCompletionItem *)extraCompletionItem;

@end


@class NSArray, NSString, WBSParsecSearchSportsAttributionExtraCompletionItem, WBSParsecSportsScoreSummary;

@interface WBSParsecSearchSportsResult : WBSParsecLegacySearchResult <WBSParsecSearchSportsResult> {

	WBSParsecSportsScoreSummary* _scoreSummary;
	WBSParsecSearchSportsAttributionExtraCompletionItem* _extraCompletionItem;

}

@property (nonatomic,copy,readonly) NSArray * images; 
@property (nonatomic,copy,readonly) NSArray * individualScores; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) WBSParsecSearchSportsAttributionExtraCompletionItem * extraCompletionItem;              //@synthesize extraCompletionItem=_extraCompletionItem - In the implementation block
+(id)_specializedSchema;
-(NSArray *)images;
-(NSString *)subtitle;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)individualScores;
-(WBSParsecSearchSportsAttributionExtraCompletionItem *)extraCompletionItem;
@end
