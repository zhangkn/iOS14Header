/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTMutableCellIteratorDataUpdating.h>
#import <TSTables/TSTCellIterating.h>
#import <TSTables/TSTCellRegionIterating.h>

@protocol TSTCellRegionIterating;
@class TSTTableInfo, TSTCell, TSTGroupBy, TSTCategoryTranslator, TSTTableDataStore, TSTColumnRowUIDMap, TSTSummaryCellVendor, TSTCellRegion, NSObject, TSTTableTile, TSTTableTileRowInfo, NSIndexSet, NSString;

@interface TSTCategoryStoreIterator : NSObject <TSTMutableCellIteratorDataUpdating, TSTCellIterating, TSTCellRegionIterating> {

	unordered_map<TSUViewColumnIndex, TSUModelColumnIndex, std::__1::hash<TSUViewColumnIndex>, std::__1::equal_to<TSUViewColumnIndex>, std::__1::allocator<std::__1::pair<const TSUViewColumnIndex, TSUModelColumnIndex> > >* _mapFromViewToBaseColumnInCurrentRow;
	TSTCell* _tempSummaryCell;
	BOOL _isSummaryRow;
	BOOL _isLabelRow;
	unsigned char _groupLevel;
	BOOL _rightToLeft;
	BOOL _terminated;
	unsigned short _categoryColumnIndex;
	unsigned _curRowIndex;
	unsigned _baseRowIndex;
	TSTTableInfo* _info;
	TSTGroupBy* _groupBy;
	TSTCategoryTranslator* _translator;
	TSTTableDataStore* _baseDataStore;
	TSTColumnRowUIDMap* _baseMap;
	TSTColumnRowUIDMap* _viewMap;
	TSTSummaryCellVendor* _summaryCellVendor;
	TSTColumnRowUIDMap* _summaryMap;
	TSTCellRegion* _region;
	NSObject*<TSTCellRegionIterating> _regionIterator;
	unsigned long long _searchMask;
	TSUCellCoord _curCellID;
	TSTTableTile* _baseTile;
	TSTTableTileRowInfo* _baseRow;
	TSTCell* _cell;
	NSIndexSet* _populatedColumnsForGroupLevel1;
	NSIndexSet* _populatedColumnsForGroupLevel2;
	NSIndexSet* _populatedColumnsForGroupLevel3;
	NSIndexSet* _populatedColumnsForGroupLevel4;
	NSIndexSet* _populatedColumnsForGroupLevel5;
	NSIndexSet* _viewColumnIndexesInCurrentRow;
	UUIDData<TSP::UUIDData> _uuid;
	NSRange _baseTileRange;

}

@property (nonatomic,readonly) TSTTableInfo * info;                                           //@synthesize info=_info - In the implementation block
@property (nonatomic,__weak,readonly) TSTGroupBy * groupBy;                                   //@synthesize groupBy=_groupBy - In the implementation block
@property (nonatomic,readonly) TSTCategoryTranslator * translator;                            //@synthesize translator=_translator - In the implementation block
@property (nonatomic,__weak,readonly) TSTTableDataStore * baseDataStore;                      //@synthesize baseDataStore=_baseDataStore - In the implementation block
@property (nonatomic,__weak,readonly) TSTColumnRowUIDMap * baseMap;                           //@synthesize baseMap=_baseMap - In the implementation block
@property (nonatomic,__weak,readonly) TSTColumnRowUIDMap * viewMap;                           //@synthesize viewMap=_viewMap - In the implementation block
@property (nonatomic,__weak,readonly) TSTSummaryCellVendor * summaryCellVendor;               //@synthesize summaryCellVendor=_summaryCellVendor - In the implementation block
@property (nonatomic,__weak,readonly) TSTColumnRowUIDMap * summaryMap;                        //@synthesize summaryMap=_summaryMap - In the implementation block
@property (nonatomic,readonly) TSTCellRegion * region;                                        //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) NSObject*<TSTCellRegionIterating> regionIterator;              //@synthesize regionIterator=_regionIterator - In the implementation block
@property (assign,nonatomic) unsigned long long searchMask;                                   //@synthesize searchMask=_searchMask - In the implementation block
@property (assign,nonatomic) TSUCellCoord curCellID;                                          //@synthesize curCellID=_curCellID - In the implementation block
@property (assign,nonatomic) unsigned curRowIndex;                                            //@synthesize curRowIndex=_curRowIndex - In the implementation block
@property (nonatomic,readonly) unsigned short categoryColumnIndex;                            //@synthesize categoryColumnIndex=_categoryColumnIndex - In the implementation block
@property (assign,nonatomic) BOOL isSummaryRow;                                               //@synthesize isSummaryRow=_isSummaryRow - In the implementation block
@property (assign,nonatomic) BOOL isLabelRow;                                                 //@synthesize isLabelRow=_isLabelRow - In the implementation block
@property (assign,nonatomic) unsigned char groupLevel;                                        //@synthesize groupLevel=_groupLevel - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned baseRowIndex;                                           //@synthesize baseRowIndex=_baseRowIndex - In the implementation block
@property (nonatomic,retain) TSTTableTile * baseTile;                                         //@synthesize baseTile=_baseTile - In the implementation block
@property (assign,nonatomic) NSRange baseTileRange;                                           //@synthesize baseTileRange=_baseTileRange - In the implementation block
@property (nonatomic,retain) TSTTableTileRowInfo * baseRow;                                   //@synthesize baseRow=_baseRow - In the implementation block
@property (nonatomic,readonly) TSTCell * cell;                                                //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic) BOOL rightToLeft;                                                //@synthesize rightToLeft=_rightToLeft - In the implementation block
@property (assign,nonatomic) BOOL terminated;                                                 //@synthesize terminated=_terminated - In the implementation block
@property (nonatomic,retain) NSIndexSet * populatedColumnsForGroupLevel1;                     //@synthesize populatedColumnsForGroupLevel1=_populatedColumnsForGroupLevel1 - In the implementation block
@property (nonatomic,retain) NSIndexSet * populatedColumnsForGroupLevel2;                     //@synthesize populatedColumnsForGroupLevel2=_populatedColumnsForGroupLevel2 - In the implementation block
@property (nonatomic,retain) NSIndexSet * populatedColumnsForGroupLevel3;                     //@synthesize populatedColumnsForGroupLevel3=_populatedColumnsForGroupLevel3 - In the implementation block
@property (nonatomic,retain) NSIndexSet * populatedColumnsForGroupLevel4;                     //@synthesize populatedColumnsForGroupLevel4=_populatedColumnsForGroupLevel4 - In the implementation block
@property (nonatomic,retain) NSIndexSet * populatedColumnsForGroupLevel5;                     //@synthesize populatedColumnsForGroupLevel5=_populatedColumnsForGroupLevel5 - In the implementation block
@property (nonatomic,retain) NSIndexSet * viewColumnIndexesInCurrentRow;                      //@synthesize viewColumnIndexesInCurrentRow=_viewColumnIndexesInCurrentRow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
-(TSTTableInfo *)info;
-(TSTCell *)cell;
-(void)terminate;
-(void)setBaseTile:(TSTTableTile *)arg1 ;
-(BOOL)terminated;
-(TSTCellRegion *)region;
-(void)dealloc;
-(TSTTableTile *)baseTile;
-(TSTGroupBy *)groupBy;
-(void)setUuid:(UUIDData<TSP::UUIDData>)arg1 ;
-(UUIDData<TSP::UUIDData>)uuid;
-(TSTCategoryTranslator *)translator;
-(BOOL)rightToLeft;
-(TSUCellCoord)getNext;
-(void)setTerminated:(BOOL)arg1 ;
-(void)setRightToLeft:(BOOL)arg1 ;
-(unsigned char)groupLevel;
-(unsigned short)categoryColumnIndex;
-(BOOL)getNextCellData:(id*)arg1 ;
-(id)initWithInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchMask:(unsigned long long)arg4 ;
-(void)iterateCellsUsingBlock:(/*^block*/id)arg1 ;
-(TSTSummaryCellVendor *)summaryCellVendor;
-(TSTColumnRowUIDMap *)viewMap;
-(TSUCellCoord)advanceToCellID:(TSUCellCoord)arg1 ;
-(void)updateCellData:(id)arg1 ;
-(void)updateFormulaForCellData:(id)arg1 ;
-(id)nextCellData;
-(NSObject*<TSTCellRegionIterating>)regionIterator;
-(TSUCellCoord)curCellID;
-(void)setCurCellID:(TSUCellCoord)arg1 ;
-(TSTColumnRowUIDMap *)summaryMap;
-(void)setBaseRow:(TSTTableTileRowInfo *)arg1 ;
-(id)tempSummaryCell;
-(BOOL)p_searchSummaryVendorCell:(id)arg1 searchFlags:(unsigned long long)arg2 ;
-(TSTTableDataStore *)baseDataStore;
-(TSTColumnRowUIDMap *)baseMap;
-(unsigned long long)searchMask;
-(void)setSearchMask:(unsigned long long)arg1 ;
-(unsigned)curRowIndex;
-(void)setCurRowIndex:(unsigned)arg1 ;
-(BOOL)isSummaryRow;
-(void)setIsSummaryRow:(BOOL)arg1 ;
-(BOOL)isLabelRow;
-(void)setIsLabelRow:(BOOL)arg1 ;
-(void)setGroupLevel:(unsigned char)arg1 ;
-(unsigned)baseRowIndex;
-(void)setBaseRowIndex:(unsigned)arg1 ;
-(NSRange)baseTileRange;
-(void)setBaseTileRange:(NSRange)arg1 ;
-(TSTTableTileRowInfo *)baseRow;
-(NSIndexSet *)populatedColumnsForGroupLevel1;
-(void)setPopulatedColumnsForGroupLevel1:(NSIndexSet *)arg1 ;
-(NSIndexSet *)populatedColumnsForGroupLevel2;
-(void)setPopulatedColumnsForGroupLevel2:(NSIndexSet *)arg1 ;
-(NSIndexSet *)populatedColumnsForGroupLevel3;
-(void)setPopulatedColumnsForGroupLevel3:(NSIndexSet *)arg1 ;
-(NSIndexSet *)populatedColumnsForGroupLevel4;
-(void)setPopulatedColumnsForGroupLevel4:(NSIndexSet *)arg1 ;
-(NSIndexSet *)populatedColumnsForGroupLevel5;
-(void)setPopulatedColumnsForGroupLevel5:(NSIndexSet *)arg1 ;
-(NSIndexSet *)viewColumnIndexesInCurrentRow;
-(void)setViewColumnIndexesInCurrentRow:(NSIndexSet *)arg1 ;
@end

