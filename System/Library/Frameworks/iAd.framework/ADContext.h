/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSString;

@interface ADContext : NSObject <NSCopying> {

	NSMutableSet* _tags;
	NSString* _requestJSON;

}

@property (nonatomic,retain) NSMutableSet * tags;               //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSString * requestJSON;              //@synthesize requestJSON=_requestJSON - In the implementation block
-(id)fullContext;
-(NSMutableSet *)tags;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)requestJSON;
-(void)setTags:(NSMutableSet *)arg1 ;
-(BOOL)isFeed;
-(BOOL)matchesForNewContext:(id)arg1 matchClauses:(id)arg2 excludeTags:(id)arg3 ;
-(void)setRequestJSON:(NSString *)arg1 ;
-(id)initWithTags:(id)arg1 ;
-(void)setContextInfoForConfiguration:(id)arg1 ;
-(BOOL)_matchesClause:(id)arg1 inContext:(id)arg2 ;
@end
