/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UISearchBar;

@interface STSSearchBrowserHeaderView : UIView {

	NSLayoutConstraint* _searchBarHeight;
	UISearchBar* _searchBar;

}

@property (nonatomic,readonly) UISearchBar * searchBar;              //@synthesize searchBar=_searchBar - In the implementation block
-(UISearchBar *)searchBar;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

