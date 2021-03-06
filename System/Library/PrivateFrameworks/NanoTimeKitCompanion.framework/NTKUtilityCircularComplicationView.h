/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>
#import <libobjc.A.dylib/NTKContainerViewLayoutDelegate.h>

@class NTKContainerView, NSString;

@interface NTKUtilityCircularComplicationView : NTKUtilityComplicationView <NTKContainerViewLayoutDelegate> {

	NTKContainerView* _contentView;

}

@property (nonatomic,readonly) NTKContainerView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)layoutOverride;
-(NTKContainerView *)contentView;
-(void)setEditing:(BOOL)arg1 ;
-(void)_layoutContentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutContainerView:(id)arg1 ;
-(void)setEditingRotationAngle:(double)arg1 ;
-(void)_updateEditingRotationAngle;
@end

