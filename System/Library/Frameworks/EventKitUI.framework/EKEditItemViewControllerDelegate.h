/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKEditItemViewControllerDelegate <NSObject>
@optional
-(void)editItemViewControllerWantsKeyboardPinned:(BOOL)arg1;
-(BOOL)editItemViewControllerSave:(id)arg1;

@required
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
-(id)editItemEventToDetach;
-(BOOL)editItemViewControllerShouldShowDetachAlert;

@end

