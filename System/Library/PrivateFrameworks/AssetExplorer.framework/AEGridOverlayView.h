/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@class UIView, AEGridOverlayConfiguration, NSString;

@interface AEGridOverlayView : UIView <PXUIViewBasicTile, PXReusableObject> {

	AEGridOverlayConfiguration* _overlayConfiguration;

}

@property (setter=_setOverlayConfiguration:,nonatomic,retain) AEGridOverlayConfiguration * overlayConfiguration;              //@synthesize overlayConfiguration=_overlayConfiguration - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loopBadge;
+(id)videoBadge;
+(id)cloudBadge;
+(id)gradientShadow;
+(id)gridOverlayLayoutInfo;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)prepareForReuse;
-(UIView *)view;
-(id)init;
-(void)becomeReusable;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(AEGridOverlayConfiguration *)overlayConfiguration;
-(CGRect)_cloudRect;
-(CGRect)_videoRect;
-(CGRect)_loopRect;
-(void)_setOverlayConfiguration:(id)arg1 ;
@end
