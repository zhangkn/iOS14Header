/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSSet;

@interface TPLayoutState : NSObject <NSCopying> {

	unsigned long long _sectionIndex;
	unsigned long long _sectionPageIndex;
	unsigned long long _documentPageIndex;
	unsigned long long _lastPageCount;
	NSArray* _sectionHints;
	unsigned long long _bodyLength;
	NSSet* _missingFonts;

}

@property (assign,nonatomic) unsigned long long sectionIndex;                   //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) unsigned long long sectionPageIndex;               //@synthesize sectionPageIndex=_sectionPageIndex - In the implementation block
@property (assign,nonatomic) unsigned long long documentPageIndex;              //@synthesize documentPageIndex=_documentPageIndex - In the implementation block
@property (assign,nonatomic) unsigned long long lastPageCount;                  //@synthesize lastPageCount=_lastPageCount - In the implementation block
@property (nonatomic,copy) NSArray * sectionHints;                              //@synthesize sectionHints=_sectionHints - In the implementation block
@property (assign,nonatomic) unsigned long long bodyLength;                     //@synthesize bodyLength=_bodyLength - In the implementation block
@property (nonatomic,copy) NSSet * missingFonts;                                //@synthesize missingFonts=_missingFonts - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(void)reset;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)bodyLength;
-(void)setBodyLength:(unsigned long long)arg1 ;
-(id)initWithArchive:(const LayoutStateArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(LayoutStateArchive*)arg1 archiver:(id)arg2 context:(id)arg3 ;
-(unsigned long long)documentPageIndex;
-(void)setDocumentPageIndex:(unsigned long long)arg1 ;
-(NSArray *)sectionHints;
-(id)archivedLayoutStateInContext:(id)arg1 ;
-(BOOL)isEqualToLayoutState:(id)arg1 ;
-(unsigned long long)sectionPageIndex;
-(void)setSectionPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)lastPageCount;
-(void)setLastPageCount:(unsigned long long)arg1 ;
-(void)setSectionHints:(NSArray *)arg1 ;
-(NSSet *)missingFonts;
-(void)setMissingFonts:(NSSet *)arg1 ;
@end

