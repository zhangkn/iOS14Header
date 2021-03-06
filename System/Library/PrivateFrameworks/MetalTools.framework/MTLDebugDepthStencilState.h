/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:37 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <MetalTools/MTLToolsDepthStencilState.h>

@class MTLDepthStencilDescriptor;

@interface MTLDebugDepthStencilState : MTLToolsDepthStencilState {

	unsigned char _attachmentWriteMask;
	MTLDepthStencilDescriptor* _descriptor;

}

@property (nonatomic,readonly) MTLDepthStencilDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned char attachmentWriteMask;                   //@synthesize attachmentWriteMask=_attachmentWriteMask - In the implementation block
+(id)newDepthStencilStateWithBaseObject:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(MTLDepthStencilDescriptor *)descriptor;
-(void)dealloc;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)description;
-(id)_initWithBaseDepthStencilState:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(unsigned char)attachmentWriteMask;
@end

