/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, GEOStyleAttributes;

@interface GEOCategorySearchResultSection : NSObject {

	long long _cellType;
	NSString* _headerDisplayName;
	NSString* _subHeaderDisplayName;
	GEOStyleAttributes* _styleAttributes;

}

@property (assign,nonatomic) long long cellType;                                  //@synthesize cellType=_cellType - In the implementation block
@property (nonatomic,copy) NSString * headerDisplayName;                          //@synthesize headerDisplayName=_headerDisplayName - In the implementation block
@property (nonatomic,copy) NSString * subHeaderDisplayName;                       //@synthesize subHeaderDisplayName=_subHeaderDisplayName - In the implementation block
@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
-(void)setCellType:(long long)arg1 ;
-(long long)cellType;
-(GEOStyleAttributes *)styleAttributes;
-(id)init;
-(id)initWithCategorySearchResultSection:(id)arg1 ;
-(NSString *)headerDisplayName;
-(void)setHeaderDisplayName:(NSString *)arg1 ;
-(NSString *)subHeaderDisplayName;
-(void)setSubHeaderDisplayName:(NSString *)arg1 ;
@end

