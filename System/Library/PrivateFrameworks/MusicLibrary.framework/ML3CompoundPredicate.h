/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate {

	NSArray* _predicates;

}

@property (nonatomic,retain) NSArray * predicates;                                  //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,copy,readonly) NSString * compoundOperatorJoiner; 
+(BOOL)supportsSecureCoding;
+(id)predicateMatchingPredicates:(id)arg1 ;
-(NSArray *)predicates;
-(id)initWithPredicates:(id)arg1 ;
-(id)databaseStatementParameters;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPredicates:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(BOOL)isDynamicForEntityClass:(Class)arg1 ;
-(id)spotlightPredicate;
@end
