/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIDynamicAnimator, NSMutableArray, NSArray;

@interface UIDynamicBehavior : NSObject {

	UIDynamicAnimator* _context;
	NSMutableArray* _items;
	NSMutableArray* _behaviors;
	NSMutableArray* _addedBehaviors;
	/*^block*/id _action;

}

@property (nonatomic,copy,readonly) NSArray * childBehaviors; 
@property (nonatomic,copy) id action;                                            //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIDynamicAnimator * dynamicAnimator; 
+(void)initialize;
+(BOOL)_isPrimitiveBehavior;
-(id)items;
-(id)action;
-(void)_addItem:(id)arg1 ;
-(void)_changedParameterForBody:(id)arg1 ;
-(id)_itemsDescription;
-(void)willMoveToAnimator:(id)arg1 ;
-(id)_context;
-(void)_step;
-(BOOL)allowsAnimatorToStop;
-(id)init;
-(void)_reattachAutolayoutToItemIfNecessary:(id)arg1 ;
-(void)_detachAutolayoutFromItemIfNecessary:(id)arg1 ;
-(void)_updateAutolayoutEngagementForItemIfNecessary:(id)arg1 detach:(BOOL)arg2 ;
-(void)setAction:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(id)_items;
-(void)_removeItem:(id)arg1 ;
-(void)_reevaluate:(unsigned long long)arg1 ;
-(UIDynamicAnimator *)dynamicAnimator;
-(void)_setContext:(id)arg1 ;
-(NSArray *)childBehaviors;
-(void)addChildBehavior:(id)arg1 ;
-(id)description;
-(void)_setItems:(id)arg1 ;
-(void)removeChildBehavior:(id)arg1 ;
@end

