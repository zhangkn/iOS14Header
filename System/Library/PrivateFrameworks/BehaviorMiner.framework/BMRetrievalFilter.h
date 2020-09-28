/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface BMRetrievalFilter : NSObject {

	long long _operand;
	long long _inclusionOperator;
	NSSet* _items;
	NSSet* _types;

}

@property (assign,nonatomic) long long operand;                        //@synthesize operand=_operand - In the implementation block
@property (assign,nonatomic) long long inclusionOperator;              //@synthesize inclusionOperator=_inclusionOperator - In the implementation block
@property (nonatomic,retain) NSSet * items;                            //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSSet * types;                            //@synthesize types=_types - In the implementation block
+(id)filterWithOperand:(long long)arg1 inclusionOperator:(long long)arg2 types:(id)arg3 ;
+(id)filterWithOperand:(long long)arg1 inclusionOperator:(long long)arg2 items:(id)arg3 ;
-(NSSet *)items;
-(NSSet *)types;
-(id)rulePredicate;
-(void)setOperand:(long long)arg1 ;
-(void)setItems:(NSSet *)arg1 ;
-(long long)inclusionOperator;
-(void)setTypes:(NSSet *)arg1 ;
-(long long)operand;
-(void)setInclusionOperator:(long long)arg1 ;
@end
