/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableView.h>

@protocol TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver;
@interface TKTonePickerTableView : UITableView {

	id<TKTonePickerTableViewLayoutMarginsObserver> _layoutMarginsObserver;
	id<TKTonePickerTableViewSeparatorObserver> _separatorObserver;

}

@property (assign,nonatomic,__weak) id<TKTonePickerTableViewLayoutMarginsObserver> layoutMarginsObserver;              //@synthesize layoutMarginsObserver=_layoutMarginsObserver - In the implementation block
@property (assign,nonatomic,__weak) id<TKTonePickerTableViewSeparatorObserver> separatorObserver;                      //@synthesize separatorObserver=_separatorObserver - In the implementation block
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)setSeparatorColor:(id)arg1 ;
-(id<TKTonePickerTableViewLayoutMarginsObserver>)layoutMarginsObserver;
-(id<TKTonePickerTableViewSeparatorObserver>)separatorObserver;
-(void)_handleSeparatorColorDidChange;
-(void)setLayoutMarginsObserver:(id<TKTonePickerTableViewLayoutMarginsObserver>)arg1 ;
-(void)setSeparatorObserver:(id<TKTonePickerTableViewSeparatorObserver>)arg1 ;
@end

