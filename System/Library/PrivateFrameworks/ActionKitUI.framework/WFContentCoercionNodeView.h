/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class WFContentCoercionNode, CAShapeLayer, UILabel;

@interface WFContentCoercionNodeView : UIView {

	WFContentCoercionNode* _node;
	CAShapeLayer* _outlineLayer;
	UILabel* _nameLabel;

}

@property (assign,nonatomic,__weak) CAShapeLayer * outlineLayer;              //@synthesize outlineLayer=_outlineLayer - In the implementation block
@property (assign,nonatomic,__weak) UILabel * nameLabel;                      //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) WFContentCoercionNode * node;                    //@synthesize node=_node - In the implementation block
-(WFContentCoercionNode *)node;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNode:(WFContentCoercionNode *)arg1 ;
-(CAShapeLayer *)outlineLayer;
-(void)setOutlineLayer:(CAShapeLayer *)arg1 ;
-(void)updateColors;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
@end
