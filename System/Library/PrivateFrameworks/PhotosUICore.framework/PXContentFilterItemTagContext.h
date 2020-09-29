/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:00 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSString, PHKeyword;

@interface PXContentFilterItemTagContext : NSObject {

	NSString* _containerId;
	PHKeyword* _keyword;

}

@property (nonatomic,copy) NSString * containerId;              //@synthesize containerId=_containerId - In the implementation block
@property (nonatomic,retain) PHKeyword * keyword;               //@synthesize keyword=_keyword - In the implementation block
-(NSString *)containerId;
-(PHKeyword *)keyword;
-(void)setContainerId:(NSString *)arg1 ;
-(void)setKeyword:(PHKeyword *)arg1 ;
@end
