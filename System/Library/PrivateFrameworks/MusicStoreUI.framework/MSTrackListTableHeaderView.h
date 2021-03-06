/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString;

@interface MSTrackListTableHeaderView : UIView {

	CGSize _titleSize;
	NSString* _title;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
-(void)sizeToFit;
-(void)dealloc;
-(NSString *)title;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
@end

