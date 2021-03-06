/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:56 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PXGLayout;

@interface PXGFence : NSObject {

	unsigned long long _type;
	PXGLayout* _layout;

}

@property (nonatomic,__weak,readonly) PXGLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
-(id)init;
-(PXGLayout *)layout;
-(unsigned long long)type;
-(id)initWithLayout:(id)arg1 type:(unsigned long long)arg2 ;
@end

