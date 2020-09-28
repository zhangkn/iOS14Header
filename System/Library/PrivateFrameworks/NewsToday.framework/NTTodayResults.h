/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSOrderedSet, NSDate, NSObject;

@interface NTTodayResults : NSObject <NSCopying, NSSecureCoding> {

	int _promotionCriterion;
	NSString* _sourceIdentifier;
	NSOrderedSet* _sections;
	NSDate* _expirationDate;
	double _headlineScale;
	NSObject* _assetsHoldToken;
	NSObject* _recordsHoldToken;

}

@property (nonatomic,copy,readonly) NSString * sourceIdentifier;              //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * sections;                  //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) int promotionCriterion;                        //@synthesize promotionCriterion=_promotionCriterion - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) double headlineScale;                          //@synthesize headlineScale=_headlineScale - In the implementation block
@property (nonatomic,readonly) NSObject * assetsHoldToken;                    //@synthesize assetsHoldToken=_assetsHoldToken - In the implementation block
@property (nonatomic,readonly) NSObject * recordsHoldToken;                   //@synthesize recordsHoldToken=_recordsHoldToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sourceIdentifier;
-(NSDate *)expirationDate;
-(int)promotionCriterion;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSOrderedSet *)sections;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)itemCount;
-(unsigned long long)hash;
-(id)description;
-(double)headlineScale;
-(id)initWithSourceIdentifier:(id)arg1 sections:(id)arg2 expirationDate:(id)arg3 headlineScale:(double)arg4 ;
-(NSObject *)assetsHoldToken;
-(NSObject *)recordsHoldToken;
-(id)initWithSourceIdentifier:(id)arg1 sections:(id)arg2 promotionCriterion:(int)arg3 expirationDate:(id)arg4 headlineScale:(double)arg5 assetsHoldToken:(id)arg6 recordsHoldToken:(id)arg7 ;
@end
