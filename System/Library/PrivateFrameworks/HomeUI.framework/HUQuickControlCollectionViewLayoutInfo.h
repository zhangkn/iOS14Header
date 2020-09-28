/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeUI/HomeUI-Structs.h>
@class NSMutableArray;

@interface HUQuickControlCollectionViewLayoutInfo : NSObject {

	NSMutableArray* _layoutDetailsArray;
	CGSize _collectionViewContentSize;
	CGRect _availableContentFrame;

}

@property (assign,nonatomic) CGRect availableContentFrame;                     //@synthesize availableContentFrame=_availableContentFrame - In the implementation block
@property (assign,nonatomic) CGSize collectionViewContentSize;                 //@synthesize collectionViewContentSize=_collectionViewContentSize - In the implementation block
@property (nonatomic,retain) NSMutableArray * layoutDetailsArray;              //@synthesize layoutDetailsArray=_layoutDetailsArray - In the implementation block
-(CGSize)collectionViewContentSize;
-(NSMutableArray *)layoutDetailsArray;
-(void)setAvailableContentFrame:(CGRect)arg1 ;
-(void)setLayoutDetailsArray:(NSMutableArray *)arg1 ;
-(CGRect)availableContentFrame;
-(void)setCollectionViewContentSize:(CGSize)arg1 ;
@end
