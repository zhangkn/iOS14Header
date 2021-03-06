/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@class UIBarButtonItem, NSString;

@interface RUIBarButtonItem : RUIElement {

	UIBarButtonItem* _barButtonItem;
	/*^block*/id _action;

}

@property (nonatomic,copy) id action;                                        //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem; 
@property (nonatomic,readonly) NSString * itemType; 
-(UIBarButtonItem *)barButtonItem;
-(id)action;
-(void)_buttonPressed:(id)arg1 ;
-(NSString *)itemType;
-(void)setAction:(id)arg1 ;
-(id)_labelColor;
-(void)setEnabled:(BOOL)arg1 ;
@end

