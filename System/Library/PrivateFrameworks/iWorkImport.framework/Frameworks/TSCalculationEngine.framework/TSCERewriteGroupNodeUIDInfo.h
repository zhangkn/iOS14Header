/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@interface TSCERewriteGroupNodeUIDInfo : NSObject {

	UUIDData<TSP::UUIDData> _groupByUid;
	UUIDMap<TSP::UUIDMap>* _groupNodeUIDMap;

}
-(id)description;
-(void)saveToMessage:(RewriteGroupNodeUIDInfoArchive*)arg1 ;
-(const UUIDData<TSP::UUIDData>*)groupByUid;
-(id)initFromMessage:(const RewriteGroupNodeUIDInfoArchive*)arg1 ;
-(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)originalGroupNodeUIDs;
-(const UUIDMap<TSP::UUIDMap>*)groupNodeUIDMap;
-(id)initWithGroupByUid:(const UUIDData<TSP::UUIDData>*)arg1 groupNodeUIDMap:(const UUIDMap<TSP::UUIDMap>*)arg2 ;
@end
