/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSSet, NSString;

@interface PPNamedEntityQuery : NSObject <NSCopying, NSSecureCoding> {

	BOOL _matchCategory;
	BOOL _excludeWithoutSentiment;
	BOOL _orderByName;
	BOOL _removeNearDuplicates;
	BOOL _isForRecordMonitoring;
	unsigned long long _limit;
	NSDate* _fromDate;
	NSDate* _toDate;
	NSDate* _scoringDate;
	NSSet* _matchingSourceBundleIds;
	NSSet* _excludingSourceBundleIds;
	NSSet* _matchingSourceGroupIds;
	NSSet* _matchingSourceDocumentIds;
	unsigned long long _deviceFilter;
	double _decayRate;
	NSString* _matchingName;
	NSSet* _matchingCategories;
	NSSet* _excludingAlgorithms;
	NSString* _matchingContactHandle;
	NSString* _matchingEntityTrie;
	unsigned long long _locationConsumer;

}

@property (nonatomic,retain) NSString * matchingEntityTrie;                    //@synthesize matchingEntityTrie=_matchingEntityTrie - In the implementation block
@property (assign,nonatomic) unsigned long long locationConsumer;              //@synthesize locationConsumer=_locationConsumer - In the implementation block
@property (assign,nonatomic) BOOL orderByName;                                 //@synthesize orderByName=_orderByName - In the implementation block
@property (assign,nonatomic) BOOL removeNearDuplicates;                        //@synthesize removeNearDuplicates=_removeNearDuplicates - In the implementation block
@property (assign,nonatomic) BOOL isForRecordMonitoring;                       //@synthesize isForRecordMonitoring=_isForRecordMonitoring - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                         //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) NSDate * fromDate;                                //@synthesize fromDate=_fromDate - In the implementation block
@property (nonatomic,retain) NSDate * toDate;                                  //@synthesize toDate=_toDate - In the implementation block
@property (nonatomic,retain) NSDate * scoringDate;                             //@synthesize scoringDate=_scoringDate - In the implementation block
@property (nonatomic,retain) NSSet * matchingSourceBundleIds;                  //@synthesize matchingSourceBundleIds=_matchingSourceBundleIds - In the implementation block
@property (nonatomic,retain) NSSet * excludingSourceBundleIds;                 //@synthesize excludingSourceBundleIds=_excludingSourceBundleIds - In the implementation block
@property (nonatomic,retain) NSSet * matchingSourceGroupIds;                   //@synthesize matchingSourceGroupIds=_matchingSourceGroupIds - In the implementation block
@property (nonatomic,retain) NSSet * matchingSourceDocumentIds;                //@synthesize matchingSourceDocumentIds=_matchingSourceDocumentIds - In the implementation block
@property (assign,nonatomic) unsigned long long deviceFilter;                  //@synthesize deviceFilter=_deviceFilter - In the implementation block
@property (assign,nonatomic) BOOL overrideDecayRate; 
@property (assign,nonatomic) double decayRate;                                 //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,copy) NSString * matchingName;                            //@synthesize matchingName=_matchingName - In the implementation block
@property (assign,nonatomic) BOOL matchCategory;                               //@synthesize matchCategory=_matchCategory - In the implementation block
@property (nonatomic,retain) NSSet * matchingCategories;                       //@synthesize matchingCategories=_matchingCategories - In the implementation block
@property (nonatomic,retain) NSSet * excludingAlgorithms;                      //@synthesize excludingAlgorithms=_excludingAlgorithms - In the implementation block
@property (assign,nonatomic) BOOL excludeWithoutSentiment;                     //@synthesize excludeWithoutSentiment=_excludeWithoutSentiment - In the implementation block
@property (nonatomic,retain) NSString * matchingContactHandle;                 //@synthesize matchingContactHandle=_matchingContactHandle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_matchingCategoriesDescription:(id)arg1 ;
+(id)locationQueryWithLimit:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3 ;
+(id)_excludingAlgorithmsDescription:(id)arg1 ;
-(NSDate *)toDate;
-(unsigned long long)deviceFilter;
-(unsigned long long)limit;
-(void)setDecayRate:(double)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)fromDate;
-(double)decayRate;
-(BOOL)matchCategory;
-(unsigned long long)locationConsumer;
-(id)customizedDescription;
-(void)setToDate:(NSDate *)arg1 ;
-(BOOL)removeNearDuplicates;
-(void)setMatchingSourceBundleIds:(NSSet *)arg1 ;
-(void)setExcludingSourceBundleIds:(NSSet *)arg1 ;
-(BOOL)orderByName;
-(NSString *)matchingEntityTrie;
-(void)setMatchCategory:(BOOL)arg1 ;
-(void)setFromDate:(NSDate *)arg1 ;
-(void)setOrderByName:(BOOL)arg1 ;
-(void)setMatchingContactHandle:(NSString *)arg1 ;
-(void)setOverrideDecayRate:(BOOL)arg1 ;
-(void)setRemoveNearDuplicates:(BOOL)arg1 ;
-(BOOL)overrideDecayRate;
-(void)setExcludingAlgorithms:(NSSet *)arg1 ;
-(BOOL)excludeWithoutSentiment;
-(NSSet *)matchingSourceDocumentIds;
-(NSSet *)matchingCategories;
-(BOOL)isForRecordMonitoring;
-(id)init;
-(void)setScoringDate:(NSDate *)arg1 ;
-(NSDate *)scoringDate;
-(NSSet *)matchingSourceBundleIds;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMatchingEntityTrie:(NSString *)arg1 ;
-(void)setLocationConsumer:(unsigned long long)arg1 ;
-(void)setDeviceFilter:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)matchingName;
-(void)setMatchingCategories:(NSSet *)arg1 ;
-(BOOL)isEqualToNamedEntityQuery:(id)arg1 ;
-(void)setIsForRecordMonitoring:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)matchingContactHandle;
-(unsigned long long)hash;
-(void)setMatchingName:(NSString *)arg1 ;
-(NSSet *)excludingAlgorithms;
-(NSSet *)matchingSourceGroupIds;
-(void)setMatchingSourceDocumentIds:(NSSet *)arg1 ;
-(void)setExcludeWithoutSentiment:(BOOL)arg1 ;
-(NSSet *)excludingSourceBundleIds;
-(id)description;
-(void)setMatchingSourceGroupIds:(NSSet *)arg1 ;
@end

