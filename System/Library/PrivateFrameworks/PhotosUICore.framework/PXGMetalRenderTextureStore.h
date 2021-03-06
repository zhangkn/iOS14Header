/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGMetalRenderTextureStore : NSObject {

	SCD_Struct_PX35* _textures;
	long long _count;
	long long _capacity;
	BOOL _sorted;

}
-(void)_sortIfNeeded;
-(void)dealloc;
-(id)init;
-(void)removeAllTextures;
-(void)drawWithOrder:(unsigned long long)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)addTexture:(SCD_Struct_PX35)arg1 ;
@end

