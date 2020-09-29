/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:00 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <QuartzCore/CALayer.h>

@class PXGLayout, NSArray;

@interface PXGRectDiagnosticsLayer : CALayer {

	PXGLayout* _layout;
	NSArray* _rectDiagnosticsProviders;

}

@property (nonatomic,retain) PXGLayout * layout;                            //@synthesize layout=_layout - In the implementation block
@property (nonatomic,copy) NSArray * rectDiagnosticsProviders;              //@synthesize rectDiagnosticsProviders=_rectDiagnosticsProviders - In the implementation block
+(id)defaultRectDiagnosticsProviders;
-(void)setLayout:(PXGLayout *)arg1 ;
-(void)setRectDiagnosticsProviders:(NSArray *)arg1 ;
-(void)update;
-(PXGLayout *)layout;
-(NSArray *)rectDiagnosticsProviders;
@end
