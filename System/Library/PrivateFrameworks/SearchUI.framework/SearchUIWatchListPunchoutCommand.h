/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUITapCommand.h>
#import <SearchUI/SearchUIFeedbackDelegate.h>

@class NSString;

@interface SearchUIWatchListPunchoutCommand : SearchUITapCommand <SearchUIFeedbackDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 environment:(id)arg2 ;
-(void)presentViewController:(id)arg1 ;
-(void)performCommandWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)prefersModalPresentation;
@end
