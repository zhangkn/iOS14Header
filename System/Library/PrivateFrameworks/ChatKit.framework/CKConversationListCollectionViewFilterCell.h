/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UISegmentedControl;

@interface CKConversationListCollectionViewFilterCell : UICollectionViewCell {

	UISegmentedControl* _filterControl;

}

@property (nonatomic,retain) UISegmentedControl * filterControl;              //@synthesize filterControl=_filterControl - In the implementation block
+(id)reuseIdentifier;
+(double)defaultHeight:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(UISegmentedControl *)filterControl;
-(void)setFilterControl:(UISegmentedControl *)arg1 ;
-(void)configureForTitles:(id)arg1 ;
@end
