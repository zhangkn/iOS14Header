/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSRecentWebSearchesController.h>

@class NSString;

@interface _SFRecentWebSearchesController : WBSRecentWebSearchesController {

	NSString* _pathToLegacySearchesFile;

}
+(unsigned long long)_maximumNumberOfSearchesToTrack;
-(id)initWithPathToLegacySearchesFile:(id)arg1 ;
-(void)_removeLegacyRecentSearchesData;
-(void)_migrateLegacyData;
-(void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2 ;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1 ;
@end

