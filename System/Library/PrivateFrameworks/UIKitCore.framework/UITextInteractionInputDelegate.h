/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextInputDelegate.h>

@class UITextInteraction, NSString;

@interface UITextInteractionInputDelegate : NSObject <UITextInputDelegate> {

	UITextInteraction* _rootInteraction;

}

@property (assign,nonatomic,__weak) UITextInteraction * rootInteraction;              //@synthesize rootInteraction=_rootInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textWillChange:(id)arg1 ;
-(void)selectionWillChange:(id)arg1 ;
-(void)selectionDidChange:(id)arg1 ;
-(void)setRootInteraction:(UITextInteraction *)arg1 ;
-(UITextInteraction *)rootInteraction;
-(void)textDidChange:(id)arg1 ;
@end
