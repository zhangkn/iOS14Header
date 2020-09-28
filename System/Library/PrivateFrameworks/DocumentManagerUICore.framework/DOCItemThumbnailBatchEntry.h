/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DOCItemThumbnail;

@interface DOCItemThumbnailBatchEntry : NSObject {

	DOCItemThumbnail* _thumbnail;
	unsigned long long _fetchOptions;

}

@property (nonatomic,retain) DOCItemThumbnail * thumbnail;                 //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) unsigned long long fetchOptions;              //@synthesize fetchOptions=_fetchOptions - In the implementation block
-(void)setFetchOptions:(unsigned long long)arg1 ;
-(unsigned long long)fetchOptions;
-(void)setThumbnail:(DOCItemThumbnail *)arg1 ;
-(DOCItemThumbnail *)thumbnail;
@end
