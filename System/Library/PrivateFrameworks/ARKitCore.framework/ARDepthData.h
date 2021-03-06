/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKitCore/ARKitCore-Structs.h>
@interface ARDepthData : NSObject {

	CVBufferRef _depthMap;
	CVBufferRef _confidenceMap;

}

@property (nonatomic,readonly) CVBufferRef depthMap;                   //@synthesize depthMap=_depthMap - In the implementation block
@property (nonatomic,readonly) CVBufferRef confidenceMap;              //@synthesize confidenceMap=_confidenceMap - In the implementation block
-(void)dealloc;
-(CVBufferRef)depthMap;
-(CVBufferRef)confidenceMap;
-(id)initWithDepthMap:(CVBufferRef)arg1 confidenceMap:(CVBufferRef)arg2 ;
@end

