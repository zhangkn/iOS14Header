/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>
#import <libobjc.A.dylib/PXSharedAlbumInvitationViewDelegate.h>

@class PXFeedInvitationSectionInfo, PXSharedAlbumHeaderView, PXSharedAlbumInvitationView, UILabel, NSString;

@interface PUFeedInvitationCell : PUFeedCell <PXSharedAlbumInvitationViewDelegate> {

	BOOL _useInPopover;
	BOOL _showHeader;
	BOOL _showFooter;
	PXFeedInvitationSectionInfo* _invitationSectionInfo;
	PXSharedAlbumHeaderView* _headerView;
	PXSharedAlbumInvitationView* _invitationView;
	UILabel* _dateLabel;

}

@property (nonatomic,retain) PXSharedAlbumHeaderView * headerView;                             //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) PXSharedAlbumInvitationView * invitationView;                     //@synthesize invitationView=_invitationView - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                                              //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) PXFeedInvitationSectionInfo * invitationSectionInfo;              //@synthesize invitationSectionInfo=_invitationSectionInfo - In the implementation block
@property (assign,nonatomic) BOOL useInPopover;                                                //@synthesize useInPopover=_useInPopover - In the implementation block
@property (assign,nonatomic) BOOL showHeader;                                                  //@synthesize showHeader=_showHeader - In the implementation block
@property (assign,nonatomic) BOOL showFooter;                                                  //@synthesize showFooter=_showFooter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateColors;
-(id)_delegate;
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(UILabel *)dateLabel;
-(void)setHeaderView:(PXSharedAlbumHeaderView *)arg1 ;
-(void)layoutSubviews;
-(void)sharedAlbumInvitationView:(id)arg1 didAccept:(BOOL)arg2 ;
-(void)setInvitationSectionInfo:(PXFeedInvitationSectionInfo *)arg1 ;
-(void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg1 ;
-(void)sharedAlbumInvitationView:(id)arg1 presentViewController:(id)arg2 ;
-(void)setUseInPopover:(BOOL)arg1 ;
-(void)setShowHeader:(BOOL)arg1 ;
-(void)_updateInvitationView;
-(PXFeedInvitationSectionInfo *)invitationSectionInfo;
-(BOOL)useInPopover;
-(BOOL)showHeader;
-(PXSharedAlbumInvitationView *)invitationView;
-(void)setInvitationView:(PXSharedAlbumInvitationView *)arg1 ;
-(void)_updateHeaderView;
-(void)_updateDate;
-(void)setShowFooter:(BOOL)arg1 ;
-(void)_updateFooter;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(PXSharedAlbumHeaderView *)headerView;
-(BOOL)showFooter;
@end

