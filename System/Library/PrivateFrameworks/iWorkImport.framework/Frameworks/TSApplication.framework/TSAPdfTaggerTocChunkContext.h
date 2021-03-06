/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSApplication.framework/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSAPdfTaggerContext.h>

@class NSMutableDictionary, TSWPTOCRep;

@interface TSAPdfTaggerTocChunkContext : TSAPdfTaggerContext {

	NSMutableDictionary* _paragraphStyleToLevelMap;
	TSWPTOCRep* _tocChunkRep;

}

@property (nonatomic,readonly) TSWPTOCRep * tocChunkRep;              //@synthesize tocChunkRep=_tocChunkRep - In the implementation block
-(void)setUp;
-(id)initWithStateOfTagger:(id)arg1 tocChunkRep:(id)arg2 ;
-(int)levelForParagraphStyle:(id)arg1 ;
-(TSWPTOCRep *)tocChunkRep;
@end

