/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@class PKPaletteToolPickerView, NSLayoutConstraint, NSString;

@interface PKPaletteToolPickerContainerView : UIView <PKEdgeLocatable, PKPaletteViewSizeScaling> {

	unsigned long long _edgeLocation;
	double _scalingFactor;
	PKPaletteToolPickerView* _toolPickerView;
	NSLayoutConstraint* _toolPickerViewTopConstraint;
	NSLayoutConstraint* _toolPickerViewBottomConstraint;
	NSLayoutConstraint* _toolPickerViewLeftConstraint;
	NSLayoutConstraint* _toolPickerViewRightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * toolPickerViewTopConstraint;                 //@synthesize toolPickerViewTopConstraint=_toolPickerViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerViewBottomConstraint;              //@synthesize toolPickerViewBottomConstraint=_toolPickerViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerViewLeftConstraint;                //@synthesize toolPickerViewLeftConstraint=_toolPickerViewLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolPickerViewRightConstraint;               //@synthesize toolPickerViewRightConstraint=_toolPickerViewRightConstraint - In the implementation block
@property (nonatomic,readonly) PKPaletteToolPickerView * toolPickerView;                       //@synthesize toolPickerView=_toolPickerView - In the implementation block
@property (assign,nonatomic) unsigned long long edgeLocation;                                  //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double scalingFactor;                                             //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(double)scalingFactor;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)init;
-(void)_updateUI;
-(void)setScalingFactor:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(PKPaletteToolPickerView *)toolPickerView;
-(NSLayoutConstraint *)toolPickerViewTopConstraint;
-(NSLayoutConstraint *)toolPickerViewBottomConstraint;
-(NSLayoutConstraint *)toolPickerViewLeftConstraint;
-(NSLayoutConstraint *)toolPickerViewRightConstraint;
-(void)setToolPickerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPickerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPickerViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setToolPickerViewRightConstraint:(NSLayoutConstraint *)arg1 ;
@end
