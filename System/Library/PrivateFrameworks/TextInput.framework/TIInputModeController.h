/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface TIInputModeController : NSObject {

	NSArray* _supportedInputModeIdentifiers;
	NSArray* _supportedInputModeLanguageAndRegions;
	NSString* currentLocale;
	NSArray* preferredLanguages;
	NSArray* enabledInputModes;
	NSArray* defaultInputModes;
	NSArray* inputModesForTesting;

}

@property (nonatomic,copy) NSString * currentLocale; 
@property (nonatomic,copy) NSArray * preferredLanguages; 
@property (nonatomic,copy) NSArray * enabledInputModes; 
@property (nonatomic,copy) NSArray * defaultInputModes; 
@property (nonatomic,copy) NSArray * inputModesForTesting; 
@property (readonly) NSArray * supportedInputModeIdentifiers; 
@property (readonly) NSArray * supportedInputModeLanguageAndRegions; 
@property (readonly) NSArray * enabledInputModeIdentifiers; 
+(id)_inputModesForLocale:(id)arg1 language:(id)arg2 modeFetcher:(/*^block*/id)arg3 ;
+(id)sharedInputModeController;
-(NSString *)currentLocale;
-(NSArray *)supportedInputModeIdentifiers;
-(NSArray *)preferredLanguages;
-(void)setCurrentLocale:(NSString *)arg1 ;
-(id)suggestedDictationLanguageForDeviceLanguage;
-(id)defaultDictationLanguagesForKeyboardLanguage:(id)arg1 ;
-(NSArray *)defaultInputModes;
-(void)setInputModeIdentifiersForTesting:(id)arg1 ;
-(id)defaultEnabledInputModesForCurrentLocale;
-(void)setDefaultInputModes:(NSArray *)arg1 ;
-(id)suggestedDictationLanguagesForDeviceLanguage;
-(NSArray *)inputModesForTesting;
-(NSArray *)enabledInputModeIdentifiers;
-(NSArray *)supportedInputModeLanguageAndRegions;
-(void)setPreferredLanguages:(NSArray *)arg1 ;
-(void)setInputModesForTesting:(NSArray *)arg1 ;
-(BOOL)identifierIsValidSystemInputMode:(id)arg1 ;
-(void)setEnabledInputModes:(NSArray *)arg1 ;
-(NSArray *)enabledInputModes;
@end
