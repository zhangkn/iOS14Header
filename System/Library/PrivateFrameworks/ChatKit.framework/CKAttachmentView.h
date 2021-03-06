/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKAttachmentView.h>
@class CKMediaObject, UIImageView;


@protocol CKAttachmentView <NSObject>
@property (nonatomic,retain) CKMediaObject * mediaObject; 
@property (nonatomic,readonly) UIImageView * iconImageView; 
@required
-(UIImageView *)iconImageView;
-(void)prepareForReuse;
-(CKMediaObject *)mediaObject;
-(void)prepareForDisplay;
-(void)setMediaObject:(id)arg1;

@end


@class CKMediaObject, UIImageView, UILabel, NSString;

@interface CKAttachmentView : UIView <CKAttachmentView> {

	CKMediaObject* _mediaObject;
	UIImageView* _iconImageView;
	UILabel* _actionLabel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * actionLabel;                    //@synthesize actionLabel=_actionLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) CKMediaObject * mediaObject;              //@synthesize mediaObject=_mediaObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImageView *)iconImageView;
-(id)subtitle;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)prepareForReuse;
-(id)action;
-(UILabel *)actionLabel;
-(void)setActionLabel:(UILabel *)arg1 ;
-(id)title;
-(id)icon;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(CKMediaObject *)mediaObject;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)prepareForDisplay;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)configureIconImageView:(BOOL)arg1 ;
@end

