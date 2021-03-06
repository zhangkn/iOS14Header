/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class NSArray, _UIStatusBarImageView, NSString;

@interface _UIStatusBarIndicatorItem : _UIStatusBarItem {

	NSArray* _currentImageNamePrefixes;
	_UIStatusBarImageView* _imageView;

}

@property (nonatomic,copy) NSArray * currentImageNamePrefixes;                       //@synthesize currentImageNamePrefixes=_currentImageNamePrefixes - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) NSString * indicatorEntryKey; 
@property (nonatomic,readonly) BOOL isTemplateImage; 
@property (nonatomic,readonly) BOOL flipsForRightToLeftLayoutDirection; 
-(void)setImageView:(_UIStatusBarImageView *)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)imageNameForUpdate:(id)arg1 ;
-(id)systemImageNameForUpdate:(id)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(NSString *)indicatorEntryKey;
-(BOOL)shouldUpdateIndicatorForIdentifier:(id)arg1 ;
-(void)_create_imageView;
-(void)setCurrentImageNamePrefixes:(NSArray *)arg1 ;
-(NSArray *)currentImageNamePrefixes;
-(BOOL)flipsForRightToLeftLayoutDirection;
-(id)dependentEntryKeys;
-(BOOL)isTemplateImage;
-(_UIStatusBarImageView *)imageView;
-(id)imageForUpdate:(id)arg1 ;
@end

