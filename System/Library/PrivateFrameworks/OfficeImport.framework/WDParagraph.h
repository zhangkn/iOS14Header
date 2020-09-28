/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDBlock.h>

@class WDParagraphProperties, NSMutableArray;

@interface WDParagraph : WDBlock {

	WDParagraphProperties* mProperties;
	NSMutableArray* mRuns;
	unsigned long long identifier;

}

@property (assign) unsigned long long identifier; 
-(unsigned long long)identifier;
-(id)runs;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)clearProperties;
-(id)runAt:(unsigned long long)arg1 ;
-(id)properties;
-(BOOL)isEmpty;
-(id)addAnnotation:(int)arg1 ;
-(void)addRun:(id)arg1 ;
-(id)description;
-(id)initWithText:(id)arg1 ;
-(id)addBookmark;
-(BOOL)isTextFrame;
-(unsigned long long)runCount;
-(int)blockType;
-(BOOL)isContinuationOf:(id)arg1 ;
-(id)addBookmark:(id)arg1 type:(int)arg2 ;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(id)addCharacterRun;
-(id)addSpecialCharacter;
-(id)addSymbol;
-(id)addFootnote;
-(id)addEndnote;
-(id)addFieldMarker;
-(id)addAnnotation:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(id)addHyperlinkFieldMarker;
-(id)initWithText:(id)arg1 string:(id)arg2 ;
-(void)insertRun:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeRun:(id)arg1 ;
-(void)clearRuns;
-(id)addDateTime:(id)arg1 ;
-(id)addMath:(id)arg1 ;
-(float)maxReflectionDistance;
-(id)runIterator;
-(id)newRunIterator;
-(id)addFieldMarker:(int)arg1 ;
-(id)addHyperlinkFieldMarker:(int)arg1 ;
@end
