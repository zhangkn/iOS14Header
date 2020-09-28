/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/AccessibilityBundles/AXActionSheetUIServer.axuiservice/AXActionSheetUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXUIAlertDelegate <NSObject>
@optional
-(void)alertWithIdentifierWasEnqueued:(id)arg1;
-(double)delayForDequeuingAlertWithIdentifier:(id)arg1;
-(double)desiredWindowLevelForAlertWithIdentifier:(id)arg1;
-(id)styleProviderForAlertWithIdentifier:(id)arg1;
-(void)alertWithIdentifierDidAppear:(id)arg1;
-(void)alertWithIdentifierDidDisappear:(id)arg1;
-(void)alertWithIdentifierWasActivated:(id)arg1;

@end
