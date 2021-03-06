/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/GKPlayerAvatarViewDelegate.h>

@protocol GKAvatarContainerViewDelegate;
@class GKDashboardPlayerPhotoView, UILabel, UIView, GKGradientLabel, UIImageView, NSLayoutConstraint, UITapGestureRecognizer, NSString;

@interface GKAvatarContainerView : UIView <GKPlayerAvatarViewDelegate> {

	id<GKAvatarContainerViewDelegate> _delegate;
	GKDashboardPlayerPhotoView* _playerAvatarView;
	UILabel* _nicknameLabel;
	UILabel* _emailLabel;
	UIView* _imageContainer;
	GKGradientLabel* _editLabel;
	UIView* _editImage;
	UIImageView* _editImageBackground;
	NSLayoutConstraint* _imageContainerTopConstraint;
	UITapGestureRecognizer* _tapGesture;

}

@property (nonatomic,retain) UILabel * nicknameLabel;                                        //@synthesize nicknameLabel=_nicknameLabel - In the implementation block
@property (nonatomic,retain) UILabel * emailLabel;                                           //@synthesize emailLabel=_emailLabel - In the implementation block
@property (nonatomic,retain) UIView * imageContainer;                                        //@synthesize imageContainer=_imageContainer - In the implementation block
@property (nonatomic,retain) GKGradientLabel * editLabel;                                    //@synthesize editLabel=_editLabel - In the implementation block
@property (nonatomic,retain) UIView * editImage;                                             //@synthesize editImage=_editImage - In the implementation block
@property (nonatomic,retain) UIImageView * editImageBackground;                              //@synthesize editImageBackground=_editImageBackground - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageContainerTopConstraint;               //@synthesize imageContainerTopConstraint=_imageContainerTopConstraint - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                            //@synthesize tapGesture=_tapGesture - In the implementation block
@property (assign,nonatomic,__weak) id<GKAvatarContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKDashboardPlayerPhotoView * playerAvatarView;                  //@synthesize playerAvatarView=_playerAvatarView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didMoveToSuperview;
-(void)setPlayerAvatarView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)setEditLabel:(GKGradientLabel *)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setupEditImageBackground;
-(UIView *)imageContainer;
-(void)setImageContainer:(UIView *)arg1 ;
-(void)updateAvatarEditingAvailability;
-(UIImageView *)editImageBackground;
-(void)refreshHeaderViewProfileImage;
-(NSLayoutConstraint *)imageContainerTopConstraint;
-(void)setEmailLabel:(UILabel *)arg1 ;
-(void)setEditImage:(UIView *)arg1 ;
-(void)setEditImageBackground:(UIImageView *)arg1 ;
-(void)setImageContainerTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<GKAvatarContainerViewDelegate>)arg1 ;
-(GKGradientLabel *)editLabel;
-(UILabel *)nicknameLabel;
-(void)setNicknameLabel:(UILabel *)arg1 ;
-(id<GKAvatarContainerViewDelegate>)delegate;
-(void)didSetPlayerAvatarImage:(id)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)didSelectPlayerAvatarView:(id)arg1 ;
-(void)prepareForDefaultNicknameViewController;
-(void)refreshViewForLocalPlayer;
-(void)awakeFromNib;
-(UIView *)editImage;
-(GKDashboardPlayerPhotoView *)playerAvatarView;
-(UILabel *)emailLabel;
@end

