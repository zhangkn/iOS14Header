/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:18 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <SetupAssistantUI/BFFPaneHeaderView.h>
#import <libobjc.A.dylib/RUIHeader.h>

@protocol RUIHeaderDelegate;
@class NSString;

@interface BFFPaneHeaderView_RemoteUI : BFFPaneHeaderView <RUIHeader> {

	id<RUIHeaderDelegate> _rui_headerDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2 ;
-(void)setImageAlignment:(int)arg1 ;
-(id)subHeaderLabel;
-(void)setDetailText:(id)arg1 attributes:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(id)headerLabel;
@end
