/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPList;

@interface CPParagraphListItem : NSObject <CPDisposable> {

	CPList* list;
	int number;
	CFArrayRef paragraphs;

}

@property (nonatomic,retain) CPList * list; 
@property (assign,nonatomic) int number; 
-(int)number;
-(CPList *)list;
-(void)dispose;
-(void)setNumber:(int)arg1 ;
-(void)dealloc;
-(void)finalize;
-(id)init;
-(void)setList:(CPList *)arg1 ;
-(unsigned)paragraphCount;
-(id)paragraphAtIndex:(unsigned)arg1 ;
-(void)addParagraph:(id)arg1 ;
@end

