/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/CRObject.h>

@class CRTree, NSArray, CRWeakReference;

@interface CRTreeNode : CRObject {

	CRTree* _tree;
	NSArray* _children;

}

@property (assign,nonatomic,__weak) CRTree * tree;                     //@synthesize tree=_tree - In the implementation block
@property (assign,nonatomic,__weak) CRTreeNode * parent; 
@property (nonatomic,retain) CRWeakReference * parentRef; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) NSArray * children;                       //@synthesize children=_children - In the implementation block
+(id)CRProperties;
-(NSArray *)children;
-(void)setParent:(CRTreeNode *)arg1 ;
-(CRTree *)tree;
-(CRTreeNode *)parent;
-(id)parentReference;
-(void)setTree:(CRTree *)arg1 ;
-(void)removeNode:(id)arg1 ;
-(id)initWithValue:(id)arg1 parent:(id)arg2 tree:(id)arg3 ;
-(BOOL)isLoopNode;
-(id)insertNodeWithValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isInLoop;
-(void)setChildren:(NSArray *)arg1 ;
-(void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2 ;
@end

