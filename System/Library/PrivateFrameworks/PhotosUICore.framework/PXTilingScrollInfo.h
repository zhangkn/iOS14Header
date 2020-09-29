/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXTilingScrollInfo : NSObject <NSCopying> {

	BOOL _pagingEnabled;
	unsigned long long _axis;
	CGSize _interpageSpacing;
	CGPoint _pagingOrigin;

}

@property (assign,nonatomic) unsigned long long axis;                                //@synthesize axis=_axis - In the implementation block
@property (assign,getter=isPagingEnabled,nonatomic) BOOL pagingEnabled;              //@synthesize pagingEnabled=_pagingEnabled - In the implementation block
@property (assign,nonatomic) CGSize interpageSpacing;                                //@synthesize interpageSpacing=_interpageSpacing - In the implementation block
@property (assign,nonatomic) CGPoint pagingOrigin;                                   //@synthesize pagingOrigin=_pagingOrigin - In the implementation block
-(unsigned long long)axis;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAxis:(unsigned long long)arg1 ;
-(void)setInterpageSpacing:(CGSize)arg1 ;
-(void)setPagingEnabled:(BOOL)arg1 ;
-(CGPoint)pagingOrigin;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPagingOrigin:(CGPoint)arg1 ;
-(BOOL)isPagingEnabled;
-(unsigned long long)hash;
-(CGSize)interpageSpacing;
@end
