/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RemoteUITableViewCell.h>

@class UILabel;

@interface RemoteUITableViewSubtitleAndValueCell : RemoteUITableViewCell {

	UILabel* _valueLabel;

}
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)valueLabel;
-(void)setBackgroundColor:(id)arg1 ;
-(void)_adjustFrameOfView:(id)arg1 distance:(double)arg2 ;
-(id)effectiveDetailTextLabel;
-(id)effectiveValueTextLabel;
@end

