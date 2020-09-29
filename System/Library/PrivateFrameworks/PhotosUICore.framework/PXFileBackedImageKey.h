/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSURL;

@interface PXFileBackedImageKey : NSObject {

	NSURL* _url;
	CGSize _size;

}

@property (nonatomic,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) CGSize size;              //@synthesize size=_size - In the implementation block
-(id)initWithUrl:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)size;
-(unsigned long long)hash;
-(NSURL *)url;
@end
