/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDisplayItem.h>

@class SBBestAppSuggestion;

@interface SBContinuityDisplayItem : SBDisplayItem {

	SBBestAppSuggestion* _appSuggestion;

}

@property (nonatomic,readonly) SBBestAppSuggestion * appSuggestion;              //@synthesize appSuggestion=_appSuggestion - In the implementation block
+(id)continuityAppDisplayItemWithBundleIdentifier:(id)arg1 appSuggestion:(id)arg2 ;
-(id)initWithType:(long long)arg1 displayIdentifier:(id)arg2 appSuggestion:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(SBBestAppSuggestion *)appSuggestion;
-(unsigned long long)hash;
@end
