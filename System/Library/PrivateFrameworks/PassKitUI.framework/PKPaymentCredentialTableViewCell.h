/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UIImageView, UILabel;

@interface PKPaymentCredentialTableViewCell : PKTableViewCell {

	BOOL _showingPlaceholder;
	BOOL _snapshotImageHasBorder;
	UIImageView* _snapshotImageView;
	UILabel* _credentialDetailLabel;

}

@property (nonatomic,readonly) UIImageView * snapshotImageView;              //@synthesize snapshotImageView=_snapshotImageView - In the implementation block
@property (nonatomic,readonly) UILabel * credentialDetailLabel;              //@synthesize credentialDetailLabel=_credentialDetailLabel - In the implementation block
@property (assign,nonatomic) BOOL showingPlaceholder;                        //@synthesize showingPlaceholder=_showingPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL snapshotImageHasBorder;                    //@synthesize snapshotImageHasBorder=_snapshotImageHasBorder - In the implementation block
+(CGSize)defaultImageViewSize;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)snapshotImageHasBorder;
-(UIImageView *)snapshotImageView;
-(void)setShowingPlaceholder:(BOOL)arg1 ;
-(BOOL)showingPlaceholder;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(id)detailTextLabelColor;
-(void)setSnapshotImageHasBorder:(BOOL)arg1 ;
-(UILabel *)credentialDetailLabel;
@end

