/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSString, NSArray, NSCache, NSMutableSet;

@interface SGPatterns : NSObject {

	NSString* _classKey;
	NSArray* _langResolutionOrder;
	NSCache* _compiledRegexes2;
	NSString* _language;
	NSMutableSet* _regexpKeysSeen;
	int _localLanguageVersion;

}
+(void)initialize;
+(id)patternsForIdentifier:(id)arg1 ;
+(id)fallbackLanguageCodeForCountryCode:(id)arg1 ;
+(id)languagePartOfLanguageCode:(id)arg1 ;
+(void)forceLanguagesTo:(id)arg1 ;
+(void)_reinstateDeath;
+(void)changeLanguageOrPatternData;
+(void)useAllLanguagesAtOnce:(BOOL)arg1 ;
+(void)setPatternsDictForTesting:(id)arg1 ;
+(id)calculateLangResolutionOrder;
+(void)resetToDefaultPatternsForTesting;
+(id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)arg1 ;
+(void)clearAllRegexCaches;
+(void)pauseCacheEvictionTemporarily;
+(id)countryCodeFromLanguageCode:(id)arg1 ;
+(id)patternsForClass:(Class)arg1 ;
-(id)rawValueOrDataForKey:(id)arg1 ;
-(id)regex2ForKey:(id)arg1 ;
-(id)stringSetMatcherForKey:(id)arg1 ;
-(void)dealloc;
-(void)resetIfNeeded;
-(id)init;
-(void)_clearRegexCache;
-(id)rawValuesForKey:(id)arg1 ;
-(id)rawValueForKey:(id)arg1 ;
-(void)_becomeImmuneToDeath;
@end
