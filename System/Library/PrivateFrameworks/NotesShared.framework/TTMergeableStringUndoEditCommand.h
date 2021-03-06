/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringUndoCommand.h>

@class NSString;

@interface TTMergeableStringUndoEditCommand : NSObject <TTMergeableStringUndoCommand> {

	vector<TopoIDRange, std::__1::allocator<TopoIDRange> >* _deleteRanges;
	vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > >* _insertStrings;

}

@property (nonatomic,readonly) vector<TopoIDRange* deleteRanges;                              //@synthesize deleteRanges=_deleteRanges - In the implementation block
@property (nonatomic,readonly) vector<std::__1::pair<TopoIDRange* insertStrings;              //@synthesize insertStrings=_insertStrings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(BOOL)addToGroup:(id)arg1 ;
-(vector<std::__1::pair<TopoIDRange*)insertStrings;
-(vector<TopoIDRange*)deleteRanges;
-(id)init;
-(void)updateInsertTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(void)applyToString:(id)arg1 ;
-(NSString *)description;
@end

