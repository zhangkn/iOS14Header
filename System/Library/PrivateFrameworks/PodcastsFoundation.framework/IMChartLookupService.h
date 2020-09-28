/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsFoundation/IMBasePlatformLookupService.h>

@class NSString;

@interface IMChartLookupService : IMBasePlatformLookupService {

	BOOL _filterExplicit;
	NSString* _genreId;
	NSString* _chartNumber;
	NSString* _contentProfile;
	NSString* _contentArtworkType;
	unsigned long long _limit;

}

@property (nonatomic,retain) NSString * genreId;                         //@synthesize genreId=_genreId - In the implementation block
@property (nonatomic,retain) NSString * chartNumber;                     //@synthesize chartNumber=_chartNumber - In the implementation block
@property (nonatomic,retain) NSString * contentProfile;                  //@synthesize contentProfile=_contentProfile - In the implementation block
@property (nonatomic,retain) NSString * contentArtworkType;              //@synthesize contentArtworkType=_contentArtworkType - In the implementation block
@property (assign) unsigned long long limit;                             //@synthesize limit=_limit - In the implementation block
@property (assign) BOOL filterExplicit;                                  //@synthesize filterExplicit=_filterExplicit - In the implementation block
-(id)urlRequest;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)request:(/*^block*/id)arg1 ;
-(NSString *)genreId;
-(void)performRequest:(/*^block*/id)arg1 ;
-(void)setGenreId:(NSString *)arg1 ;
-(id)platformAction;
-(void)setChartNumber:(NSString *)arg1 ;
-(NSString *)chartNumber;
-(BOOL)filterExplicit;
-(NSString *)contentProfile;
-(NSString *)contentArtworkType;
-(id)initWithGenreId:(id)arg1 andChartNumber:(id)arg2 ;
-(void)setContentProfile:(NSString *)arg1 ;
-(void)setContentArtworkType:(NSString *)arg1 ;
-(void)setFilterExplicit:(BOOL)arg1 ;
@end
