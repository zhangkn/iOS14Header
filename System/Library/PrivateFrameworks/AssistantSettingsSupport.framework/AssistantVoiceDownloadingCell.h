/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class AssistantVoiceDownloadingView;

@interface AssistantVoiceDownloadingCell : PSTableCell {

	AssistantVoiceDownloadingView* _downloadingView;
	BOOL _downloading;

}
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setDownloading:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end
