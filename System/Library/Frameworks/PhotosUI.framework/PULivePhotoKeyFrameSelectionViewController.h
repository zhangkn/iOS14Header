/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:51 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PULivePhotoKeyFrameSelectionViewControllerDelegate;
@class NSString, UIButton;

@interface PULivePhotoKeyFrameSelectionViewController : UIViewController {

	id<PULivePhotoKeyFrameSelectionViewControllerDelegate> _delegate;
	NSString* _selectionTitle;
	UIButton* _makeKeyPhotoBtn;

}

@property (nonatomic,retain) UIButton * makeKeyPhotoBtn;                                                          //@synthesize makeKeyPhotoBtn=_makeKeyPhotoBtn - In the implementation block
@property (assign,nonatomic,__weak) id<PULivePhotoKeyFrameSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * selectionTitle;                                                             //@synthesize selectionTitle=_selectionTitle - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)tapMakeKeyPhoto:(id)arg1 ;
-(void)_updateButtonTitle;
-(UIButton *)makeKeyPhotoBtn;
-(void)setMakeKeyPhotoBtn:(UIButton *)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(NSString *)selectionTitle;
-(void)setDelegate:(id<PULivePhotoKeyFrameSelectionViewControllerDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<PULivePhotoKeyFrameSelectionViewControllerDelegate>)delegate;
-(void)setSelectionTitle:(NSString *)arg1 ;
@end
