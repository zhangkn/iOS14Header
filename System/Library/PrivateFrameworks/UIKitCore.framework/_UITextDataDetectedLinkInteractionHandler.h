/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextItemInteractionHandler.h>

@protocol _UITextContent;
@class UIView, UIAction, NSString;

@interface _UITextDataDetectedLinkInteractionHandler : NSObject <_UITextItemInteractionHandler> {

	NSRange _range;
	CGRect _rect;
	UIView*<_UITextContent> _view;
	UIAction* _defaultAction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRange:(NSRange)arg1 rect:(CGRect)arg2 inTextContentView:(id)arg3 ;
-(id)defaultAction;
-(unsigned long long)preferredContextMenuLayout;
-(id)_defaultAction;
-(id)_defaultDDAction;
-(id)actionSheetTitle;
-(id)contextMenuConfiguration;
@end

