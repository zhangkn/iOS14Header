/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:30 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTCellWillChangeProtocol.h>
#import <TSTables/TSTMergeChangeProtocol.h>

@class TSTTableInfo, TSCECalculationEngine, NSMutableArray, TSTTableModel, NSArray;

@interface TSTCategoryOwner : NSObject <TSTCellWillChangeProtocol, TSTMergeChangeProtocol> {

	TSTTableInfo* _tableInfo;
	TSCECalculationEngine* _calcEngine;
	UUIDData<TSP::UUIDData> _baseTableUID;
	UUIDData<TSP::UUIDData> _ownerUID;
	NSMutableArray* _groupBys;

}

@property (assign,nonatomic) TSTTableInfo * tableInfo;                          //@synthesize tableInfo=_tableInfo - In the implementation block
@property (nonatomic,readonly) TSTTableModel * tableModel; 
@property (assign,nonatomic) UUIDData<TSP::UUIDData> baseTableUID;              //@synthesize baseTableUID=_baseTableUID - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> ownerUID;                  //@synthesize ownerUID=_ownerUID - In the implementation block
@property (nonatomic,retain) NSArray * groupBys;                                //@synthesize groupBys=_groupBys - In the implementation block
-(void)dealloc;
-(void)teardown;
-(TSTTableModel *)tableModel;
-(id)description;
-(TSTTableInfo *)tableInfo;
-(void)setTableInfo:(TSTTableInfo *)arg1 ;
-(void)saveToArchive:(CategoryOwnerArchive*)arg1 archiver:(id)arg2 ;
-(UUIDData<TSP::UUIDData>)ownerUID;
-(id)calcEngine;
-(UUIDData<TSP::UUIDData>)baseTableUID;
-(void)setOwnerUID:(UUIDData<TSP::UUIDData>)arg1 ;
-(id)initWithBaseTableUID:(const UUIDData<TSP::UUIDData>*)arg1 ownerUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(id)initWithBaseTableUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)initWithArchive:(const CategoryOwnerArchive*)arg1 unarchiver:(id)arg2 forBaseTableUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(void)unregisterFromCalcEngine;
-(void)updateWithDocumentRoot:(id)arg1 ;
-(void)setBaseTableUID:(UUIDData<TSP::UUIDData>)arg1 ;
-(void)willApplyCell:(id)arg1 baseCellCoord:(TSUModelCellCoord)arg2 tableUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(void)willApplyBaseCellMap:(id)arg1 tableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)didAddRows:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)remapTableUIDsInFormulasWithMap:(const UUIDMap<TSP::UUIDMap>*)arg1 calcEngine:(id)arg2 ;
-(id)groupByByUid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)registerGroupBy:(id)arg1 ;
-(int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)unregisterGroupBy:(id)arg1 ;
-(void)willApplyConcurrentCellMap:(id)arg1 tableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)willRemoveRows:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 tableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)didMergeRange:(TSUModelCellRect)arg1 ;
-(void)didUnmergeRange:(TSUModelCellRect)arg1 ;
-(void)unregisterFromDistributors;
-(void)registerWithDistributors;
-(BOOL)hasEnabledGroupBys;
-(UUIDData<TSP::UUIDData>)p_willApplyCell:(id)arg1 baseCellCoord:(TSUModelCellCoord)arg2 refreshCategoryInfo:(BOOL)arg3 ;
-(void)setGroupBys:(NSArray *)arg1 ;
-(id)registerGroupByForColumns:(id)arg1 ;
-(id)categoryInfos;
-(NSArray *)groupBys;
@end
