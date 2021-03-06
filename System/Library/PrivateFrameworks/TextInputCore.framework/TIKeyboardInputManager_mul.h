/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {

	BOOL _isSuspended;

}
-(BOOL)shouldUpdateDictionary;
-(unsigned)lexiconIDForInputMode:(id)arg1 ;
-(SCD_Struct_TI10)lexiconInfoForInputMode:(id)arg1 ;
-(void)didUpdateInputModes:(id)arg1 ;
-(BOOL)updateLanguageModelForKeyboardState;
-(vector<KB::LexiconInfo, std::__1::allocator<KB::LexiconInfo> >*)lexiconInformationVector;
-(void)loadDictionaries;
-(void)enumerateInputModesWithBlock:(/*^block*/id)arg1 ;
-(id)resourceInputModes;
-(void)suspend;
-(void)resume;
-(void)updateLanguagePriors;
-(void)didUpdateInputModeProbabilities:(id)arg1 ;
-(id)keyboardConfiguration;
-(float)weightForInputMode:(id)arg1 ;
-(LanguageModelContainer*)languageModelContainer;
@end

