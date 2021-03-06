/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:30 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSKStructuredTextImportSettings, NSURL, NSDate, NSData, TSTCellRegion, NSArray;

@interface TSTStructuredTextImportRecord : NSObject <NSCopying> {

	BOOL _pasteWasUpdate;
	TSKStructuredTextImportSettings* _importSettings;
	NSURL* _importSource;
	NSDate* _importDate;
	NSData* _sourceData;
	double _confidence;
	TSTCellRegion* _importedRegion;
	unsigned long long _sourceColumnCount;
	unsigned long long _sourceRowCount;
	NSArray* _pasteInverseCommands;
	unsigned long long _pasteType;

}

@property (nonatomic,retain) TSKStructuredTextImportSettings * importSettings;               //@synthesize importSettings=_importSettings - In the implementation block
@property (nonatomic,retain) NSURL * importSource;                                           //@synthesize importSource=_importSource - In the implementation block
@property (nonatomic,retain) NSDate * importDate;                                            //@synthesize importDate=_importDate - In the implementation block
@property (nonatomic,copy) NSData * sourceData;                                              //@synthesize sourceData=_sourceData - In the implementation block
@property (assign,nonatomic) double confidence;                                              //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) TSTCellRegion * importedRegion;                                 //@synthesize importedRegion=_importedRegion - In the implementation block
@property (assign,nonatomic) unsigned long long sourceColumnCount;                           //@synthesize sourceColumnCount=_sourceColumnCount - In the implementation block
@property (assign,nonatomic) unsigned long long sourceRowCount;                              //@synthesize sourceRowCount=_sourceRowCount - In the implementation block
@property (nonatomic,retain) NSArray * pasteInverseCommands;                                 //@synthesize pasteInverseCommands=_pasteInverseCommands - In the implementation block
@property (assign,nonatomic) unsigned long long pasteType;                                   //@synthesize pasteType=_pasteType - In the implementation block
@property (assign,nonatomic) BOOL pasteWasUpdate;                                            //@synthesize pasteWasUpdate=_pasteWasUpdate - In the implementation block
@property (getter=isWholeTableImport,nonatomic,readonly) BOOL wholeTableImport; 
@property (getter=isReimportable,nonatomic,readonly) BOOL reimportable; 
+(id)record;
+(id)recordFromArchive:(const StructuredTextImportRecord*)arg1 ;
-(NSURL *)importSource;
-(void)setImportSource:(NSURL *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImportSettings:(TSKStructuredTextImportSettings *)arg1 ;
-(double)confidence;
-(NSDate *)importDate;
-(void)setImportDate:(NSDate *)arg1 ;
-(TSKStructuredTextImportSettings *)importSettings;
-(void)setConfidence:(double)arg1 ;
-(id)initFromArchive:(const StructuredTextImportRecord*)arg1 ;
-(void)setSourceData:(NSData *)arg1 ;
-(NSData *)sourceData;
-(void)encodeToArchive:(StructuredTextImportRecord*)arg1 ;
-(BOOL)isReimportable;
-(void)setImportedRegion:(TSTCellRegion *)arg1 ;
-(void)setSourceColumnCount:(unsigned long long)arg1 ;
-(void)setSourceRowCount:(unsigned long long)arg1 ;
-(BOOL)isWholeTableImport;
-(TSTCellRegion *)importedRegion;
-(unsigned long long)sourceColumnCount;
-(unsigned long long)sourceRowCount;
-(NSArray *)pasteInverseCommands;
-(void)setPasteInverseCommands:(NSArray *)arg1 ;
-(unsigned long long)pasteType;
-(void)setPasteType:(unsigned long long)arg1 ;
-(BOOL)pasteWasUpdate;
-(void)setPasteWasUpdate:(BOOL)arg1 ;
@end

