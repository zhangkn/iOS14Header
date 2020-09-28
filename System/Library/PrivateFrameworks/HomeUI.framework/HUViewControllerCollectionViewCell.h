/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUViewControllerCell.h>

@class UIViewController, NSString;

@interface HUViewControllerCollectionViewCell : UICollectionViewCell <HUViewControllerCell> {

	BOOL _allowSelfSizing;
	UIViewController* _viewController;
	UIViewController* _parentViewController;

}

@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,nonatomic) BOOL allowSelfSizing;                                        //@synthesize allowSelfSizing=_allowSelfSizing - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                           //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UIViewController *)viewController;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)parentViewController;
-(void)removeFromParentViewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)addToParentViewController:(id)arg1 ;
-(void)_removeFromParentViewControllerAndClearProperty:(BOOL)arg1 ;
-(BOOL)allowSelfSizing;
-(void)setAllowSelfSizing:(BOOL)arg1 ;
@end
