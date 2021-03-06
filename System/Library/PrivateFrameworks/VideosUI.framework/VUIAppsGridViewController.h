/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class UILabel, UICollectionViewFlowLayout, UICollectionView, NSArray, NSString;

@interface VUIAppsGridViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIViewControllerTransitioningDelegate> {

	UILabel* _titleLabel;
	UICollectionViewFlowLayout* _layout;
	UICollectionView* _collectionView;
	NSArray* _apps;

}

@property (nonatomic,copy) NSArray * apps;                          //@synthesize apps=_apps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)apps;
-(void)setApps:(NSArray *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(Class)_collectionViewClass;
@end

