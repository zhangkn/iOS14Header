/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXSearchQueryOptions : NSObject <NSCopying> {

	BOOL _wantsCuratedAssetsFetchResult;
	BOOL _wantsLibraryChanges;
	BOOL _wantsWordEmbeddings;
	unsigned long long _curatedAssetLimit;
	unsigned long long _suggestionLimit;
	unsigned long long _filterOptions;

}

@property (assign,nonatomic) unsigned long long curatedAssetLimit;              //@synthesize curatedAssetLimit=_curatedAssetLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsCuratedAssetsFetchResult;                //@synthesize wantsCuratedAssetsFetchResult=_wantsCuratedAssetsFetchResult - In the implementation block
@property (assign,nonatomic) unsigned long long suggestionLimit;                //@synthesize suggestionLimit=_suggestionLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsLibraryChanges;                          //@synthesize wantsLibraryChanges=_wantsLibraryChanges - In the implementation block
@property (assign,nonatomic) unsigned long long filterOptions;                  //@synthesize filterOptions=_filterOptions - In the implementation block
@property (assign,nonatomic) BOOL wantsWordEmbeddings;                          //@synthesize wantsWordEmbeddings=_wantsWordEmbeddings - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)curatedAssetLimit;
-(unsigned long long)suggestionLimit;
-(BOOL)wantsCuratedAssetsFetchResult;
-(BOOL)wantsLibraryChanges;
-(void)setCuratedAssetLimit:(unsigned long long)arg1 ;
-(BOOL)wantsWordEmbeddings;
-(id)init;
-(void)setFilterOptions:(unsigned long long)arg1 ;
-(unsigned long long)filterOptions;
-(void)setSuggestionLimit:(unsigned long long)arg1 ;
-(void)setWantsWordEmbeddings:(BOOL)arg1 ;
-(void)setWantsCuratedAssetsFetchResult:(BOOL)arg1 ;
-(void)setWantsLibraryChanges:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

