/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HLPHelpTopicItem, NSArray, NSString;

@interface HLPLoadInfo : NSObject {

	BOOL _analyticsLogged;
	HLPHelpTopicItem* _helpTopicItem;
	long long _accessType;
	NSArray* _searchTerms;
	NSString* _anchor;

}

@property (nonatomic,readonly) HLPHelpTopicItem * helpTopicItem;              //@synthesize helpTopicItem=_helpTopicItem - In the implementation block
@property (nonatomic,readonly) long long accessType;                          //@synthesize accessType=_accessType - In the implementation block
@property (nonatomic,readonly) NSArray * searchTerms;                         //@synthesize searchTerms=_searchTerms - In the implementation block
@property (nonatomic,readonly) NSString * anchor;                             //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) NSString * analyticsSourceType; 
@property (assign,nonatomic) BOOL analyticsLogged;                            //@synthesize analyticsLogged=_analyticsLogged - In the implementation block
+(id)infoWithTopicItem:(id)arg1 accesstype:(long long)arg2 searchTerms:(id)arg3 anchor:(id)arg4 ;
-(NSString *)anchor;
-(NSArray *)searchTerms;
-(long long)accessType;
-(HLPHelpTopicItem *)helpTopicItem;
-(BOOL)analyticsLogged;
-(void)setAnalyticsLogged:(BOOL)arg1 ;
-(id)_initWithTopicItem:(id)arg1 accessType:(long long)arg2 searchTerms:(id)arg3 anchor:(id)arg4 ;
-(NSString *)analyticsSourceType;
@end
