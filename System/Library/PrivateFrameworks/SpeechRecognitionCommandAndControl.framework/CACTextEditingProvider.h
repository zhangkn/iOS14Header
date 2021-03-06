/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <libobjc.A.dylib/SRCSTextEditingProviderProtocol.h>

@class CACSpokenCommand, AXElement, SRCSTextEditing, NSString;

@interface CACTextEditingProvider : NSObject <SRCSTextEditingProviderProtocol> {

	CACSpokenCommand* _spokenCommand;
	AXElement* _axElement;
	SRCSTextEditing* _textEditingEngine;

}

@property (readonly) SRCSTextEditing * textEditingEngine;              //@synthesize textEditingEngine=_textEditingEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExecuting:(BOOL)arg1 ;
-(void)deleteText;
-(void)setCompletionDeterminedManually:(BOOL)arg1 ;
-(CGRect)rectForRange:(NSRange)arg1 ;
-(BOOL)isNextPreviousResolverSpokenCommandEmojiBased;
-(BOOL)isVisibleTextRect:(CGRect)arg1 ;
-(BOOL)isVisibleTextRange:(NSRange)arg1 ;
-(void)deleteTextAtTextMarkerRange:(id)arg1 ;
-(id)markerRangeForEnumerationType:(long long)arg1 desiredBlock:(int)arg2 count:(unsigned long long)arg3 options:(int)arg4 ;
-(id)actOnStrings:(id)arg1 ambiguityResolution:(id)arg2 substringSearchGranularity:(int)arg3 alwaysCallActionOnClosestMatch:(BOOL)arg4 options:(id)arg5 actionBlock:(/*^block*/id)arg6 ;
-(NSRange)_rangeFromPreviousTextInsertionForAXElement:(id)arg1 ;
-(id)_nBestListFromPreviousTextInsertionForAXElement:(id)arg1 ;
-(id)stringForTextMarkerRange:(id)arg1 ;
-(id)selectionTextMarkerRange;
-(SRCSTextEditing *)textEditingEngine;
-(Class)textMarkerClass;
-(Class)textMarkerRangeClass;
-(void)formatSelectionBold;
-(void)formatSelectionItalics;
-(void)formatSelectionUnderline;
-(void)performTextCopy;
-(void)performTextCut;
-(void)performTextPaste;
-(void)performTextUndo;
-(void)performTextRedo;
-(void)performTextSelectAll;
-(id)firstPositionTextMarker;
-(id)lastPositionTextMarker;
-(id)markerRangeForLineAtTextMarker:(id)arg1 ;
-(void)setSelectionToTextMarkerRange:(id)arg1 ;
-(id)textMarkerRangeFromPreviousTextInsertion;
-(id)nBestListFromPreviousTextInsertion;
-(int)searchGranularity;
-(id)emojisMatchingTextInStrings:(id)arg1 ;
-(BOOL)isTextDisambiguationSupported;
-(void)handleTextDisambiguationWithPhraseMatchResults:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)handleSearchResultsWithRecognizedCommandParameters:(id)arg1 variantOverrides:(id)arg2 ;
-(void)handleErrorIdentifier:(id)arg1 withObjects:(id)arg2 ;
-(void)handleCorrectionRequestWithStrings:(id)arg1 ;
-(void)insertString:(id)arg1 ;
-(void)insertAttributedString:(id)arg1 ;
-(void)registerInsertedStringCategoryIdentifer:(id)arg1 ;
-(id)initWithSpokenCommand:(id)arg1 axElement:(id)arg2 ;
-(void)applyFormat;
@end

