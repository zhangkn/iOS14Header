/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@protocol CKLayerDelegate;
@interface CKBaseLayer : CALayer {

	id<CKLayerDelegate> _ckLayerDelegate;

}

@property (assign,nonatomic,__weak) id<CKLayerDelegate> ckLayerDelegate;              //@synthesize ckLayerDelegate=_ckLayerDelegate - In the implementation block
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(id<CKLayerDelegate>)ckLayerDelegate;
-(void)setCkLayerDelegate:(id<CKLayerDelegate>)arg1 ;
@end

